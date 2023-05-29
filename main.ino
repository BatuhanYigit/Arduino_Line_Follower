

int Sol_i = 6;
int Sol_g = 5;
int Sag_i = 10;
int Sag_g = 9;


void setup()
{
   pinMode(4, INPUT); //SOL
   pinMode(3, INPUT); //ORTA
   pinMode(2, INPUT); // SAG

   pinMode(Buzzer, OUTPUT); 
}

void loop () {
  
 tone(Buzzer, 18, 300);
 digitalWrite(Buzzer, LOW);
  
  while (1) {
  
  if (digitalRead(3)==HIGH){

    analogWrite(Sag_i,90)
    analogWrite(Sag_g,0);
    analogWrite(Sol_i,90)
    analogWrite(Sol_g,0);
  
   
   }
  else   if (digitalRead(4)==HIGH){
     analogWrite(Sag_i,90)
    analogWrite(Sag_g,0);
    analogWrite(Sol_i,0)
    analogWrite(Sol_g,90);
    
   }
  else   if (digitalRead(2)==HIGH){
     analogWrite(Sag_i,0)
    analogWrite(Sag_g,255);
    analogWrite(Sol_i,255)
    analogWrite(Sol_g,0);
   
   }
   }
}