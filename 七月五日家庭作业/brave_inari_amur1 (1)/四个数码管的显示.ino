void setup()
{
  
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  Serial.begin(9600);
  digitalWrite(6,LOW); 
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
}

int i=7;
byte income=0;
void loop()
{  digitalWrite(i,LOW);
  if(Serial.available()>0)
  { income=Serial.read();
    income=income-'0';
    digitalWrite(i,HIGH);
  if(i<11)   
   i++;
   else
   i=8;  
  if(income&0x01)
  { digitalWrite(6,HIGH);
    digitalWrite(2,HIGH);delay(100);
    
  }
  else 
  { digitalWrite(6,HIGH);
   digitalWrite(2,LOW);delay(100);
  }
   if((income>>1)&0x01)
   {digitalWrite(6,HIGH);
     digitalWrite(3,HIGH);delay(100);
      }
  else 
  {digitalWrite(6,HIGH);
    digitalWrite(3,LOW);delay(100);
  }
    if((income>>2)&0x01)
   {digitalWrite(6,HIGH);
     digitalWrite(4,HIGH);delay(100);
      }
  else 
  {digitalWrite(6,HIGH);
    digitalWrite(4,LOW);delay(100);
  }
    if((income>>3)&0x01)
   {digitalWrite(6,HIGH);
     digitalWrite(5,HIGH);delay(100);
      }
  else 
  {digitalWrite(6,HIGH);
    digitalWrite(5,LOW);delay(100);
  }
  }
 
}