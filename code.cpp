int bulb1 = 12;  

int bulb2 = 11;

int bulb3 = 10;

int bulb4 = 9;

int bulb5 = 8;

int bulb6 = 7;    // signal to drive relay

int soundsensor = 2;   // input from sound sensor

boolean state = false;

void setup()

{

  pinMode(bulb1, OUTPUT);

  pinMode(bulb2, OUTPUT);

  pinMode(bulb3, OUTPUT);

  pinMode(bulb4, OUTPUT);

  pinMode(bulb5, OUTPUT);

  pinMode(bulb6, OUTPUT);

  pinMode(soundsensor, INPUT);

}

void loop()

{

  if (digitalRead(soundsensor) == LOW)

  {

    delay(10);                    

    state = !state;              

    digitalWrite(bulb1, state);

    delay(50);  

    digitalWrite(bulb2, state);

    delay(50);  

    digitalWrite(bulb3, state);

    delay(50);  

    digitalWrite(bulb4, state);

    delay(50);  

    digitalWrite(bulb5, state);

    delay(50);  

    digitalWrite(bulb6, state);  

  }

}
