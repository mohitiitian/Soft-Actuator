
void bodyUpHold(){
  MD_up();
  delay(600);
  digitalWrite(MDPumpPin,LOW);
  digitalWrite(MDValvePin,HIGH);
}




void crowling1(int times){
   for(int i = 0 ; i < times; i++){



  //adjust the valves to fast relese (handle pointing front)
  //crowling

 MD_up();
 BL_up();
 BR_up();
 FL_up();
 FR_up();
 delay(500);
 MD_down();
 delay(100);
 BL_down();
 BR_down();
 delay(100);
 FL_down();
 FR_down();
 delay(300);
   }
}



void crowling2(int times){
 for(int i = 0 ; i < times; i++){


  //adjust the valves to fast relese (handle pointing front)
  //crowling

 MD_up();
 delay(10);
 BL_up();
 BR_up();
 delay(100);
 FL_up();
 FR_up();
 delay(250);
 BL_down();
 BR_down();
 delay(180);
 MD_down();
 delay(180);
 FL_down();
 FR_down();
 delay(260);
 }
}
  



void BL_up(){
  digitalWrite(BLValvePin,HIGH);
  Serial.println("BL_up");
}

void BL_down(){
  digitalWrite(BLValvePin,LOW);
    Serial.println("BL_down");
}


void BR_up(){
  digitalWrite(BRValvePin,HIGH);
  Serial.println("BR_up");
}

void BR_down(){
  digitalWrite(BRValvePin,LOW);
    Serial.println("BR_down");
}


void MD_up(){
  digitalWrite(MDValvePin,HIGH);
    Serial.println("MD_up");

}

void MD_down(){
  digitalWrite(MDValvePin,LOW);
    Serial.println("MD_down");

}


void FL_up(){
  digitalWrite(FLValvePin,HIGH);
    Serial.println("FL_up");

}

void FL_down(){
  digitalWrite(FLValvePin,LOW);
    Serial.println("FL_down");

}

void FR_up(){
  digitalWrite(FRValvePin,HIGH);
    Serial.println("FR_up");

}

void FR_down(){
  digitalWrite(FRValvePin,LOW);
    Serial.println("FR_down");
}

void ReleaseAll(){
  digitalWrite(BLValvePin,LOW);
  digitalWrite(BRValvePin,LOW);
  digitalWrite(MDValvePin,LOW);
  digitalWrite(FLValvePin,LOW);
  digitalWrite(FRValvePin,LOW);
  digitalWrite(MDValvePin,LOW);
 
}
