PImage img, img2, img3, img4, marker, marker1, marker2, marker3, phone, phone1, phone2, phone3, sicssor, sicssor1, sicssor2, sicssor3, bird, bird1, bird2, bird3;
PImage clock, clock1, clock2, clock3, bag, bag1, bag2, bag3, radio, radio1, radio2, radio3, chicken, chicken1, chicken2, chicken3, lock, lock1, lock2, lock3, rangalhu;
PImage  bed, bed1, bed2, bed3, boat, boat1, boat2, boat3, chair, chair1, chair2, chair3, dress, dress1, dress2, dress3, fan, fan1, fan2, fan3, fish, fish1, fish2, fish3, name;

int num = 0;

import processing.serial.*;
import ddf.minim.*;

Minim minim;
AudioPlayer s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13, s14;
AudioPlayer w1;

Serial myPort; 
int val;      

boolean buttonVal = false;
boolean prevVal = false;

boolean wrongVal = false;
boolean prevVal2 = false;

void setup() {
  String portName = Serial.list()[0];
  myPort = new Serial(this, portName, 9600);
  fullScreen(); 
  img = loadImage("View.jpg");
  img2 = loadImage("wtld.png");
  img3 = loadImage("View2.jpg");
  img4 = loadImage("qst1.png");
  marker = loadImage("Marker.jpg");
  marker1 = loadImage("Marker1.png");
  marker2 = loadImage("Marker2.png");
  marker3 = loadImage("Marker3.png");
  phone = loadImage("phone.jpg");
  phone1 = loadImage("phone1.png");
  phone2 = loadImage("phone2.png");
  phone3 = loadImage("phone3.png");
  sicssor = loadImage("sicssor.jpg");
  sicssor1 = loadImage("sicssor1.png");
  sicssor2 = loadImage("sicssor2.png");
  sicssor3 = loadImage("sicssor3.png");
  bird = loadImage("bird.jpg");
  bird1 = loadImage("bird1.png");
  bird2 = loadImage("bird2.png");
  bird3 = loadImage("bird3.png");
  clock = loadImage("clock.jpg");
  clock1 = loadImage("clock1.png");
  clock2 = loadImage("clock2.png");
  clock3 = loadImage("clock3.png");
  bag = loadImage("bag.jpg");
  bag1 = loadImage("bag1.png");
  bag2 = loadImage("bag2.png");
  bag3 = loadImage("bag3.png");
  radio = loadImage("radio.png");
  radio1 = loadImage("radio1.png");
  radio2 = loadImage("radio2.png");
  radio3 = loadImage("radio3.png");
  chicken = loadImage("chicken.jpg");
  chicken1 = loadImage("chicken1.png");
  chicken2 = loadImage("chicken2.png");
  chicken3 = loadImage("chicken3.png");
  bed = loadImage("bed.jpg");
  bed1 = loadImage("bed1.png");
  bed2 = loadImage("bed2.png");
  bed3 = loadImage("bed3.png");
  boat = loadImage("boat.jpg");
  boat1 = loadImage("boat1.png");
  boat2 = loadImage("boat2.png");
  boat3 = loadImage("boat3.png");
  chair = loadImage("chair.jpg");
  chair1 = loadImage("chair1.png");
  chair2 = loadImage("chair2.png");
  chair3 = loadImage("chair3.png");
  dress = loadImage("dress.jpg");
  dress1 = loadImage("dress1.png");
  dress2 = loadImage("dress2.png");
  dress3 = loadImage("dress3.png");
  fan = loadImage("fan.jpg");
  fan1 = loadImage("fan1.png");
  fan2 = loadImage("fan2.png");
  fan3 = loadImage("fan3.png");
  fish = loadImage("fish.jpg");
  fish1 = loadImage("fish1.png");
  fish2 = loadImage("fish2.png");
  fish3 = loadImage("fish3.png");
  lock = loadImage("lock.jpg");
  lock1 = loadImage("lock1.png");
  lock2 = loadImage("lock2.png");
  lock3 = loadImage("lock3.png");
  rangalhu = loadImage("correct.png");
  name = loadImage("name.png");

  minim = new Minim(this);
  s1 = minim.loadFile("Correct.mp3");
  s2 = minim.loadFile("Correct.mp3");
  s3 = minim.loadFile("Correct.mp3");
  s4 = minim.loadFile("Correct.mp3");
  s5 = minim.loadFile("Correct.mp3");
  s6 = minim.loadFile("Correct.mp3");
  s7 = minim.loadFile("Correct.mp3");
  s8 = minim.loadFile("Correct.mp3");
  s9 = minim.loadFile("Correct.mp3");
  s10 = minim.loadFile("Correct.mp3");
  s11 = minim.loadFile("Correct.mp3");
  s12 = minim.loadFile("Correct.mp3");
  s13 = minim.loadFile("Correct.mp3");
  s14 = minim.loadFile("Correct.mp3");
  w1 = minim.loadFile("Wrong.mp3");
}

