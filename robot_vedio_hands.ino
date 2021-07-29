#include <Servo.h>

Servo hand1;
Servo hand2;
Servo hand3;
Servo hand1a;
Servo hand2a;
Servo hand3a;
//--------------
int a;

//--------------
void setup() {
hand1. attach(2);
hand2. attach(3);
hand3. attach (4);
hand1a. attach (5);
hand2a. attach (6);
hand3a. attach (7);
}
//------------------------------
void loop(){
  a=0;  
 for ( a;0, a<=180;a++){
hand1.write(a);
delay(15);
}
delayMicroseconds(10);
 a= 0;
 for ( a;0, a<=180;a++){
hand1a.write(a);
delay(15);
}

//------------------------------
delay(1000);
a= 0;
 for ( a;0, a<=90;a++){
hand2.write(a);
delay(15);
}
delayMicroseconds(10);
 a=0;
 for ( a;0, a<=90;a++){
hand2a.write(a);
delay(15);
}
//------------------------------
delay(1000);
 a= 0;
 for ( a;0, a<=30;a++){
hand3.write(a);
delay(15);
}

delayMicroseconds(10);
 a= 0;
 for ( a;0, a<=30;a++){
hand3a.write(a);
delay(15);
}
//**********************************************
delayMicroseconds(1000);
 a= 0;
 for ( a;180, a>=0;a--){
hand1. write(a);
delayMicroseconds(10);
}
delayMicroseconds(1000);
  a= 0;
 for( a; 180, a>=0;a--){
hand1a.write(a);
delayMicroseconds(15);
 }
//--------------------------------
delayMicroseconds(1000);
 a= 0;
 for( a;90, a>=0;a--){
hand2.write(a);
delayMicroseconds(10);
}
delayMicroseconds(1000);
  a= 0;
 for( a;90, a>=0;a--){
hand2a.write(a);
delayMicroseconds(15);
 }


//--------------------------------
delayMicroseconds(1000);  // حركه الكفين
  a= 0;
 for( a; 30, a>=0;a--){
hand3.write(a);
delayMicroseconds(15);
}

delayMicroseconds(1000);
 a= 0;
 for ( a;30, a>=0;a--){
hand3a.write(a);
delayMicroseconds(15);
}

//--------------------------------
delay(1000);
}
