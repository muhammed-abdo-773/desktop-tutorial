int m1 = 10;
int m2= 8;
int m3=5;
int m4 =7;
int en1=11;
int en2=12;

 char read;
 
 void forward()
 {
  digitalWrite(m1,1);
digitalWrite(m2,0);
digitalWrite(m3,0);
digitalWrite(m4,1);
  
  } 
void backward()
{
  
    digitalWrite(m1,0);
digitalWrite(m2,1);
digitalWrite(m3,1);
digitalWrite(m4,0);
  
  }

  void right()
  {
      digitalWrite(m1,0);
digitalWrite(m2,0);
digitalWrite(m3,0);
digitalWrite(m4,1);
    
    }

    
  void left()
  {
      digitalWrite(m1,1);
digitalWrite(m2,0);
digitalWrite(m3,0);
digitalWrite(m4,0);
    
    }


    void stop()
    {
      
            digitalWrite(m1,0);
digitalWrite(m2,0);
digitalWrite(m3,0);
digitalWrite(m4,0);
      
      }
void setup()
{

 Serial.begin(9600);
pinMode(m1,OUTPUT);
pinMode(m2,OUTPUT);
pinMode(m3,OUTPUT);
pinMode(m4,OUTPUT);
pinMode(en1,OUTPUT);
pinMode(en2,OUTPUT);
digitalWrite(en1,1);
digitalWrite(en2,1);
}

void loop()
{




if(Serial.available())
{
  read =Serial.read();
  }

  if(read=='F')
  {
forward();
    }
else if(read=='B')
  {
backward();
    }
    else if(read=='R')
  {
right();
    }

       else if(read=='L')
  {
left();
    }
    else
    {
      stop();
      }
}