void draw() {
  if ( myPort.available() > 0) {  
    val = myPort.read();
  }


  println(val);

  if (val == 2) {
    wrongVal = true;
  } else {
    wrongVal = false;
  }

  if (wrongVal == true && wrongVal != prevVal2) {
    w1.play();
    delay(w1.length());
  } else {
    w1.rewind();
  }


  if (val == 1) {
    buttonVal = true;
  } else {
    buttonVal = false;
  }
  if (buttonVal == true && buttonVal != prevVal) {
    num = num + 1;
  }
  if (num == 15) {
    num = 0;
  }


  switch(num) {
  case 0: 
    page1();
    break;
  case 1: 
    page2();
    break;
  case 2:
    s1.play();
    page3();
    break;
  case 3:
    s2.play();
    page4();
    break;
  case 4:
    s3.play();
    page5();
    break;
  case 5:
    s4.play();
    page6();
    break;
  case 6:
    s5.play();
    page7();
    break;
  case 7:
    s6.play();
    page8();
    break;
  case 8:
    s7.play();
    page9();
    break;
  case 9:
    s8.play();
    page10();
    break;
  case 10:
    s9.play();
    page11();
    break;
  case 11:
    s10.play();
    page12();
    break;
  case 12:
    s11.play();
    page13();
    break;
  case 13:
    s12.play();
    page14();
    break;
  case 14:
    s13.play();
    page15();
    break;
  case 15:
    s14.play();
    page16();
    break;
  }

  prevVal = buttonVal;

  prevVal2 = wrongVal;
}


void page1() {
  background(img);
  borders();
  //image(name, 350, 900, 700, 200);

  imageMode(CENTER);
  image(img2, width/2, 300, 1000, 400);
}

void page2() {
  println("page2");
  background(img3);
  borders();

  imageMode(CENTER);
  image(img4, width/2, 150, 800, 300);
  image(marker, width/2, 500, 400, 400);

  fill(255, 0, 0);
  rect(40, 890, 320, 170);
  fill(255, 255, 255);
  rect(50, 900, 300, 150);
  image(marker1, 190, 970, 300, 150);

  fill(0, 255, 0);
  rect(790, 890, 320, 170);
  fill(255, 255, 255);
  rect(800, 900, 300, 150);
  image(marker2, 940, 970, 300, 150);

  fill(0, 0, 255);
  rect(1550, 890, 320, 170);
  fill(255, 255, 255);
  rect(1560, 900, 300, 150);
  image(marker3, 1700, 970, 300, 150);
}

