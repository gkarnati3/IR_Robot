//Steppers
int a = 4;
int b = 5;
int c = 6;
int d = 7;
int e = 8;
int f = 9;
int g = 10;
int h = 11;

//Bump Sensors
int sensorPin = A5;
int sensorValue = 0;
int sensorPin2 = A4;
int sensorValue2 = 0;
int ledpin = 3;
int ledvalue = 0;
int ledpin2 = 2;
int ledvalue2 = 0;

void setup() {
 Serial.begin(9600);
 pinMode(ledpin, OUTPUT);
 pinMode(ledpin2, OUTPUT);
 pinMode(a, OUTPUT);
 pinMode(b, OUTPUT);
 pinMode(c, OUTPUT);
 pinMode(d, OUTPUT);
 pinMode(e, OUTPUT);
 pinMode(f, OUTPUT);
 pinMode(g, OUTPUT);
 pinMode(h, OUTPUT);
}

void loop() {
  sensorValue = analogRead(sensorPin);
  Serial.print("top ");
  Serial.println(sensorValue);
  sensorValue2 = analogRead(sensorPin2);
  ledvalue = digitalRead(ledpin);
  Serial.print("left ");
  Serial.println(ledvalue2);
  ledvalue2 = digitalRead(ledpin2);
 
  drivingForward(1000);
  if (sensorValue > 100) {
    drivingRight(500);
    delay(500);
  }
  
  if (ledvalue == 1) {
    drivingBackward(2000);
    drivingRight(1000);
    delay(500);
    drivingForward(4500);
    delay(500);
    drivingLeft(1000);
  }

  if (ledvalue2 == 1) {
    drivingBackward(2000);
    drivingLeft(1000);
    delay(500);
    drivingForward(4500);
    delay(500);
    drivingRight(1000);
  }
}

void drivingForward(int n) {
  Serial.println("got hereeeee");
  for (int i = 0; i < n; i++) {
    if (i % 4 == 0) {
      digitalWrite(a, HIGH);
      digitalWrite(h, HIGH);
    } else {
      digitalWrite(a, LOW);
      digitalWrite(h, LOW);
    }
    if (i % 4 == 1) {
      digitalWrite(b, HIGH);
      digitalWrite(g, HIGH);
    }else {
      digitalWrite(b, LOW);
      digitalWrite(g, LOW);
    }
    if (i % 4 == 2) {
      digitalWrite(c, HIGH);
      digitalWrite(f, HIGH);
    }else {
      digitalWrite(c, LOW);
      digitalWrite(f, LOW);
    }
    if (i % 4 == 3) {
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
    } else {
      digitalWrite(d, LOW);
      digitalWrite(e, LOW);
    }

    delay(2);
  }
}

void drivingBackward(int n) {
  for (int i = 0; i < n; i++) {
    if (i % 4 == 0) {
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
    } else {
      digitalWrite(d, LOW);
      digitalWrite(e, LOW);
    }
    if (i % 4 == 1) {
      digitalWrite(c, HIGH);
      digitalWrite(f, HIGH);
    }else {
      digitalWrite(c, LOW);
      digitalWrite(f, LOW);
    }
    if (i % 4 == 2) {
      digitalWrite(b, HIGH);
      digitalWrite(g, HIGH);
    }else {
      digitalWrite(b, LOW);
      digitalWrite(g, LOW);
    }
    if (i % 4 == 3) {
      digitalWrite(a, HIGH);
      digitalWrite(h, HIGH);
    } else {
      digitalWrite(a, LOW);
      digitalWrite(h, LOW);
    }

    delay(2);
  }
}

void drivingLeft(int n) {
  for (int i = 0; i < n; i++) {
    if (i % 4 == 0) {
      digitalWrite(a, HIGH);
      digitalWrite(e, HIGH);
    } else {
      digitalWrite(a, LOW);
      digitalWrite(e, LOW);
    }
    if (i % 4 == 1) {
      digitalWrite(b, HIGH);
      digitalWrite(f, HIGH);
    }else {
      digitalWrite(b, LOW);
      digitalWrite(f, LOW);
    }
    if (i % 4 == 2) {
      digitalWrite(c, HIGH);
      digitalWrite(g, HIGH);
    }else {
      digitalWrite(c, LOW);
      digitalWrite(g, LOW);
    }
    if (i % 4 == 3) {
      digitalWrite(d, HIGH);
      digitalWrite(h, HIGH);
    } else {
      digitalWrite(d, LOW);
      digitalWrite(h, LOW);
    }

    delay(2);
  }
}

void drivingRight(int n) {
  for (int i = 0; i < n; i++) {
    if (i % 4 == 0) {
      digitalWrite(d, HIGH);
      digitalWrite(h, HIGH);
    } else {
      digitalWrite(d, LOW);
      digitalWrite(h, LOW);
    }
    if (i % 4 == 1) {
      digitalWrite(c, HIGH);
      digitalWrite(g, HIGH);
    }else {
      digitalWrite(c, LOW);
      digitalWrite(g, LOW);
    }
    if (i % 4 == 2) {
      digitalWrite(b, HIGH);
      digitalWrite(f, HIGH);
    }else {
      digitalWrite(b, LOW);
      digitalWrite(f, LOW);
    }
    if (i % 4 == 3) {
      digitalWrite(a, HIGH);
      digitalWrite(e, HIGH);
    } else {
      digitalWrite(a, LOW);
      digitalWrite(e, LOW);
    }

    delay(2);
  }
}
