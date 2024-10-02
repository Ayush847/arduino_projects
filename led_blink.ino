int led = 13; //led is connected to pin number 13
void setup() {
  pinMode(led, OUTPUT); //pin 13 is set to OUTPUT
  Serial.begin(9600);
}
void loop(){
  digitalWrite(led, HIGH); //led will turn on
  delay(1000);
  digitalWrite(led, LOW); //led will turn off
  delay(1000);
}

//youtube link for this : https://youtu.be/77I4C4IlVUQ