void page3() {
  println("page3");
  background(img3);
  borders();

  imageMode(CENTER);
  image(img4, width/2, 150, 800, 300);
  image(phone, width/2, 500, 400, 400);

  fill(255, 0, 0);
  rect(40, 890, 320, 170);
  fill(255, 255, 255);
  rect(50, 900, 300, 150);
  image(phone1, 190, 970, 270, 150);

  fill(0, 255, 0);
  rect(790, 890, 320, 170);
  fill(255, 255, 255);
  rect(800, 900, 300, 150);
  image(phone2, 940, 970, 270, 150);

  fill(0, 0, 255);
  rect(1550, 890, 320, 170);
  fill(255, 255, 255);
  rect(1560, 900, 300, 150);
  image(phone3, 1700, 970, 270, 150);
}

void page4() {
  println("page4");
  background(img3);
  borders();

  imageMode(CENTER);
  image(img4, width/2, 150, 800, 300);
  image(sicssor, width/2, 500, 400, 400);

  fill(255, 0, 0);
  rect(40, 890, 320, 170);
  fill(255, 255, 255);
  rect(50, 900, 300, 150);
  image(sicssor1, 190, 970, 300, 150);

  fill(0, 255, 0);
  rect(790, 890, 320, 170);
  fill(255, 255, 255);
  rect(800, 900, 300, 150);
  image(sicssor2, 940, 970, 300, 150);

  fill(0, 0, 255);
  rect(1550, 890, 320, 170);
  fill(255, 255, 255);
  rect(1560, 900, 300, 150);
  image(sicssor3, 1700, 970, 300, 150);
}

void page5() {
  println("page5");
  background(img3);
  borders();

  imageMode(CENTER);
  image(img4, width/2, 150, 800, 300);
  image(bird, width/2, 500, 400, 400);

  fill(255, 0, 0);
  rect(40, 890, 320, 170);
  fill(255, 255, 255);
  rect(50, 900, 300, 150);
  image(bird1, 190, 970, 270, 150);

  fill(0, 255, 0);
  rect(790, 890, 320, 170);
  fill(255, 255, 255);
  rect(800, 900, 300, 150);
  image(bird2, 940, 970, 270, 150);

  fill(0, 0, 255);
  rect(1550, 890, 320, 170);
  fill(255, 255, 255);
  rect(1560, 900, 300, 150);
  image(bird3, 1700, 970, 270, 150);
}

void page6() {
  println("page6");
  background(img3);
  borders();

  imageMode(CENTER);
  image(img4, width/2, 150, 800, 300);
  image(clock, width/2, 500, 400, 400);

  fill(255, 0, 0);
  rect(40, 890, 320, 170);
  fill(255, 255, 255);
  rect(50, 900, 300, 150);
  image(clock1, 190, 970, 250, 150);

  fill(0, 255, 0);
  rect(790, 890, 320, 170);
  fill(255, 255, 255);
  rect(800, 900, 300, 150);
  image(clock2, 940, 970, 250, 150);

  fill(0, 0, 255);
  rect(1550, 890, 320, 170);
  fill(255, 255, 255);
  rect(1560, 900, 300, 150);
  image(clock3, 1700, 970, 250, 150);
}

void page7() {
  println("page7");
  background(img3);
  borders();

  imageMode(CENTER);
  image(img4, width/2, 150, 800, 300);
  image(bag, width/2, 500, 400, 400);

  fill(255, 0, 0);
  rect(40, 890, 320, 170);
  fill(255, 255, 255);
  rect(50, 900, 300, 150);
  image(bag1, 190, 970, 300, 150);

  fill(0, 255, 0);
  rect(790, 890, 320, 170);
  fill(255, 255, 255);
  rect(800, 900, 300, 150);
  image(bag2, 940, 970, 300, 150);

  fill(0, 0, 255);
  rect(1550, 890, 320, 170);
  fill(255, 255, 255);
  rect(1560, 900, 300, 150);
  image(bag3, 1700, 970, 300, 150);
}

