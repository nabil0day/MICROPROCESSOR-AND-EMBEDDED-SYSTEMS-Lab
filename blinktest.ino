#define YELLOW_PIN 10
int yellow_on =1000;
int delay_timer (int milliseconds)
{
 int count =0;
 while(1){
 if(TCNT0>=16)
 {
 TCNT0 =0;
 count++;
 if(count== milliseconds)
 {
 count =0;
 break;
 }
 }
 }
 }
void setup(){
pinMode(YELLOW_PIN,OUTPUT);
TCCR0A = 0b00000000;
TCCR0B = 0b00000101;
TCNT0=0;
}
void loop() {
While(1){

 digitalWrite(YELLOW_PIN,HIGH);
 delay_timer(yellow_on);
 digitalWrite(YELLOW_PIN,LOW);
}
}
