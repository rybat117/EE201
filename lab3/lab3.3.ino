void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(50);
  if (digitalRead(13) == HIGH) {
    Serial.println("Hello World!");
  } else {
    Serial.println("It's 2023");
  }  
}
