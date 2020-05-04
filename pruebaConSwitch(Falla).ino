int led0 = 4;
int led1 = 6;
int boton = 10;
int estado = 0;
int push = 0;

void setup() {
  pinMode(led0, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(boton, INPUT); 
}

void loop() {
  boton = digitalRead(10);
    switch(push){
      case 0:
      digitalWrite(led1, LOW);
      digitalWrite(led0, HIGH);
      break;
      case 1:
      digitalWrite(led1, HIGH);
      digitalWrite(led0, LOW);
      break;
      case 2:
      digitalWrite(led1, HIGH);
      digitalWrite(led0, HIGH);
      break;
      case 3:   
      digitalWrite(led1, LOW);
      digitalWrite(led0, LOW);
     
      }
    }
