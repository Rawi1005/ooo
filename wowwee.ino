int gas = 39;



void setup() {
 Serial.begin(9600);
 pinMode(gas,INPUT); // INPUT = "justfriend";

}

void loop() {
   int db = analogRead(gas);
   Serial.println(db);
   delay(500);

}
