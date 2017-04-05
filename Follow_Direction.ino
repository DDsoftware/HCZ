

int ENA=10; 
int ENB=5; 

int IN1=9;
int IN2=6;

int IN3=7;
int IN4=8;

void setup()
{
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  pinMode(ENA,OUTPUT);
  pinMode(ENB,OUTPUT);
  digitalWrite(ENA,HIGH);  
  digitalWrite(ENB,HIGH);      

}


void _mForward()
{
 digitalWrite(IN1,LOW);
 digitalWrite(IN2,HIGH);
 digitalWrite(IN3,LOW);
 digitalWrite(IN4,HIGH);
 
}

void _mBack()
{
 digitalWrite(IN1,HIGH);
 digitalWrite(IN2,LOW);
 digitalWrite(IN3,HIGH);
 digitalWrite(IN4,LOW);
 
}

void _mLeft()
{
 digitalWrite(IN1,LOW);      
  digitalWrite(IN2,HIGH);
  digitalWrite(IN3,LOW);      
  digitalWrite(IN4,LOW); 
}

void _mRight()
{
 digitalWrite(IN1,LOW);      
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);      
  digitalWrite(IN4,HIGH); 
} 
void _mStop()
{
  digitalWrite(IN1,LOW);      
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);      
  digitalWrite(IN4,LOW); 
} 


void loop()
{
  _mForward();
  delay(2*1000);

  _mStop();
  delay(1000);
  
  _mLeft();
  delay(400);

  _mStop();
  delay(1000);
  
}


