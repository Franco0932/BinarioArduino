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
  if(boton!=estado){
    if(boton==HIGH)
      push++;
      if(push>4)
         push = 1;
    }
    estado=boton;
    if(push==1){
      digitalWrite(led1, LOW);
      digitalWrite(led0, HIGH);
    }
    if(push==2){
      digitalWrite(led0, LOW);
      digitalWrite(led1, HIGH);
    }
    if(push==3){
      digitalWrite(led0, HIGH);
      digitalWrite(led1, HIGH);
    }
    if(push==4){
      digitalWrite(led0, LOW);
      digitalWrite(led1, LOW);
    }
  }
