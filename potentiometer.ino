int readPin = A2;
int readValue;
float v;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(readPin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  readValue = analogRead(readPin);
  v = readValue * 5. / 1023.;
  Serial.println(v);
}
