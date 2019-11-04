int smokeA0 = A5;
// Your threshold value
int sensorThres = 400;

void setup() 
{
  pinMode(smokeA0, INPUT);
  Serial.begin(115200);
}

void loop() 
{
  int analogSensor = analogRead(smokeA0);

  Serial.print("Carbon Dioxide Quality:--> ");
  Serial.print(analogSensor);
  Serial.println(" PPM");
  // Checks if it has reached the threshold value
  delay(1000);
}
