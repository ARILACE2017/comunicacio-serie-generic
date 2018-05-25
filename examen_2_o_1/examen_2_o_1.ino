const int led0 = 5;          
const int led1 = 6;          
const int led2 = 7;          
const int led3 = 8;          
const int led4 = 9;          
const int led5 = 10;         
const int led6 = 11;        
const int led7 = 12;
const int  s = 4;
const int  e = 3;
const int i = 2;
unsigned long vel = 2000;
unsigned long inici = 0;
void setup() {
   pinMode(led0, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(led1, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(led2, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(led3, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(led4, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(led5, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(led6, OUTPUT);     // definir el pin 11 com una sortida
  pinMode(led7, OUTPUT);     // definir el pin 12 com una sortida
 pinMode(e, INPUT );     // definir el pin 12 com una sortida
  pinMode(s, OUTPUT );     // definir el pin 12 com una sortida 
   pinMode(i, INPUT);     // definir el pin 12 com una sortida
   digitalWrite (e,0);
digitalWrite (s,0);
digitalWrite (i,0);
if (digitalRead (i)==1)
{inici=1;
}

}

void loop() {
if (digitalRead(e)==1)
{
  inici=1;
}

  if (inici==1)
  {
  digitalWrite(led0, 1);    // posar a 5V el pin 5
  digitalWrite(led1,0);    // posar a 5V el pin 6
  digitalWrite(led2, 0);    // posar a 5V el pin 7
  digitalWrite(led3, 0);    // posar a 5V el pin 8
  digitalWrite(led4, 0);    // posar a 5V el pin 9
  digitalWrite(led5,0);    // posar a 5V el pin 10
  digitalWrite(led6, 0);    // posar a 5V el pin 11
  digitalWrite(led7, 0);    // posar a 5V el pin 12
  digitalWrite(s, 0);    // posar a 5V el pin 12
  delay(vel);     
  digitalWrite(led0, 0);    // posar a 5V el pin 5
  digitalWrite(led1,1);    // posar a 5V el pin 6
  digitalWrite(led2, 0);    // posar a 5V el pin 7
  digitalWrite(led3, 0);    // posar a 5V el pin 8
  digitalWrite(led4, 0);    // posar a 5V el pin 9
  digitalWrite(led5,0);    // posar a 5V el pin 10
  digitalWrite(led6, 0);    // posar a 5V el pin 11
  digitalWrite(led7, 0);    // posar a 5V el pin 12
   digitalWrite(s, 0);    // posar a 5V el pin 12
  delay(vel);    
    digitalWrite(led0, 0);    // posar a 5V el pin 5
  digitalWrite(led1,0);    // posar a 5V el pin 6
  digitalWrite(led2, 1);    // posar a 5V el pin 7
  digitalWrite(led3, 0);    // posar a 5V el pin 8
  digitalWrite(led4, 0);    // posar a 5V el pin 9
  digitalWrite(led5,0);   // posar a 5V el pin 10
  digitalWrite(led6, 0);    // posar a 5V el pin 11
  digitalWrite(led7, 0);    // posar a 5V el pin 12
  digitalWrite(s, 0);    // posar a 5V el pin 12 
  delay(vel); 
    digitalWrite(led0, 0);    // posar a 5V el pin 5
  digitalWrite(led1,0);    // posar a 5V el pin 6
  digitalWrite(led2, 0);    // posar a 5V el pin 7
  digitalWrite(led3, 1);    // posar a 5V el pin 8
  digitalWrite(led4, 0);    // posar a 5V el pin 9
  digitalWrite(led5,0);    // posar a 5V el pin 10
  digitalWrite(led6, 0);    // posar a 5V el pin 11
  digitalWrite(led7, 0);    // posar a 5V el pin 12
   digitalWrite(s, 0);    // posar a 5V el pin 12
  delay(vel);     
  digitalWrite(led0, 0);    // posar a 5V el pin 5
  digitalWrite(led1,0);    // posar a 5V el pin 6
  digitalWrite(led2, 0);    // posar a 5V el pin 7
  digitalWrite(led3, 0);    // posar a 5V el pin 8
  digitalWrite(led4, 1);    // posar a 5V el pin 9
  digitalWrite(led5,0);    // posar a 5V el pin 10
  digitalWrite(led6, 0);    // posar a 5V el pin 11
  digitalWrite(led7, 0);    // posar a 5V el pin 12
   digitalWrite(s, 0);    // posar a 5V el pin 12
  delay(vel);     

     
  digitalWrite(led0, 0);    // posar a 5V el pin 5
  digitalWrite(led1,0);    // posar a 5V el pin 6
  digitalWrite(led2, 0);    // posar a 5V el pin 7
  digitalWrite(led3, 0);    // posar a 5V el pin 8
  digitalWrite(led4, 0);    // posar a 5V el pin 9
  digitalWrite(led5,1);    // posar a 5V el pin 10
  digitalWrite(led6, 0);    // posar a 5V el pin 11
  digitalWrite(led7, 0);    // posar a 5V el pin 12
   digitalWrite(s, 0);    // posar a 5V el pin 12
  delay(vel);     

  
  digitalWrite(led0, 0);    // posar a 5V el pin 5
  digitalWrite(led1,0);    // posar a 5V el pin 6
  digitalWrite(led2, 0);    // posar a 5V el pin 7
  digitalWrite(led3, 0);    // posar a 5V el pin 8
  digitalWrite(led4, 0);    // posar a 5V el pin 9
  digitalWrite(led5,0);    // posar a 5V el pin 10
  digitalWrite(led6, 1);    // posar a 5V el pin 11
  digitalWrite(led7, 0);    // posar a 5V el pin 12
   digitalWrite(s, 0);    // posar a 5V el pin 12
  delay(vel);   

  digitalWrite(led0, 0);    // posar a 5V el pin 5
  digitalWrite(led1,0);    // posar a 5V el pin 6
  digitalWrite(led2, 0);    // posar a 5V el pin 7
  digitalWrite(led3, 0);    // posar a 5V el pin 8
  digitalWrite(led4, 0);    // posar a 5V el pin 9
  digitalWrite(led5,0);    // posar a 5V el pin 10
  digitalWrite(led6, 0);    // posar a 5V el pin 11
  digitalWrite(led7, 1);    // posar a 5V el pin 12
   digitalWrite(s, 0);    // posar a 5V el pin 12
  delay(vel);  

    digitalWrite(led0, 0);    // posar a 5V el pin 5
  digitalWrite(led1,0);    // posar a 5V el pin 6
  digitalWrite(led2, 0);    // posar a 5V el pin 7
  digitalWrite(led3, 0);    // posar a 5V el pin 8
  digitalWrite(led4, 0);    // posar a 5V el pin 9
  digitalWrite(led5,0);    // posar a 5V el pin 10
  digitalWrite(led6, 0);    // posar a 5V el pin 11
  digitalWrite(led7, 0);    // posar a 5V el pin 12
   digitalWrite(s,1 );    // posar a 5V el pin 12
  delay(vel); 
inici =0;

 }
 

  
}


