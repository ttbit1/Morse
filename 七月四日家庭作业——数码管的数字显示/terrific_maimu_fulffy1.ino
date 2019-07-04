void setup()
{
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  Serial.begin(9600);
  digitalWrite(7,LOW);
}


byte income=0;
void loop()
{
  if(Serial.available()>0)
  { income=Serial.read();
    income=income-'0';
     
  if(income&0x01)
  { digitalWrite(7,HIGH);
    digitalWrite(6,HIGH);delay(100);
    
  }
  else 
  { digitalWrite(7,HIGH);
    digitalWrite(6,LOW);delay(100);
  }
   if((income>>1)&0x01)
   {digitalWrite(7,HIGH);
     digitalWrite(2,HIGH);delay(100);
      }
  else 
  {digitalWrite(7,HIGH);
    digitalWrite(2,LOW);delay(100);
  }
    if((income>>2)&0x01)
   {digitalWrite(7,HIGH);
     digitalWrite(3,HIGH);delay(100);
      }
  else 
  {digitalWrite(7,HIGH);
    digitalWrite(3,LOW);delay(100);
  }
    if((income>>3)&0x01)
   {digitalWrite(7,HIGH);
     digitalWrite(4,HIGH);delay(100);
      }
  else 
  {digitalWrite(7,HIGH);
    digitalWrite(4,LOW);delay(100);
  }
  }
  
  
}