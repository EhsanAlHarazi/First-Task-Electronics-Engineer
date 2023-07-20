// C++ code
//
void setup()
{
  pinMode(9, OUTPUT);
  pinMode(7, OUTPUT);
   pinMode(8, OUTPUT);
  pinMode(6, OUTPUT);
   pinMode(5, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);

  digitalWrite(9, HIGH);
   digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  
  digitalWrite(9, LOW);
   digitalWrite(8, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  
}

void loop()
{
  digitalWrite(7, HIGH);
  delay(3000); // Wait for 3000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(8, HIGH);
  delay(3000); // Wait for 3000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
   digitalWrite(9, HIGH);
  delay(3000); // Wait for 3000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
   digitalWrite(6, HIGH);
  delay(3000); // Wait for 3000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
}