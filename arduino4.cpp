int redLed = 11;
int yellowLed = 12;
int greenLed = 13;
int buttonPin = 7;
int buttonState = 0;
bool buttonPressed = false;
int buzzer = 8;
int redTime = 1; // Tempo em que o semáforo ficará vermelho
int yellowTime = 1; // Tempo em que o semáforo ficará amarelo
int greenTime = 1; // Tempo em que o semáforo ficará verde
int tempo = 400; // Tempo de som do buzzer;

void setup()
{
  pinMode(redLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(buttonPin, INPUT);
  pinMode(buzzer,OUTPUT);
}

void loop()
{ 
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH) { //Se buttonState for igual a HIGH ou 1
    if(buttonPressed == true) {
    	buttonPressed = false;
      	delay(0.5 * 1000);
    } else if(buttonPressed == false) {
    	buttonPressed = true;
      	delay(0.5 * 1000);
    }
  } else {
    if (buttonPressed == true) {
      /* Vermelho aceso */
      digitalWrite(redLed, HIGH);
      digitalWrite(yellowLed, LOW);
      digitalWrite(greenLed, LOW);
  	  tone(buzzer, 330,tempo);
      delay(redTime * 1000);
      /* Verde aceso */
      digitalWrite(redLed, LOW);
      digitalWrite(greenLed, HIGH);
  	  tone(buzzer, 262,tempo);
      delay(greenTime * 1000);
      /* Amarelo aceso */
      digitalWrite(greenLed, LOW);
      digitalWrite(yellowLed, HIGH);
  	  tone(buzzer, 294,tempo);
      delay(yellowTime * 1000);
    }
    else {
      digitalWrite(redLed, LOW);
      digitalWrite(yellowLed, LOW);
      digitalWrite(greenLed, LOW);
    }
  }
}
