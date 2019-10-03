int button[100],i,j=1,flag,led[100];
int button1,button2,button3,button4;
void setup()
{
  randomSeed(analogRead(0));
  Serial.begin(9600);
  pinMode(2,INPUT_PULLUP); //Button1
  pinMode(3,INPUT_PULLUP); //Button2
  pinMode(4,INPUT_PULLUP); //Button3
  pinMode(5,INPUT_PULLUP); //Button4
  pinMode(6,OUTPUT);       //Output to show Wrong answer
  pinMode(7,OUTPUT);       //LED to show correct answer
  pinMode(8,OUTPUT);       //LED1
  pinMode(9,OUTPUT);       //LED2
  pinMode(10,OUTPUT);      //LED3
  pinMode(11,OUTPUT);      //LED4
}

void loop() 
{
  flag =0;
  for(i=0;i<j;i++) //TO GIVE OUTPUT 
  {
   led[i]=random(1,5);
    switch(led[i])
    {
     case 1:
     {
       digitalWrite(8,HIGH);
       delay(500);
       digitalWrite(8,LOW);
       delay(500);
       break;
     }
     case 2:
     {
       digitalWrite(9,HIGH);
       delay(500);
       digitalWrite(9,LOW);
       delay(500);
       break;
     }
     case 3:
     {
       digitalWrite(10,HIGH);
       delay(500);
       digitalWrite(10,LOW);
       delay(500);
       break;
     }
     case 4:
     {
       digitalWrite(11,HIGH);
       delay(500);
       digitalWrite(11,LOW);
       delay(500);
       break;
     }
   }  
  }
  delay(1000);
   button1= digitalRead(2);
   button2= digitalRead(3);
   button3= digitalRead(4);
   button4= digitalRead(5);
   if(button1==0)
   { button[i]=1; }
   else if(button2==0)
   { button[i]=2; }
   else if(button3==0)
   { button[i]=3; }
   else if(button4==0)
   { button[i]=4; }
   else button[i]=1;
   if(button[i]!=led[i])
   flag=1;
   delay(1000);
  }
  if(flag==1)
  {
     digitalWrite(6,HIGH);
     delay(2000);
     digitalWrite(6,LOW);
     delay(1000);
     j=0;
  }
  if(flag==0)
  {
    digitalWrite(7,HIGH);
    delay(1000);
    digitalWrite(7,LOW);
    delay(1000);
    digitalWrite(7,HIGH);
    delay(1000);
    digitalWrite(7,LOW);
    delay(1000);    
  }
  j++;
  delay(1000);
}
