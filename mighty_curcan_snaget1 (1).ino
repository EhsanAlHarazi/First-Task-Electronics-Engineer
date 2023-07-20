// C++ code
//
void setup()
{
  pinMode(3, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);

  digitalWrite(3, HIGH);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(3000); // Wait for 3000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, HIGH);
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}