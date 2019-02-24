
int counter = 1;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println("Hello World");
Serial.print("Counter = ");
Serial.print(counter);
Serial.println();
delay(1000);
counter++;
}
