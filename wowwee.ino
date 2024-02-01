int gas = 39;
int led = 2;
int limit = 2000;

void setup() {
 Serial.begin(9600);
 pinMode(gas,INPUT); // INPUT = "justfriend";
 pinMode(led, OUTPUT); 
}

void loop() {
   int db = analogRead(gas);
   Serial.println(db);
   delay(500);

   if (db >= limit){
    Serial.println("OMG FIRE AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA");
    analogWrite(led, HIGH);
   }

   else{
     analogWrite(led, LOW);
   }
   
}
