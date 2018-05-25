/**********************************************************************************
**                                                                               **
**                              Lector de Llum                                   **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int ldr0 = A3;         // donar nom al pin A0 de l’Arduino
const int ldr1 = A1;         // donar nom al pin A1 de l’Arduino
const int ldr2 = A2;         // donar nom al pin A2 de l’Arduino
const int led0 = 9;
const int led1 = 10;
const int led2 = 11;


int valLdr0, valLdr1, valLdr2;     // per guardar valors del ldrs

//********** Setup ****************************************************************
void setup()
{
  Serial.begin(9600);
 pinMode(led0, OUTPUT);     // definir el pin 9 com una sortida
pinMode(led1, OUTPUT);     // definir el pin 9 com una sortida
pinMode(led2, OUTPUT);     // definir el pin 9 com una sortida
}

//********** Loop *****************************************************************ñ0km t
void loop()
{
  valLdr0 = analogRead(ldr0);   // llegir valor ldr0
  valLdr1 = analogRead(ldr1);   // llegir valor ldr1
  valLdr2 = analogRead(ldr2);   // llegir valor ldr25>
 Serial.println(valLdr0);
if(valLdr0<700)
{
  valLdr0=0;
}
else
{
  valLdr0 = map(valLdr0, 700, 1000, 0, 255);   // mapejar valor de 0-1023 a 0-255

}
analogWrite(led0, valLdr0);
   
  if(valLdr1<570)
{
  valLdr1=0;
}
else
{
  valLdr1 = map(valLdr1, 570, 1000, 0, 255);   // mapejar valor de 0-1023 a 0-255

}
analogWrite(led1, valLdr1);

    
 if(valLdr2<450)
{
  valLdr2=0 ;
}
else
{
  valLdr2 = map(valLdr2, 450, 800, 0, 255);   // mapejar valor de 0-1023 a 0-255

}
 analogWrite(led2, valLdr2);
}

//********** Funcions *************************************************************



