#define LED 2
#define BUTTON 8
volatile byte ledstate=0;

void setup() {
pinMode(LED,OUTPUT);
pinMode(BUTTON,INPUT_PULLDOWN);
attachInterrupt(digitalPinToInterrupt(BUTTON),blinkled,RISING);
}

void loop() {
}

void blinkled(){
  ledstate=!ledstate;
  digitalWrite(LED,ledstate);
}
