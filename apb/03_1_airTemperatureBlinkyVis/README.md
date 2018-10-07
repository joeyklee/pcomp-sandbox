# Readme

Steps!

## 1. Plug in your arduino

## 2. Upload the arduino sketch

## 3. Terminal 1: Install and Start your node serial server

```
cd p5.serialserver

npm install

node startserver.js
```

## 3. Terminal 2: Start a local server for your p5 sketch

```
cd simpleViewer

python -m SimpleHTTPServer

// or if you have npm http-server installed
// http-server
```

NOTE: make sure to change the serial port where your data is coming from at:

in sketch.js:

```

// Assuming our Arduino is connected, let's open the connection to it
// Change this to the name of your arduino's serial port
serial.open("/dev/cu.usbmodem1411");

```
