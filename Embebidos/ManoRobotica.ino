#include <Servo.h>
#include <Keypad.h>
 
const byte rowsCount = 4;
const byte columsCount = 4;
 
char keys[rowsCount][columsCount] = {
   { '1','2','3', 'A' },
   { '4','5','6', 'B' },
   { '7','8','9', 'C' },
   { '#','0','*', 'D' }
};


const byte rowPins[rowsCount] = { 13, 12, 11, 10 };
const byte columnPins[columsCount] = { 9, 8, 7, 6 };
 
Keypad keypad = Keypad(makeKeymap(keys), rowPins, columnPins, rowsCount, columsCount);

//Servos
Servo servoPulgar;
Servo servoIndice;
Servo servoCorazon;
Servo servoAnular;
Servo servoMenique;


void setup() {
   Serial.begin(9600);
   servoPulgar.attach(5);
   servoIndice.attach(4);
   servoCorazon.attach(3);
   servoAnular.attach(2);
   servoMenique .attach(2);
}
 
void loop() {
  //Inicia codigo de keypad
  char key = keypad.getKey();
  //char Controlando;
  if (key=='1') {
    Serial.println(key);
    Serial.println("Moviendo Pulgar");
    servoPulgar.write(0);
    }else if(key=='2'){
      Serial.println(key);
      Serial.println("Moviendo Pulgar");
      servoPulgar.write(180);
    }else if(key=='3'){
      Serial.println(key);
      Serial.println("Moviendo Indice");
      servoIndice.write(0);
    }else if(key=='4'){
      Serial.println(key);
      Serial.println("Moviendo Indice");
      servoIndice.write(180);
    }else if(key=='5'){
      Serial.println(key);
      Serial.println("Moviendo Corazon");
      servoCorazon.write(0);
    }else if(key=='6'){
      Serial.println(key);
      Serial.println("Moviendo Corazon");
      servoCorazon.write(180);
    }else if(key=='7'){
      Serial.println(key);
      Serial.println("Moviendo Anular");
      servoAnular.write(0);
    }else if(key=='8'){
      Serial.println(key);
      Serial.println("Moviendo Anular");
      servoAnular.write(180);
    }else if(key=='9'){
      Serial.println(key);
      Serial.println("Moviendo Menique");
      servoMenique.write(0);
    }else if(key=='0'){
      Serial.println(key);
      Serial.println("Moviendo Menique");
      servoMenique.write(180);
    }else if(key=='A'){
      Serial.println("Controlando dedo Pulgar");
      //Inicia codigo de servo motores
      servoPulgar.write(0);
      delay(1000);
      servoPulgar.write(90);
      delay(1000);
      servoPulgar.write(180);
      delay(1000);
    }else if(key=='B'){
      Serial.println("Controlando dedo Indice");
      //Inicia codigo de servo motores
      servoIndice.write(0);
      delay(1000);
      servoIndice.write(90);
      delay(1000);
      servoIndice.write(180);
      delay(1000);
    }else if(key=='C'){
      Serial.println("Controlando dedo Medio");
      //Inicia codigo de servo motores
      servoCorazon.write(0);
      delay(1000);
      servoCorazon.write(90);
      delay(1000);
      servoCorazon.write(180);
      delay(1000);
    }else if(key=='D'){
      Serial.println("Controlando dedo Anular");
      //Inicia codigo de servo motores
      servoAnular.write(0);
      delay(1000);
      servoAnular.write(90);
      delay(1000);
      servoAnular.write(180);
      delay(1000);
    }else if(key=='#'){
      Serial.println(key);
      servoPulgar.write(0);
      delay(1000);
      servoPulgar.write(90);
      delay(1000);
      servoPulgar.write(180);
      delay(1000);
      servoIndice.write(0);
      delay(1000);
      servoIndice.write(90);
      delay(1000);
      servoIndice.write(180);
      delay(1000);
      servoCorazon.write(0);
      delay(1000);
      servoCorazon.write(90);
      delay(1000);
      servoCorazon.write(180);
      delay(1000);
      servoAnular.write(0);
      delay(1000);
      servoAnular.write(90);
      delay(1000);
      servoAnular.write(180);
      delay(1000);
      servoMenique.write(0);
      delay(1000);
      servoMenique.write(90);
      delay(1000);
      servoMenique.write(180);
      delay(1000);
    }else if(key=='*'){
      Serial.println("Controlando dedo Meñique");
      //Inicia codigo de servo motores
      servoMenique.write(0);
      delay(1000);
      servoMenique.write(90);
      delay(1000);
      servoMenique.write(180);
      delay(1000);
    }
}
