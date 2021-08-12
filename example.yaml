apiVersion: apps/v1
kind: Deployment
metadata:
  annotations:
  labels:
    app: edge-facial-expression-recogtion
  name: facial-expression-recogtion
  namespace: default
spec:
  replicas: 1
  selector:
    matchLabels:
      app: facial-expression-recogtion
  template:
    metadata:
      labels:
        app: facial-expression-recogtion
    spec:
      containers:
      - image: kubeedge/facial-expression-recogtion:v1
        imagePullPolicy: IfNotPresent
        name: client
        command: ["/bin/sh"]
        args: ["-c","/home/pi/fer_detection/code/run_camera.sh"]
        env:
        - name: DISPLAY
          value: :0
        volumeMounts:
        - mountPath: /tmp/.X11-unix
          name: x11
        - mountPath: /dev/video0
          name: video
        securityContext:
          privileged: true
      volumes:
      - name: x11
        hostPath:
          path: /tmp/.X11-unix
      - name: video
        hostPath:
          path: /dev/video0