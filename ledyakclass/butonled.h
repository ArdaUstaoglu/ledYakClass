class ButonLed {
    int butonPin;
    int ledPin;
    int butonState=0;
  public:
    ButonLed(int pin1, int pin2) {
      butonPin = pin1;
      ledPin = pin2;

    }
    void setup() {
      pinMode(butonPin, INPUT);
      pinMode(ledPin, OUTPUT);
    }

    void attach(){
      butonState=digitalRead(butonPin);
      if(butonState==LOW){
        digitalWrite(ledPin,LOW);
        
        
        
      }
      else{
        digitalWrite(ledPin,HIGH);
        
        
      }
    }
private:

};
