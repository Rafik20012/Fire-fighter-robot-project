//Motor A
const int motorPin1  = 10; 
const int motorPin2  = 11; 
//Motor B
const int motorPin3  = 9; 
const int motorPin4  = 6; 
//Motor C
const int motorPin5  = 5; 
const int motorPin6  = 3; 
//PUMP
const int PUMP = 12;

int vSpeed;
int state;
void setup() 
{

   pinMode(PUMP,OUTPUT);

   pinMode(motorPin1, OUTPUT);
   pinMode(motorPin2, OUTPUT);
   pinMode(motorPin3, OUTPUT);
   pinMode(motorPin4, OUTPUT);
   pinMode(motorPin5, OUTPUT);
   pinMode(motorPin6, OUTPUT);     
   Serial.begin(9600);
   
digitalWrite(PUMP, HIGH);
delay(2000);
digitalWrite(PUMP, LOW);
delay(2000);
}

void loop()
{ 
if(Serial.available() >0)
  {
    state = Serial.read();
  }
   if (state == '0'){
      vSpeed=0; }
    else if (state == '1'){
      vSpeed=25;}
    else if (state == '2'){
      vSpeed=50;}
    else if (state == '3'){
      vSpeed=75;}
    else if (state == '4'){
      vSpeed=100;}
    else if (state == '5'){
      vSpeed=125;}
    else if (state == '6'){
      vSpeed=150;}
    else if (state == '7'){
      vSpeed=175;}
    else if (state == '8'){
      vSpeed=200;}
    else if (state == '9'){
      vSpeed=225;}
    else if (state == 'q'){
      vSpeed=255;}

else if(state == 'V')
{
  digitalWrite(PUMP, HIGH);  
} 
else if(state == 'v')
{
  digitalWrite(PUMP, LOW);
} 
if(state=='F')
{
  analogWrite(motorPin1, vSpeed);
  analogWrite(motorPin2, 0);
  analogWrite(motorPin3, vSpeed);
  analogWrite(motorPin4, 0);
  analogWrite(motorPin5, 0);
  analogWrite(motorPin6, 0);    
}
else if(state=='B')
{
  analogWrite(motorPin1, 0);
  analogWrite(motorPin2, vSpeed);
  analogWrite(motorPin3, 0);
  analogWrite(motorPin4, vSpeed);
  analogWrite(motorPin5, 0);
  analogWrite(motorPin6, 0);    
}
else if(state=='R')
{
  analogWrite(motorPin1, vSpeed);
  analogWrite(motorPin2, 0);
  analogWrite(motorPin3, 0);
  analogWrite(motorPin4, vSpeed);
  analogWrite(motorPin5, 0);
  analogWrite(motorPin6, 0);      
}
else if(state=='L')
{
  analogWrite(motorPin1, 0);
  analogWrite(motorPin2, vSpeed);
  analogWrite(motorPin3, vSpeed);
  analogWrite(motorPin4, 0);
  analogWrite(motorPin5, 0);
  analogWrite(motorPin6, 0);      
}
else if(state=='I')
{
  
  analogWrite(motorPin1, 0);
  analogWrite(motorPin2, 0);
  analogWrite(motorPin3, 0);
  analogWrite(motorPin4, 0);
  analogWrite(motorPin5, vSpeed);
  analogWrite(motorPin6, 0);
}
else if(state == 'G')
{
  
  analogWrite(motorPin1, 0);
  analogWrite(motorPin2, 0);
  analogWrite(motorPin3, 0);
  analogWrite(motorPin4, 0);
  analogWrite(motorPin5, 0);
  analogWrite(motorPin6, vSpeed);
}

else if(state == 'S')
{
  analogWrite(motorPin1, 0);
  analogWrite(motorPin2, 0);
  analogWrite(motorPin3, 0);
  analogWrite(motorPin4, 0);
  analogWrite(motorPin5, 0);
  analogWrite(motorPin6, 0);    
}
 
}
