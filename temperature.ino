void setup() {

pinMode(A0,INPUT);
Serial.begin(9600);
}

void loop() {
int x=analogRead(A0);
float mv=(x/1024.0)*5000;
float cel=mv/10;
Serial.print(cel);
Serial.print("*c");
Serial.println();
delay(500);
}
