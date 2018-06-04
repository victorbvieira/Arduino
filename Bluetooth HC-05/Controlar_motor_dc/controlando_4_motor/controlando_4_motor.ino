// antes de realizar o upload do codigo desconectar os RXD e TXD

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0)
  {
    char data = Serial.read(); // reading the data received from the bluetooh module
    switch(data)
    {
      case 'a': //when a is pressed on the app on your smartphone
        digitalWrite(8, LOW);
        digitalWrite(9, LOW);
        digitalWrite(10, LOW);
        digitalWrite(11, LOW);
        break;
      case 'd': //liga pino 8
        digitalWrite(8, HIGH);
        break;
      case 'f': //liga pino 9
        digitalWrite(9, HIGH);
        break;
      case 'g': //liga pino 10
        digitalWrite(10, HIGH);
        break;
      case 'h': //liga pino 11
        digitalWrite(11, HIGH);
        break;
      
    }
    Serial.println(data);
  }
  delay(50);
}
