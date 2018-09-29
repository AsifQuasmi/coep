//const int trigpin=11;
//const int echopin=5;
//long duration;
//int distance;
void setup() 
{


  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(7, OUTPUT);                 //ULTRASONIC
  pinMode(10, OUTPUT);
  pinMode(4, OUTPUT);

  pinMode(3, OUTPUT);
  pinMode(9, OUTPUT);
  
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(A4, INPUT);
  pinMode(A5, INPUT);
  Serial.begin(9600); 
//  pinMode(trigpin,OUTPUT);
//  pinMode(echopin,INPUT);

}
void goforward()
 {

  digitalWrite(13, HIGH);    //rightmotorfd
  digitalWrite(12, LOW);
  digitalWrite(7, HIGH);     //leftmotorfd
  digitalWrite(10, LOW);
  Serial.println("\n FORWARD");
}

  void gobackward()
{
 
  digitalWrite(13, LOW);    //rightmotorfd
  digitalWrite(12, HIGH);
  digitalWrite(7, LOW);     //leftmotorfd
  digitalWrite(10, HIGH);
  Serial.println("\n BACKWAED");
}

void right()
{ 
 
  digitalWrite(13, HIGH);    //rightmotorfd
  digitalWrite(12, LOW);
  digitalWrite(7, LOW);     //leftmotorfd
  digitalWrite(10, HIGH);
  Serial.println("\n RIGHT");
}
void left()
{

  digitalWrite(13, LOW);    //rightmotorfd
  digitalWrite(12, HIGH);
  digitalWrite(7, HIGH);     //leftmotorfd
  digitalWrite(10, LOW);
  Serial.println("\n LEFT");
}
void stopmotor()
{ 
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(7, LOW);
  digitalWrite(10, LOW);
  Serial.println("\n STOP");
}
void softright()
{

  digitalWrite(13, HIGH);    //rightmotorfd
  digitalWrite(12, LOW);
  digitalWrite(7, LOW);     //leftmotorfd
  digitalWrite(10, LOW);
  Serial.println("\n SOFTRIGHT");
}
void softleft()
{
 
  digitalWrite(13, LOW);    //rightmotorfd
  digitalWrite(12, LOW);
  digitalWrite(7, HIGH);     //leftmotorfd
  digitalWrite(10, LOW);
  Serial.println("\n SOFT_LEFT");
}

void loop()
{

//digitalWrite(trigpin,HIGH);
//delay(10);
//digitalWrite(trigpin,LOW);
//duration=pulseIn(echopin,HIGH);
//distance=duration*0.034/2;
//Serial.print("DISTANCE");
//Serial.println(distance);

  
   
  digitalWrite(4, HIGH); //L2107
  
  analogWrite(3,100);
  analogWrite(9,95);
  

  int val1, val2, val3, val4, val5;
  val1 = analogRead(A1);
  val2 = analogRead(A2);
  val3 = analogRead(A3);
  val4 = analogRead(A4);
  val5 = analogRead(A5);
  Serial.println(val1);
  Serial.println(val2);
  Serial.println(val3);
  Serial.println(val4);
  Serial.println(val5);
  Serial.println("\n");
  
if (val1 > 400 && val2 < 400 && val3 < 400 && val4 < 400 && val5 > 400)            //1
  {
    goforward();
}
else if (val1 > 400 && val2 > 400 && val3 < 400 && val4 > 400 && val5 > 400)       //2
  {
    goforward();
}
else if (val1 > 400 && val2 < 400 && val3 < 400 && val4 > 400 && val5 > 400)       //3
  {
    goforward();
}
else if (val1 > 400 && val2 > 400 && val3 < 400 && val4 < 400 && val5 > 400)       //4
  {
    goforward();
}
else if (val1 < 400 && val2 < 400 && val3 < 400 && val4 < 400 && val5 < 400)       //5
  {
    left();
}
else if (val1 > 400 && val2 < 400 && val3 < 400 && val4 < 400 && val5 < 400)       //6
  {                   //changes
    right();
  delay(500);
}
else if (val1 > 400 && val2 > 400 && val3 < 400 && val4 < 400 && val5 < 400)       //6
  {
   softright();
   delay(300);
   
}
else if (val1 < 400 && val2 < 400 && val3 < 400 && val4 < 400 && val5 > 400)       //7
  {
    left();
}
else if (val1 < 400 && val2 < 400 && val3 < 400 && val4 > 400 && val5 > 400)       //7
  {
    left();
}
else if (val1 < 400 && val2 > 400 && val3 > 400 && val4 > 400 && val5 < 400)       //7
  {
    goforward();
}
else if (val1 > 400 && val2 > 400 && val3 > 400 && val4 > 400 && val5 > 400 )       //7
  {
    goforward();
    delay(700);
    right();
    delay(1200);
    goforward();
    delay(1000);
//    if(distance > 9)
//    {
//      softleft();
//    }
//    else
//    {
//      softright();
//    }
}
else if (val1 > 400 && val2 > 400 && val3 > 400 && val4 < 400 && val5 < 400)       //7
  {
    softright();
    
}
else if (val1 > 400 && val2 > 400 && val3 > 400 && val4 > 400 && val5 < 400)       //7
  {
    softright();
  }

else if (val1 < 400 && val2 < 400 && val3 < 400 && val4 < 400 && val5 < 400)       //7
  {
    softleft();
  }
  else if (val1 < 400 && val2 > 400 && val3 > 400 && val4 > 400 && val5 > 400)       //7
  {
    softleft();
  }

 else if (val1 < 400 && val2 < 400 && val3 > 400 && val4 > 400 && val5 > 400)       //7
  {
    softleft();
  }

 else if (val1 < 400 && val2 < 400 && val3 > 400 && val4 > 400 && val5 < 400)       //7
  {
    softleft();
  }
  else if (val1 < 400 && val2 > 400 && val3 < 400 && val4 < 400 && val5 > 400)       //7
  {
    left();
  } 
  
else
{
  right();
}
}
