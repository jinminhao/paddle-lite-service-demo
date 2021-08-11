#include "DemoCtrl.h"
#include <paddle_api.h>
void DemoCtrl::asyncHandleHttpRequest(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback)
{
    //write your application logic here
    auto json = req->getJsonObject();
    auto resp=HttpResponse::newHttpResponse();
    resp->setStatusCode(k200OK);
    resp->setContentTypeCode(CT_TEXT_HTML);
    if (json) {
        resp->setBody((*json)["url"].asString());
    } else {
        resp->setBody("Hello World!");
    }
    callback(resp);
}
