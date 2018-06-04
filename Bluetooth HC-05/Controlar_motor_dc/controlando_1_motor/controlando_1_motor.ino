// antes de realizar o upload do codigo desconectar os RXD e TXD

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(8, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0)
  {
    char data = Serial.read(); // reading the data received from the bluetooh module
    switch(data)
    {
      case 'a': //when a is pressed on the app on your smartphone
        digitalWrite(8, HIGH);
        break;
      case 'd': //when a is pressed on the app on your smartphone
        digitalWrite(8, LOW);
        break;
    }
    Serial.println(data);
  }
  delay(50);
}
