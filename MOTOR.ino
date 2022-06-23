#define MOTOR_L1 8
#define MOTOR_L2 9
#define MOTOR_R1 10
#define MOTOR_R2 11

#define WEAPON_1 12
#define WEAPON_2 13


void MotorInit(){
    pinMode(MOTOR_L1,OUTPUT);
    pinMode(MOTOR_L2,OUTPUT);
    pinMode(MOTOR_R1,OUTPUT);
    pinMode(MOTOR_R2,OUTPUT);
    pinMode(WEAPON_1,OUTPUT);
    pinMode(WEAPON_2,OUTPUT);
    
    digitalWrite(MOTOR_L1,LOW);
    digitalWrite(MOTOR_L2,LOW);
    digitalWrite(MOTOR_R1,LOW);
    digitalWrite(MOTOR_R2,LOW);
    digitalWrite(WEAPON_1,LOW);
    digitalWrite(WEAPON_2,LOW);
}


void Forward(){
  digitalWrite(MOTOR_L1,HIGH);
  digitalWrite(MOTOR_L2,LOW);
  
  digitalWrite(MOTOR_R1,HIGH);
  digitalWrite(MOTOR_R2,LOW);
}


void Backward(){

  digitalWrite(MOTOR_L1,LOW);
  digitalWrite(MOTOR_L2,HIGH);
 
  digitalWrite(MOTOR_R1,LOW);
  digitalWrite(MOTOR_R2,HIGH);  
}

void Left(){


  digitalWrite(MOTOR_L1,LOW);
  digitalWrite(MOTOR_L2,HIGH);

  
  digitalWrite(MOTOR_R1,HIGH);
  digitalWrite(MOTOR_R2,LOW);

}


void Right(){


  digitalWrite(MOTOR_L1,HIGH);
  digitalWrite(MOTOR_L2,LOW);

  
  digitalWrite(MOTOR_R1,LOW);
  digitalWrite(MOTOR_R2,HIGH);

}



void Stop(){


  digitalWrite(MOTOR_L1,LOW);
  digitalWrite(MOTOR_L2,LOW);

  
  digitalWrite(MOTOR_R1,LOW);
  digitalWrite(MOTOR_R2,LOW);


}


void MoveWeapon(){
  digitalWrite(WEAPON_1,HIGH);
  digitalWrite(WEAPON_2,LOW);
}

void StopWeapon(){  
  digitalWrite(WEAPON_1,LOW);
  digitalWrite(WEAPON_2,LOW);
}
