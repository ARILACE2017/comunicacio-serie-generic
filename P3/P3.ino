/**********************************************************************************
**                                                                               **
**                              Array de 8 LEDs                                  **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int led0 = 5;          // donar nom al pin 5 de l’Arduino
const int led1 = 6;          // donar nom al pin 6 de l’Arduino
const int led2 = 7;          // donar nom al pin 7 de l’Arduino
const int led3 = 8;          // donar nom al pin 8 de l’Arduino
const int led4 = 9;          // donar nom al pin 9 de l’Arduino
const int led5 = 10;         // donar nom al pin 10 de l’Arduino
const int led6 = 11;         // donar nom al pin 11 de l’Arduino
const int led7 = 12;         // donar nom al pin 12 de l’Arduino
const int buttonPin = 2; 
//********** Setup ****************************************************************
void setup()
{
  pinMode(led0, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(led1, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(led2, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(led3, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(led4, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(led5, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(led6, OUTPUT);     // definir el pin 11 com una sortida
  pinMode(led7, OUTPUT);     // definir el pin 12 com una sortida
 pinMode(buttonPin, INPUT);
}

//********** Loop *****************************************************************
void loop()
{
   if (digitalRead(buttonPin) == 0)
  {
    
       digitalWrite(led0, 1);  
     digitalWrite(led1, 1);
     digitalWrite(led2, 1);
     digitalWrite(led3, 1);
     digitalWrite(led4, 1);
     digitalWrite(led5, 1);
     digitalWrite(led6, 1);
     digitalWrite(led7, 1);                     
     }
          else
          {
  digitalWrite(led0, 0);  
     digitalWrite(led1, 0);
     digitalWrite(led2, 0);
     digitalWrite(led3, 0);
     digitalWrite(led4, 0);
     digitalWrite(led5, 0);
     digitalWrite(led6, 0);
     digitalWrite(led7, 0);
          }
 }


//********** Funcions *************************************************************

