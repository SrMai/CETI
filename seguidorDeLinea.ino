
#include <AFMotor.h>

AF_DCMotor motor1(2);

int input = A0;
int input2 = A1;
int output = 3;
int val = 0;
int val2 = 0;
void setup() // Configuracion de los PINES del ARDUINO
{
  Serial.begin(9600);
  pinMode(input, INPUT);
  pinMode(input2, INPUT);
  pinMode(output, OUTPUT);
  motor1.setSpeed(250);
}

void loop() // Ciclo de comportmaiento del Programa 
{
  val = analogRead(input);
  val2 = analogRead(input2);
  Serial.println("A");
  Serial.println(val);
  Serial.println("B");
  Serial.println(val2);
  if(val > 80 && val2 >80)
  {
    digitalWrite(output, LOW);
    Serial.print("Fuera de linea");
  }else if(val>80 && val2<80){
    digitalWrite(output, HIGH);
    Serial.print("Fuera de linea Izquierda");
  }else if(val<80 && val2>80){
    digitalWrite(output, HIGH);
    Serial.print("Fuera de linea Derecha");
  }else if(val<80 && val2<80){
    digitalWrite(output, HIGH);
    Serial.print("En linea Negra");
  }
  uint8_t i;
}

void Izquierda(){
    Serial.print("Izquierda");
    motor1.run(FORWARD);
}
