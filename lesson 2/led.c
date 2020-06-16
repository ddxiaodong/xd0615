void setup()
{
  int i;
  for(i=0;i<9;i++)
  {
    pinMode(i, OUTPUT);
  }
}

void loop()
{
  int i;
  for(i=0;i<9;i++)
  {  
    digitalWrite(i, HIGH);
    delay(500); // Wait for 1000 millisecond(s)
    digitalWrite(i, LOW);
    delay(1000); // Wait for 1000 millisecond(s)
  }
}