int irl = 2;
int irr = 3;
int ml1 = 4;
int ml2 = 5;
int mr1 = 6;
int mr2 = 7;
int irright,irleft;
void setup(){
  pinMode(irl,INPUT);
  pinMode(irr,INPUT);
  pinMode(ml1,OUTPUT);
  pinMode(ml2,OUTPUT);
  pinMode(mr1,OUTPUT);
  pinMode(mr2,OUTPUT);
  Serial.begin(9600);
 
}
void looi(){
  irright=digitalRead(irr);
  irleft=digitalRead(irl);
  if(irright==LOW&&irleft==LOW){
    digitalWrite(ml1,HIGH);
        digitalWrite(ml2,LOW);  
        digitalWrite(mr1,HIGH);   
        digitalWrite(mr2,LOW);
    Serial.println("forward");
    }
  else if(irright==LOW&&irleft==HIGH){
    digitalWrite(ml1,LOW);
        digitalWrite(ml2,LOW);  
        digitalWrite(mr1,HIGH);   
        digitalWrite(mr2,LOW);
    Serial.println("left");
    }
    
   else if(irright==HIGH&&irleft==LOW){
    digitalWrite(ml1,HIGH);
        digitalWrite(ml2,LOW);  
        digitalWrite(mr1,LOW);   
        digitalWrite(mr2,LOW);
    Serial.println("RIGHT");
    }
   else if(irright==HIGH&&irleft==HIGH){
    digitalWrite(ml1,LOW);
        digitalWrite(ml2,LOW);  
        digitalWrite(mr1,LOW);   
        digitalWrite(mr2,LOW);
    Serial.println("stop");
    }
    delay(100);
}
