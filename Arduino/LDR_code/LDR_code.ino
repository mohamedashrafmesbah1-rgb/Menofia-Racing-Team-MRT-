
float value=0;
int led=10;
unsigned long res=0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(A0, INPUT);
pinMode(led, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
 
 int value=analogRead(A0);
 value=(1023/5)*value;
 res=(1000*value)/(5-value);
  Serial.println(res);
  delay(100);
 if(res>=10000)
   {
    digitalWrite(led, HIGH);
   }
   else
   {
    digitalWrite(led, LOW);
   }

 
}
