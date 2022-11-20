const int b1 = 2;
const int b2 = 3;
const int b3 = 4;

int s1 = 0;
int s2 = 0;
int s3 = 0;

int page = 1;

boolean buttonVal = false;
boolean prevVal = false;

boolean wrongVal = false;
boolean prevVal2 = false;

void setup() {
  pinMode(b1, INPUT);
  pinMode(b2, INPUT);
  pinMode(b3, INPUT);
  Serial.begin(9600);

}

void loop() {
  s1 = digitalRead(b1);
  s2 = digitalRead(b2);
  s3 = digitalRead(b3);
  while (page == 1) {
    s1 = digitalRead(b1);
    s2 = digitalRead(b2);
    s3 = digitalRead(b3);
    if (s1 || s2 || s3) {
      buttonVal = true;
    } else {
      buttonVal = false;
    }
    if (buttonVal == true && buttonVal != prevVal) {
      Serial.write(1);
      page = 2;
    } else {
      Serial.write(0);
    }
    prevVal = buttonVal;
    delay(500);
  }
  delay(500);
  while (page == 2) {
    s1 = digitalRead(b1);
    s2 = digitalRead(b2);
    s3 = digitalRead(b3);
    if (s1) {
      buttonVal = true;
    } else {
      buttonVal = false;
    }
    if (buttonVal == true && buttonVal != prevVal) {
      Serial.write(1);
      page = 3;
    } else {
      Serial.write(0);
    }
    prevVal = buttonVal;
    delay(200);

    if (s2 || s3) {
      wrongVal = true;
    } else {
      wrongVal = false;
    }
    if (wrongVal == true && wrongVal != prevVal2) {
      Serial.write(2);
    } else {
      Serial.write(0);
    }
    prevVal2 = wrongVal;
    delay(200);
  }

  delay(500);
  while (page == 3) {
    s1 = digitalRead(b1);
    s2 = digitalRead(b2);
    s3 = digitalRead(b3);
    if (s1) {
      buttonVal = true;
    } else {
      buttonVal = false;
    }
    if (buttonVal == true && buttonVal != prevVal) {
      Serial.write(1);
      page = 4;
    } else {
      Serial.write(0);
    }
    prevVal = buttonVal;
    delay(200);

    if (s2 || s3) {
      wrongVal = true;
    } else {
      wrongVal = false;
    }
    if (wrongVal == true && wrongVal != prevVal2) {
      Serial.write(2);
    } else {
      Serial.write(0);
    }
    prevVal2 = wrongVal;
    delay(200);
  }

  delay(500);
  while (page == 4) {
    s1 = digitalRead(b1);
    s2 = digitalRead(b2);
    s3 = digitalRead(b3);
    if (s3) {
      buttonVal = true;
    } else {
      buttonVal = false;
    }
    if (buttonVal == true && buttonVal != prevVal) {
      Serial.write(1);
      page = 5;
    } else {
      Serial.write(0);
    }
    prevVal = buttonVal;
    delay(200);

    if (s2 || s1) {
      wrongVal = true;
    } else {
      wrongVal = false;
    }
    if (wrongVal == true && wrongVal != prevVal2) {
      Serial.write(2);
    } else {
      Serial.write(0);
    }
    prevVal2 = wrongVal;
    delay(200);
  }

  delay(500);
  while (page == 5) {
    s1 = digitalRead(b1);
    s2 = digitalRead(b2);
    s3 = digitalRead(b3);
    if (s2) {
      buttonVal = true;
    } else {
      buttonVal = false;
    }
    if (buttonVal == true && buttonVal != prevVal) {
      Serial.write(1);
      page = 6;
    } else {
      Serial.write(0);
    }
    prevVal = buttonVal;
    delay(200);

    if (s1 || s3) {
      wrongVal = true;
    } else {
      wrongVal = false;
    }
    if (wrongVal == true && wrongVal != prevVal2) {
      Serial.write(2);
    } else {
      Serial.write(0);
    }
    prevVal2 = wrongVal;
    delay(200);
  }

  delay(500);
  while (page == 6) {
    s1 = digitalRead(b1);
    s2 = digitalRead(b2);
    s3 = digitalRead(b3);
    if (s3) {
      buttonVal = true;
    } else {
      buttonVal = false;
    }
    if (buttonVal == true && buttonVal != prevVal) {
      Serial.write(1);
      page = 7;
    } else {
      Serial.write(0);
    }
    prevVal = buttonVal;
    delay(200);

    if (s2 || s1) {
      wrongVal = true;
    } else {
      wrongVal = false;
    }
    if (wrongVal == true && wrongVal != prevVal2) {
      Serial.write(2);
    } else {
      Serial.write(0);
    }
    prevVal2 = wrongVal;
    delay(200);
  }

  delay(500);
  while (page == 7) {
    s1 = digitalRead(b1);
    s2 = digitalRead(b2);
    s3 = digitalRead(b3);
    if (s1) {
      buttonVal = true;
    } else {
      buttonVal = false;
    }
    if (buttonVal == true && buttonVal != prevVal) {
      Serial.write(1);
      page = 8;
    } else {
      Serial.write(0);
    }
    prevVal = buttonVal;
    delay(200);

    if (s2 || s3) {
      wrongVal = true;
    } else {
      wrongVal = false;
    }
    if (wrongVal == true && wrongVal != prevVal2) {
      Serial.write(2);
    } else {
      Serial.write(0);
    }
    prevVal2 = wrongVal;
    delay(200);
  }

  delay(500);
  while (page == 8) {
    s1 = digitalRead(b1);
    s2 = digitalRead(b2);
    s3 = digitalRead(b3);
    if (s2) {
      buttonVal = true;
    } else {
      buttonVal = false;
    }
    if (buttonVal == true && buttonVal != prevVal) {
      Serial.write(1);
      page = 9;
    } else {
      Serial.write(0);
    }
    prevVal = buttonVal;
    delay(200);

    if (s1 || s3) {
      wrongVal = true;
    } else {
      wrongVal = false;
    }
    if (wrongVal == true && wrongVal != prevVal2) {
      Serial.write(2);
    } else {
      Serial.write(0);
    }
    prevVal2 = wrongVal;
    delay(200);
  }

  delay(500);
  while (page == 9) {
    s1 = digitalRead(b1);
    s2 = digitalRead(b2);
    s3 = digitalRead(b3);
    if (s1) {
      buttonVal = true;
    } else {
      buttonVal = false;
    }
    if (buttonVal == true && buttonVal != prevVal) {
      Serial.write(1);
      page = 10;
    } else {
      Serial.write(0);
    }
    prevVal = buttonVal;
    delay(200);

    if (s2 || s3) {
      wrongVal = true;
    } else {
      wrongVal = false;
    }
    if (wrongVal == true && wrongVal != prevVal2) {
      Serial.write(2);
    } else {
      Serial.write(0);
    }
    prevVal2 = wrongVal;
    delay(200);
  }

  delay(500);
  while (page == 10) {
    s1 = digitalRead(b1);
    s2 = digitalRead(b2);
    s3 = digitalRead(b3);
    if (s2) {
      buttonVal = true;
    } else {
      buttonVal = false;
    }
    if (buttonVal == true && buttonVal != prevVal) {
      Serial.write(1);
      page = 11;
    } else {
      Serial.write(0);
    }
    prevVal = buttonVal;
    delay(200);

    if (s1 || s3) {
      wrongVal = true;
    } else {
      wrongVal = false;
    }
    if (wrongVal == true && wrongVal != prevVal2) {
      Serial.write(2);
    } else {
      Serial.write(0);
    }
    prevVal2 = wrongVal;
    delay(200);
  }

  delay(500);
  while (page == 11) {
    s1 = digitalRead(b1);
    s2 = digitalRead(b2);
    s3 = digitalRead(b3);
    if (s3) {
      buttonVal = true;
    } else {
      buttonVal = false;
    }
    if (buttonVal == true && buttonVal != prevVal) {
      Serial.write(1);
      page = 12;
    } else {
      Serial.write(0);
    }
    prevVal = buttonVal;
    delay(200);

    if (s2 || s1) {
      wrongVal = true;
    } else {
      wrongVal = false;
    }
    if (wrongVal == true && wrongVal != prevVal2) {
      Serial.write(2);
    } else {
      Serial.write(0);
    }
    prevVal2 = wrongVal;
    delay(200);
  }

  delay(500);
  while (page == 12) {
    s1 = digitalRead(b1);
    s2 = digitalRead(b2);
    s3 = digitalRead(b3);
    if (s1) {
      buttonVal = true;
    } else {
      buttonVal = false;
    }
    if (buttonVal == true && buttonVal != prevVal) {
      Serial.write(1);
      page = 13;
    } else {
      Serial.write(0);
    }
    prevVal = buttonVal;
    delay(200);

    if (s2 || s3) {
      wrongVal = true;
    } else {
      wrongVal = false;
    }
    if (wrongVal == true && wrongVal != prevVal2) {
      Serial.write(2);
    } else {
      Serial.write(0);
    }
    prevVal2 = wrongVal;
    delay(200);
  }

  delay(500);
  while (page == 13) {
    s1 = digitalRead(b1);
    s2 = digitalRead(b2);
    s3 = digitalRead(b3);
    if (s1) {
      buttonVal = true;
    } else {
      buttonVal = false;
    }
    if (buttonVal == true && buttonVal != prevVal) {
      Serial.write(1);
      page = 14;
    } else {
      Serial.write(0);
    }
    prevVal = buttonVal;
    delay(200);

    if (s2 || s3) {
      wrongVal = true;
    } else {
      wrongVal = false;
    }
    if (wrongVal == true && wrongVal != prevVal2) {
      Serial.write(2);
    } else {
      Serial.write(0);
    }
    prevVal2 = wrongVal;
    delay(200);
  }

  delay(500);
  while (page == 14) {
    s1 = digitalRead(b1);
    s2 = digitalRead(b2);
    s3 = digitalRead(b3);
    if (s3) {
      buttonVal = true;
    } else {
      buttonVal = false;
    }
    if (buttonVal == true && buttonVal != prevVal) {
      Serial.write(1);
      page = 15;
    } else {
      Serial.write(0);
    }
    prevVal = buttonVal;
    delay(200);

    if (s2 || s1) {
      wrongVal = true;
    } else {
      wrongVal = false;
    }
    if (wrongVal == true && wrongVal != prevVal2) {
      Serial.write(2);
    } else {
      Serial.write(0);
    }
    prevVal2 = wrongVal;
    delay(200);
  }

  delay(500);
  while (page == 15) {
    s1 = digitalRead(b1);
    s2 = digitalRead(b2);
    s3 = digitalRead(b3);
    if (s3) {
      buttonVal = true;
    } else {
      buttonVal = false;
    }
    if (buttonVal == true && buttonVal != prevVal) {
      Serial.write(1);
      page = 16;
    } else {
      Serial.write(0);
    }
    prevVal = buttonVal;
    delay(200);

    if (s2 || s1) {
      wrongVal = true;
    } else {
      wrongVal = false;
    }
    if (wrongVal == true && wrongVal != prevVal2) {
      Serial.write(2);
    } else {
      Serial.write(0);
    }
    prevVal2 = wrongVal;
    delay(200);
  }
}
