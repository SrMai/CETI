int valor;
int motor=11;
int i=0;
char opcion = "";
char opcion2 = "";

void setup() {
  // put your setup code here, to run once:
//pinMode(pin1A, OUTPUT)
  Serial.println(opcion);
  pinMode(motor, OUTPUT);  
  Serial.begin(9600);
  analogWrite(motor, 0);


    
  Serial.println("---------MENU---------");
  Serial.println("");
  Serial.println("1.-Enciende led 1s y se apaga 2s");
  Serial.println("2.-Cambiar velocidad de motor");
  Serial.println("3.-Ciclo de 0 a 255");
}

void loop() {
  int i=0;
  opcion = Serial.read();
  
  if(opcion==65 || opcion==97){
    for(i=0; i<=0; i--){
      int velocidad = 255;
      digitalWrite(motor, velocidad);
      Serial.println("El motor esta llendo a:");
      Serial.println(velocidad);
      delay(1000);
      digitalWrite(motor, LOW);
      delay(2000);      
    }
  }else if(opcion==98 || opcion==66){
    Serial.println("---------MENU---------");
    Serial.println("Selecciona la velocidad");
    Serial.println("A.-Baja");
    Serial.println("B.-Media");
    Serial.println("C.-Alta");
    opcion = Serial.read();
    if(opcion==65 || opcion==97){
    Serial.println("Seleccionaste la velocidad baja");
    analogWrite(motor, 50);
    }else if(opcion==98 || opcion==66){
    Serial.println("Seleccionaste la velocidad baja");
    analogWrite(motor, 150);
    }else if(opcion==65 || opcion==97){
    Serial.println("Seleccionaste la velocidad baja");
    analogWrite(motor, 255);
    }

  }else if(opcion==99 || opcion==67){
    for(i=0; i<=255; i++){
      analogWrite(motor, i);
      Serial.println(i);
      delay(500);
      }
    for(i=255; i>=0; i--){
      analogWrite(motor, i);
      Serial.println(i);
      delay(500);
      }
  }
}
