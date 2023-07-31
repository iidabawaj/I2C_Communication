//Master

// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int botao1 = 11;
bool ebotao1 = LOW;
bool confbotao1 = LOW;

char comando;

// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  pinMode(botao1, INPUT_PULLUP);
  
  Serial.begin(9600);
}


// the loop routine runs over and over again forever:
void loop() 
{
  
  ebotao1=digitalRead(botao1);
  
  switch (ebotao1)
{
   case HIGH:
     Serial.println("A");
   break;

   case LOW:
      Serial.println("a");
   break;

   default:
   break; 
}

}  