void page8() {
  println("page8");
  background(img3);
  borders();

  imageMode(CENTER);
  image(img4, width/2, 150, 800, 300);
  image(radio, width/2, 500, 400, 400);

  fill(255, 0, 0);
  rect(40, 890, 320, 170);
  fill(255, 255, 255);
  rect(50, 900, 300, 150);
  image(radio1, 190, 970, 270, 150);

  fill(0, 255, 0);
  rect(790, 890, 320, 170);
  fill(255, 255, 255);
  rect(800, 900, 300, 150);
  image(radio2, 940, 970, 270, 150);

  fill(0, 0, 255);
  rect(1550, 890, 320, 170);
  fill(255, 255, 255);
  rect(1560, 900, 300, 150);
  image(radio3, 1700, 970, 270, 150);
}

void page9() {
  println("page9");
  background(img3);
  borders();

  imageMode(CENTER);
  image(img4, width/2, 150, 800, 300);
  image(chicken, width/2, 500, 400, 400);

  fill(255, 0, 0);
  rect(40, 890, 320, 170);
  fill(255, 255, 255);
  rect(50, 900, 300, 150);
  image(chicken1, 190, 970, 300, 150);

  fill(0, 255, 0);
  rect(790, 890, 320, 170);
  fill(255, 255, 255);
  rect(800, 900, 300, 150);
  image(chicken2, 940, 970, 300, 150);

  fill(0, 0, 255);
  rect(1550, 890, 320, 170);
  fill(255, 255, 255);
  rect(1560, 900, 300, 150);
  image(chicken3, 1700, 970, 300, 150);
}

void page10() {
  println("page10");
  background(img3);
  borders();

  imageMode(CENTER);
  image(img4, width/2, 150, 800, 300);
  image(bed, width/2, 500, 400, 400);

  fill(255, 0, 0);
  rect(40, 890, 320, 170);
  fill(255, 255, 255);
  rect(50, 900, 300, 150);
  image(bed1, 190, 970, 300, 150);

  fill(0, 255, 0);
  rect(790, 890, 320, 170);
  fill(255, 255, 255);
  rect(800, 900, 300, 150);
  image(bed2, 940, 970, 300, 150);

  fill(0, 0, 255);
  rect(1550, 890, 320, 170);
  fill(255, 255, 255);
  rect(1560, 900, 300, 150);
  image(bed3, 1700, 970, 300, 150);
}

void page11() {
  println("page11");
  background(img3);
  borders();

  imageMode(CENTER);
  image(img4, width/2, 150, 800, 300);
  image(boat, width/2, 500, 600, 400);

  fill(255, 0, 0);
  rect(40, 890, 320, 170);
  fill(255, 255, 255);
  rect(50, 900, 300, 150);
  image(boat1, 190, 970, 300, 150);

  fill(0, 255, 0);
  rect(790, 890, 320, 170);
  fill(255, 255, 255);
  rect(800, 900, 300, 150);
  image(boat2, 940, 970, 300, 150);

  fill(0, 0, 255);
  rect(1550, 890, 320, 170);
  fill(255, 255, 255);
  rect(1560, 900, 300, 150);
  image(boat3, 1700, 970, 300, 150);
}

void page12() {
  println("page12");
  background(img3);
  borders();

  imageMode(CENTER);
  image(img4, width/2, 150, 800, 300);
  image(chair, width/2, 500, 400, 400);

  fill(255, 0, 0);
  rect(40, 890, 320, 170);
  fill(255, 255, 255);
  rect(50, 900, 300, 150);
  image(chair1, 190, 970, 300, 150);

  fill(0, 255, 0);
  rect(790, 890, 320, 170);
  fill(255, 255, 255);
  rect(800, 900, 300, 150);
  image(chair2, 940, 970, 300, 150);

  fill(0, 0, 255);
  rect(1550, 890, 320, 170);
  fill(255, 255, 255);
  rect(1560, 900, 300, 150);
  image(chair3, 1700, 970, 300, 150);
}

