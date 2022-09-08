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
  Serial.println("Menu");
  Serial.println("---Seleccionar dedo a mover---");
  Serial.println("A.- Pulgar");
  Serial.println("B.- Indice");
  Serial.println("C.- Medio");
  Serial.println("D.- Anular");
  Serial.println("#.- Menique");
  Serial.println("---Movimientos---");
  Serial.println("1.- 0°");
  Serial.println("2.- 30°");
  Serial.println("3.- 60°");
  Serial.println("4.- 90°");
  Serial.println("5.- 120°");
  Serial.println("6.- 140°");
  Serial.println("7.- 160°");
  Serial.println("8.- 180°");
  Serial.println("---Automaticos---");
  Serial.println("9.- Apuntar con el dedo");
  Serial.println("0.- Seña");
  Serial.println("*.- Cerrar y abrir");
  char key = keypad.getKey();
  char Controlando;
  if (key=='1') {
    Serial.println(key);
    if(Controlando=="Pulgar"){
      Serial.println("Moviendo Pulgar a 0°");
      servoPulgar.write(0);
      }else if(Controlando=="Indice"){
        Serial.println("Moviendo Indice a 0°");
        servoIndice.write(0);
      }else if(Controlando=="Medio"){
        Serial.println("Moviendo Medio a 0°");
        servoCorazon.write(0);
      }else if(Controlando=="Anular"){
        Serial.println("Moviendo Anular a 0°");
        servoAnular.write(0);
      }else if(Controlando=="Menique"){
        Serial.println("Moviendo Menique a 0°");
        servoMenique.write(0);
      }else{
        Serial.println("Primero selecciona que dedo quieres mover.");
      }
    }else if(key=='2'){
    Serial.println(key);
    if(Controlando=="Pulgar"){
      Serial.println("Moviendo Pulgar a 30°");
      servoPulgar.write(30);
      }else if(Controlando=="Indice"){
        Serial.println("Moviendo Indice a 30°");
        servoIndice.write(30);
      }else if(Controlando=="Medio"){
        Serial.println("Moviendo Medio a 30°");
        servoCorazon.write(30);
      }else if(Controlando=="Anular"){
        Serial.println("Moviendo Anular a 30°");
        servoAnular.write(30);
      }else if(Controlando=="Menique"){
        Serial.println("Moviendo Menique a 30°");
        servoMenique.write(30);
      }else{
        Serial.println("Primero selecciona que dedo quieres mover.");
      }
    }else if(key=='3'){
    Serial.println(key);
    if(Controlando=="Pulgar"){
      Serial.println("Moviendo Pulgar a 60°");
      servoPulgar.write(60);
      }else if(Controlando=="Indice"){
        Serial.println("Moviendo Indice a 60°");
        servoIndice.write(60);
      }else if(Controlando=="Medio"){
        Serial.println("Moviendo Medio a 60°");
        servoCorazon.write(60);
      }else if(Controlando=="Anular"){
        Serial.println("Moviendo Anular a 60°");
        servoAnular.write(60);
      }else if(Controlando=="Menique"){
        Serial.println("Moviendo Menique a 60°");
        servoMenique.write(60);
      }else{
        Serial.println("Primero selecciona que dedo quieres mover.");
      }
    }else if(key=='4'){
    Serial.println(key);
    if(Controlando=="Pulgar"){
      Serial.println("Moviendo Pulgar a 90°");
      servoPulgar.write(90);
      }else if(Controlando=="Indice"){
        Serial.println("Moviendo Indice a 90°");
        servoIndice.write(90);
      }else if(Controlando=="Medio"){
        Serial.println("Moviendo Medio a 90°");
        servoCorazon.write(90);
      }else if(Controlando=="Anular"){
        Serial.println("Moviendo Anular a 90°");
        servoAnular.write(90);
      }else if(Controlando=="Menique"){
        Serial.println("Moviendo Menique a 90°");
        servoMenique.write(90);
      }else{
        Serial.println("Primero selecciona que dedo quieres mover.");
      }
    }else if(key=='5'){
    Serial.println(key);
    if(Controlando=="Pulgar"){
      Serial.println("Moviendo Pulgar a 120°");
      servoPulgar.write(120);
      }else if(Controlando=="Indice"){
        Serial.println("Moviendo Indice a 120°");
        servoIndice.write(120);
      }else if(Controlando=="Medio"){
        Serial.println("Moviendo Medio a 120°");
        servoCorazon.write(120);
      }else if(Controlando=="Anular"){
        Serial.println("Moviendo Anular a 120°");
        servoAnular.write(120);
      }else if(Controlando=="Menique"){
        Serial.println("Moviendo Menique a 120°");
        servoMenique.write(120);
      }else{
        Serial.println("Primero selecciona que dedo quieres mover.");
      }
    }else if(key=='6'){
    Serial.println(key);
    if(Controlando=="Pulgar"){
      Serial.println("Moviendo Pulgar a 140°");
      servoPulgar.write(140);
      }else if(Controlando=="Indice"){
        Serial.println("Moviendo Indice a 140°");
        servoIndice.write(140);
      }else if(Controlando=="Medio"){
        Serial.println("Moviendo Medio a 140°");
        servoCorazon.write(140);
      }else if(Controlando=="Anular"){
        Serial.println("Moviendo Anular a 140°");
        servoAnular.write(140);
      }else if(Controlando=="Menique"){
        Serial.println("Moviendo Menique a 140°");
        servoMenique.write(140);
      }else{
        Serial.println("Primero selecciona que dedo quieres mover.");
      }
    }else if(key=='7'){
    Serial.println(key);
    if(Controlando=="Pulgar"){
      Serial.println("Moviendo Pulgar a 160°");
      servoPulgar.write(160);
      }else if(Controlando=="Indice"){
        Serial.println("Moviendo Indice a 160°");
        servoIndice.write(160);
      }else if(Controlando=="Medio"){
        Serial.println("Moviendo Medio a 160°");
        servoCorazon.write(160);
      }else if(Controlando=="Anular"){
        Serial.println("Moviendo Anular a 160°");
        servoAnular.write(160);
      }else if(Controlando=="Menique"){
        Serial.println("Moviendo Menique a 160°");
        servoMenique.write(160);
      }else{
        Serial.println("Primero selecciona que dedo quieres mover.");
      }
    }else if(key=='8'){
    Serial.println(key);
    if(Controlando=="Pulgar"){
      Serial.println("Moviendo Pulgar a 180°");
      servoPulgar.write(180);
      }else if(Controlando=="Indice"){
        Serial.println("Moviendo Indice a 180°");
        servoIndice.write(180);
      }else if(Controlando=="Medio"){
        Serial.println("Moviendo Medio a 180°");
        servoCorazon.write(180);
      }else if(Controlando=="Anular"){
        Serial.println("Moviendo Anular a 180°");
        servoAnular.write(180);
      }else if(Controlando=="Menique"){
        Serial.println("Moviendo Menique a 180°");
        servoMenique.write(180);
      }else{
        Serial.println("Primero selecciona que dedo quieres mover.");
      }
    }else if(key=='9'){
      Serial.println(key);
      Serial.println("Apuntar con el dedo");
      servoPulgar.write(0);
      servoIndice.write(180);
      servoCorazon.write(0);
      servoAnular.write(0);
      servoMenique.write(0);
    }else if(key=='0'){
      Serial.println(key);
      Serial.println("Seña");
      servoPulgar.write(0);
      servoIndice.write(180);
      servoCorazon.write(180);
      servoAnular.write(0);
      servoMenique.write(0);
    }else if(key=='A'){
      Serial.println("Controlando dedo Pulgar");
      Controlando="Pulgar";
    }else if(key=='B'){
      Serial.println("Controlando dedo Indice");
      Controlando="Indice";
    }else if(key=='C'){
      Serial.println("Controlando dedo Medio");
      Controlando="Medio";
    }else if(key=='D'){
      Serial.println("Controlando dedo Anular");
      Controlando="Anular";
    }else if(key=='#'){
      Serial.println(key);
      Serial.println("Abrir y cerrar");
      servoPulgar.write(0);
      servoIndice.write(0);
      servoCorazon.write(0);
      servoAnular.write(0);
      servoMenique.write(0);
      delay(1000);
      servoPulgar.write(90);
      servoIndice.write(90);
      servoCorazon.write(90);
      servoAnular.write(90);
      servoMenique.write(90);
      delay(1000);
      servoPulgar.write(180);
      servoIndice.write(180);
      servoCorazon.write(180);
      servoAnular.write(180);
      servoMenique.write(180);
    }else if(key=='*'){
      Serial.println("Controlando dedo Menique");
      Controlando="Menique";
    }
}
