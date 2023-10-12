//////////////////////////////////////////////////////////////
// Binary counter
//////////////////////////////////////////////////////////////
int timer = 0;                  // timer counting milliseconds since start.

bool led13Status = false;       // should the led turned on or of.
bool led12Status = false;
bool led8Status = false;


// define our pins
void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  // Control led connected to 13
  if(led13 % 2000 == 0) {
    if(led13Status) {
      digitalWrite(13, HIGH);
    } else {
      digitalWrite(13, LOW);
    }
    led13Status = !led13Status;
  }

  // Control led connected to 12
  if(led12 % 1000 == 0) {
    if(led12Status) {
      digitalWrite(12, HIGH);
    } else {
      digitalWrite(12, LOW);
    }
    led12Status = !led12Status;
  }

  // Control led connected to 8
  if(led8 % 500 == 0) {
    if(led8Status) {
      digitalWrite(8, HIGH);
    } else {
      digitalWrite(8, LOW);
    }
    led8Status = !led8Status;
  }

  timer += 500;   // increase timer

  delay(500);     // Sleep for set nr milliseconds
}


////////////////////////////////////////////////////////////
// Knight rider
////////////////////////////////////////////////////////////
int direction = 1;
int ledNr = 8;
const int SPEED = 300;

// Connect 6 leds to pin 8-13
void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
}

//turn on and off each led in turn back and forth
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledNr, HIGH);
  delay(SPEED);
  digitalWrite(ledNr, LOW);
  ledNr = ledNr + direction;

  // Change direction of counter when we reach the end.
  if(ledNr >= 13 || ledNr <= 8) {
    direction = -direction;
  }
}