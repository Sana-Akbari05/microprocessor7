const int SW = 2;
const int X = 0;
const int Y = 1;

void setup() {
  pinMode(SW, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  Serial.print("Switch: ");
  Serial.print(digitalRead(SW));
  Serial.print("\t\t");
  Serial.print("VRx: ");
  Serial.print(analogRead(X));
  Serial.print("\t\t");
  Serial.print("VRy: ");
  Serial.println(analogRead(Y));
  Serial.println("____");
  delay(500);
}
