/**********************************************************************************
**                                                                               **
**                               EXAMEN                                          **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************

const int led0 = 5;          
const int led1 = 6;          
const int led2 = 7;          
const int entrada = 2;
 int num = 0 ;
unsigned long  n= 100;
//********** Setup ****************************************************************
void setup()                // run once, when the sketch starts
{
 pinMode (entrada , INPUT);
  pinMode(led0, OUTPUT);    
  pinMode(led1, OUTPUT);    
  pinMode(led2, OUTPUT);
}

//********** Loop *****************************************************************
void loop()   // run over and over again
{
 if( num==8)
 {
  num = 0;
            
 }
 else 
 {
  if (digitalRead(entrada) == 0)
  {
  num = num + 1;
 }
 else 
 {
  num = num;
 }
 if (num ==0 )
{
    digitalWrite(led0, 0);  
     digitalWrite(led1, 0);
     digitalWrite(led2, 0);
     delay (n);
 }
 else if (num ==1 )
 {
    digitalWrite(led0, 0);  
     digitalWrite(led1, 0)  ;
     digitalWrite(led2, 1);
     delay (n);
 }
 else if (num ==2 )
 {
    digitalWrite(led0, 0);  
     digitalWrite(led1, 1)  ;
     digitalWrite(led2, 0);
     delay (n);
 }
 else if (num ==3 )
 {
    digitalWrite(led0, 0);  
     digitalWrite(led1, 1)  ;
     digitalWrite(led2, 1);
     delay (n);
 }
 else if (num ==4 )
 {
    digitalWrite(led0, 1);  
     digitalWrite(led1, 0)  ;
     digitalWrite(led2, 0);
     delay (n);
 }

  else if (num ==5 )
 {
    digitalWrite(led0, 1);  
     digitalWrite(led1, 0)  ;
     digitalWrite(led2, 1);
     delay (n);
 }

 else if (num ==6 )
 {
    digitalWrite(led0, 1);  
     digitalWrite(led1, 1)  ;
     digitalWrite(led2, 0);
     delay (n);
 }
else 
{
  digitalWrite (led0 , 1);
  digitalWrite (led1 , 1);
  digitalWrite (led2 , 1);
  delay (n);
  
}
 }
 
}


//********** Funcions *************************************************************




