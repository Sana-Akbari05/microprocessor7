const int SW = 2;
const int X = 0;
const int Y = 1;
int led = 11;
void setup() {
  pinMode(SW, INPUT_PULLUP);
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  int x_value = analogRead(X);
  int x_led = map(x_value, 0, 1023, 0, 255);
  Serial.print("Switch: ");
  Serial.print(digitalRead(SW));
  Serial.print("\t\t");
  Serial.print("VRx: ");
  Serial.print(analogRead(X));
  Serial.print("\t\t");
  Serial.print("VRy: ");
  Serial.println(analogRead(Y));
  Serial.println("____");
  analogWrite(led, x_led);
  delay(500);
}
