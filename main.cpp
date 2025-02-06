uint8_t green1=3;
uint8_t green2=8;

uint8_t orange1=4;
uint8_t orange2=7;

uint8_t red1=5;
uint8_t red2=6;


void setup() {
  // configure pin 3 as output
  //another alternative is to use a for loop
  // for(int i=3;i<=8;i++)   pinMode(i, OUTPUT);
  pinMode(green1, OUTPUT);
  pinMode(orange1, OUTPUT);
  pinMode(red1, OUTPUT);
  pinMode(red2, OUTPUT);
  pinMode(orange2, OUTPUT);
  pinMode(green2, OUTPUT);
  // pinMode(3, INPUT_PULLUP)
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(green1, HIGH);//green
  digitalWrite(orange1, LOW);//orange
  digitalWrite(red1, LOW);//red

  //second stop
  digitalWrite(red2, HIGH);//red
  digitalWrite(orange2, LOW);//orange
  digitalWrite(green2, LOW);//green

  // digitalWrite(4, HIGH);
  delay(4000);
  digitalWrite(green1, LOW);
  digitalWrite(orange1, HIGH);
  digitalWrite(red1, LOW);
  
  //second stop
  digitalWrite(red2, HIGH);//red
  digitalWrite(orange2, LOW);//orange
  digitalWrite(green2, LOW);//green

  delay(2000);
  digitalWrite(green1, LOW);
  digitalWrite(orange1, LOW);
  digitalWrite(red1, HIGH);

  //second stop
  digitalWrite(red2, LOW);//red
  digitalWrite(orange2, LOW);//orange
  digitalWrite(green2, HIGH);//green
  delay(4000);

  digitalWrite(green1, LOW);
  digitalWrite(orange1, LOW);
  digitalWrite(red1, HIGH);

  //second stop
  digitalWrite(red2, LOW);//red
  digitalWrite(orange2, HIGH);//orange
  digitalWrite(green2, LOW);//green
  delay(2000);

  // digitalWrite(green1, LOW);
  // digitalWrite(orange1, LOW);
  // digitalWrite(red1, HIGH);

  // //second stop
  // digitalWrite(red2, LOW);//red
  // digitalWrite(orange2, HIGH);//orange
  // digitalWrite(green2, LOW);//green
  // delay(2000);
}
//4/2/2
