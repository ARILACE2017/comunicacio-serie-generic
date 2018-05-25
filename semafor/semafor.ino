const int led2 = 7;          
const int led3 = 8;          
const int led4 = 9;          
const int led5 = 10;         
const int led6 = 11;        
const int led7 = 12;
unsigned long vel = 600;
unsigned long vel2 =1200;
unsigned long vel3 = 900;

void setup() {
  // put your setup code here, to run once:

}

void loop() {

   pinMode(led2, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(led3, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(led4, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(led5, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(led6, OUTPUT);     // definir el pin 11 com una sortida
  pinMode(led7, OUTPUT);     // definir el pin 12 com una sortida

  // put your main code here, to run repeatedly:
  digitalWrite(led2, 1);    // posar a 5V el pin 7
  digitalWrite(led3, 0);    // posar a 5V el pin 8
  digitalWrite(led4, 0);    // posar a 5V el pin 9
  digitalWrite(led5,1);    // posar a 5V el pin 10
  digitalWrite(led6, 0);    // posar a 5V el pin 11
  digitalWrite(led7, 0);    // posar a 5V el pin 12
  
  delay(vel); 

    digitalWrite(led2, 1);    // posar a 5V el pin 7
  digitalWrite(led3, 0);    // posar a 5V el pin 8
  digitalWrite(led4, 0);    // posar a 5V el pin 9
  digitalWrite(led5,0);    // posar a 5V el pin 10
  digitalWrite(led6, 0);    // posar a 5V el pin 11
  digitalWrite(led7, 1);    // posar a 5V el pin 12
  
  delay(vel); 

     digitalWrite(led2, 1);    // posar a 5V el pin 7
  digitalWrite(led3, 0);    // posar a 5V el pin 8
  digitalWrite(led4, 0);    // posar a 5V el pin 9
  digitalWrite(led5,0);    // posar a 5V el pin 10
  digitalWrite(led6, 0);    // posar a 5V el pin 11
  digitalWrite(led7, 1);    // posar a 5V el pin 12
  
  delay(vel); 

     digitalWrite(led2, 1);    // posar a 5V el pin 7
  digitalWrite(led3, 0);    // posar a 5V el pin 8
  digitalWrite(led4, 0);    // posar a 5V el pin 9
  digitalWrite(led5,0);    // posar a 5V el pin 10
  digitalWrite(led6, 0);    // posar a 5V el pin 11
  digitalWrite(led7, 1);    // posar a 5V el pin 12
  
  delay(vel); 
     digitalWrite(led2, 1);    // posar a 5V el pin 7
  digitalWrite(led3, 0);    // posar a 5V el pin 8
  digitalWrite(led4, 0);    // posar a 5V el pin 9
  digitalWrite(led5,0);    // posar a 5V el pin 10
  digitalWrite(led6, 0);    // posar a 5V el pin 11
  digitalWrite(led7, 1);    // posar a 5V el pin 12
  
  delay(vel); 
     digitalWrite(led2, 1);    // posar a 5V el pin 7
  digitalWrite(led3, 0);    // posar a 5V el pin 8
  digitalWrite(led4, 0);    // posar a 5V el pin 9
  digitalWrite(led5,0);    // posar a 5V el pin 10
  digitalWrite(led6, 1);    // posar a 5V el pin 11
  digitalWrite(led7, 0);    // posar a 5V el pin 12
  
  delay(vel3); 

     digitalWrite(led2, 1);    // posar a 5V el pin 7
  digitalWrite(led3, 0);    // posar a 5V el pin 8
  digitalWrite(led4, 0);    // posar a 5V el pin 9
  digitalWrite(led5,1);    // posar a 5V el pin 10
  digitalWrite(led6, 0);    // posar a 5V el pin 11
  digitalWrite(led7, 0);    // posar a 5V el pin 12
  
  delay(vel2); 

     digitalWrite(led2, 0);    // posar a 5V el pin 7
  digitalWrite(led3, 0);    // posar a 5V el pin 8
  digitalWrite(led4, 1);    // posar a 5V el pin 9
  digitalWrite(led5,1);    // posar a 5V el pin 10
  digitalWrite(led6, 0);    // posar a 5V el pin 11
  digitalWrite(led7, 0);    // posar a 5V el pin 12
  
  delay(vel); 

  
     digitalWrite(led2, 0);    // posar a 5V el pin 7
  digitalWrite(led3, 0);    // posar a 5V el pin 8
  digitalWrite(led4, 1);    // posar a 5V el pin 9
  digitalWrite(led5,1);    // posar a 5V el pin 10
  digitalWrite(led6, 0);    // posar a 5V el pin 11
  digitalWrite(led7, 0);    // posar a 5V el pin 12
  
  delay(vel);

  
     digitalWrite(led2, 0);    // posar a 5V el pin 7
  digitalWrite(led3, 0);    // posar a 5V el pin 8
  digitalWrite(led4, 1);    // posar a 5V el pin 9
  digitalWrite(led5,1);    // posar a 5V el pin 10
  digitalWrite(led6, 0);    // posar a 5V el pin 11
  digitalWrite(led7, 0);    // posar a 5V el pin 12
  
  delay(vel);

  
     digitalWrite(led2, 0);    // posar a 5V el pin 7
  digitalWrite(led3, 0);    // posar a 5V el pin 8
  digitalWrite(led4, 1);    // posar a 5V el pin 9
  digitalWrite(led5,1);    // posar a 5V el pin 10
  digitalWrite(led6, 0);    // posar a 5V el pin 11
  digitalWrite(led7, 0);    // posar a 5V el pin 12
  
  delay(vel);

  
     digitalWrite(led2, 0);    // posar a 5V el pin 7
  digitalWrite(led3, 1);    // posar a 5V el pin 8
  digitalWrite(led4, 0);    // posar a 5V el pin 9
  digitalWrite(led5,1);    // posar a 5V el pin 10
  digitalWrite(led6, 0);    // posar a 5V el pin 11
  digitalWrite(led7, 0);    // posar a 5V el pin 12
  
  delay(vel3);

  
     digitalWrite(led2, 1);    // posar a 5V el pin 7
  digitalWrite(led3, 0);    // posar a 5V el pin 8
  digitalWrite(led4, 0);    // posar a 5V el pin 9
  digitalWrite(led5,1);    // posar a 5V el pin 10
  digitalWrite(led6, 0);    // posar a 5V el pin 11
  digitalWrite(led7, 0);    // posar a 5V el pin 12
  
  delay(vel);
}
