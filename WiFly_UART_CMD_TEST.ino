//
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial1.begin(9600);
  Serial.println("This is the WiFly Command Line Test if using just the normal module.");
  Serial.println("Connect 3.3V, GND, Due RX1 to WiFly TX, and Due TX1 to WiFly RX");
  Serial.println("Switch to 'No Line Ending', and Enter command mode by sending $$$");
  Serial.println("Then switch to 'Carriage Return' and send commands");
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0){
    Serial1.print(Serial.read());
  }
  if(Serial1.available() > 0){
    Serial.print(Serial1.read());
  }
}
