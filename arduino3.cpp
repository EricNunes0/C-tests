#define potPin 0
#define ledPin 11
int read = 0;

void setup()
{
  pinMode(potPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  read = analogRead(potPin);
  read = map(read, 0, 1023, 0, 255);
  analogWrite(ledPin, read);
  delay(10);
}