void page13() {
  println("page13");
  background(img3);
  borders();

  imageMode(CENTER);
  image(img4, width/2, 150, 800, 300);
  image(dress, width/2, 500, 400, 400);

  fill(255, 0, 0);
  rect(40, 890, 320, 170);
  fill(255, 255, 255);
  rect(50, 900, 300, 150);
  image(dress1, 190, 970, 300, 150);

  fill(0, 255, 0);
  rect(790, 890, 320, 170);
  fill(255, 255, 255);
  rect(800, 900, 300, 150);
  image(dress2, 940, 970, 300, 150);

  fill(0, 0, 255);
  rect(1550, 890, 320, 170);
  fill(255, 255, 255);
  rect(1560, 900, 300, 150);
  image(dress3, 1700, 970, 300, 150);
}

void page14() {
  println("page14");
  background(img3);
  borders();

  imageMode(CENTER);
  image(img4, width/2, 150, 800, 300);
  image(fan, width/2, 500, 600, 600);

  fill(255, 0, 0);
  rect(40, 890, 320, 170);
  fill(255, 255, 255);
  rect(50, 900, 300, 150);
  image(fan1, 190, 970, 300, 150);

  fill(0, 255, 0);
  rect(790, 890, 320, 170);
  fill(255, 255, 255);
  rect(800, 900, 300, 150);
  image(fan2, 940, 970, 300, 150);

  fill(0, 0, 255);
  rect(1550, 890, 320, 170);
  fill(255, 255, 255);
  rect(1560, 900, 300, 150);
  image(fan3, 1700, 970, 300, 150);
}

void page15() {
  println("page15");
  background(img3);
  borders();

  imageMode(CENTER);
  image(img4, width/2, 150, 800, 300);
  image(fish, width/2, 500, 800, 400);

  fill(255, 0, 0);
  rect(40, 890, 320, 170);
  fill(255, 255, 255);
  rect(50, 900, 300, 150);
  image(fish1, 190, 970, 300, 150);

  fill(0, 255, 0);
  rect(790, 890, 320, 170);
  fill(255, 255, 255);
  rect(800, 900, 300, 150);
  image(fish2, 940, 970, 300, 150);

  fill(0, 0, 255);
  rect(1550, 890, 320, 170);
  fill(255, 255, 255);
  rect(1560, 900, 300, 150);
  image(fish3, 1700, 970, 300, 150);
}

void page16() {
  println("page16");
  background(img3);
  borders();

  imageMode(CENTER);
  image(img4, width/2, 150, 800, 300);
  image(lock, width/2, 500, 500, 500);

  fill(255, 0, 0);
  rect(40, 890, 320, 170);
  fill(255, 255, 255);
  rect(50, 900, 300, 150);
  image(lock1, 190, 970, 300, 150);

  fill(0, 255, 0);
  rect(790, 890, 320, 170);
  fill(255, 255, 255);
  rect(800, 900, 300, 150);
  image(lock2, 940, 970, 300, 150);

  fill(0, 0, 255);
  rect(1550, 890, 320, 170);
  fill(255, 255, 255);
  rect(1560, 900, 300, 150);
  image(lock3, 1700, 970, 300, 150);
}

//border
void borders() {
  line(10, 10, 10, 1070);
  line(11, 11, 11, 1071);
  line(12, 12, 12, 1072);
  line(10, 10, 1910, 10);
  line(11, 11, 1911, 11);
  line(12, 12, 1912, 12);
  line(1910, 10, 1910, 1070);
  line(1909, 9, 1909, 1069);
  line(1908, 8, 1908, 1068);
  line(10, 1070, 1910, 1070);
  line(9, 1069, 1909, 1069);
  line(8, 1068, 1908, 1068);

  line(15, 15, 15, 1065);
  line(15, 15, 1905, 15);
  line(1905, 15, 1905, 1065);
  line(15, 1065, 1905, 1065);
}


void keyPressed() {
  if (key == 'b') {
    num = num +1;
  }
  if (key == 'n') {
    num = 3;
  }
  if (key =='c') {
    num = 1;
  }
}
