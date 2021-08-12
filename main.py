from flask import Flask, request, jsonify

app = Flask(__name__)

@app.route("/lite/prediction", methods=["POST"])
def lite_predict():
    if request.method == "POST":
        data = request.json
        # jsonify(data)
        return data["url"]
    else:
        return "Invalid"
