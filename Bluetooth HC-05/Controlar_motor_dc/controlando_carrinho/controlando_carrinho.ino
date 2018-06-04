// antes de realizar o upload do codigo desconectar os RXD e TXD

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(8, OUTPUT); // frente lado esquerdo
  pinMode(9, OUTPUT); // tras lado direito
  pinMode(10, OUTPUT); // tras lado esquerdo
  pinMode(11, OUTPUT); // frente lado direito
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0)
  {
    char data = Serial.read(); // reading the data received from the bluetooh module
    switch(data)
    {
      case 'a': //para
        digitalWrite(8, LOW);
        digitalWrite(9, LOW);
        digitalWrite(10, LOW);
        digitalWrite(11, LOW);
        break;
      case 'd': // Anda para frente
        digitalWrite(8, HIGH);
        digitalWrite(9, HIGH);
        digitalWrite(10, HIGH);
        digitalWrite(11, HIGH);
        break;
      case 'f': //vira para a esquerda
        digitalWrite(9, HIGH);
        digitalWrite(11, HIGH);
        break;
      case 'g': //vira para a direita
        digitalWrite(8, HIGH);
        digitalWrite(10, HIGH);
        break;      
    }
    Serial.println(data);
  }
  delay(50);
}
