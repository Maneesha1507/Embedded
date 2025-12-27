//Picture of Basic Code to read the IR Sensor
int analogPin = 3;     // Infrared Sensor (Right lead) connected to analog pin 3
                                    // outside leads to ground and +5V
int val = 0;                  // variable to store the value read

void setup()
{
  Serial.begin(9600);          //  setup serial
}

void loop()
{
  val = digitalRead(analogPin);    // read the input pin
  Serial.println(val);
  delay(1000);// debug value
}
