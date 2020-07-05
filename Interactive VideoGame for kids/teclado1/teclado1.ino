
//#include <SoftwareSerial.h>
                           
#include <Keyboard.h>


void setup() {
          // joystick eje Y                          // Iniciamos emulacion raton.
  Keyboard.begin();                         // Iniciamos emulacion teclado.
  //comVirtual.flush();                  // Vacia el buffer de entrada.
  delay(500);
  //comVirtual.begin(9600);             // Inicializa com virtual
  //comVirtual.print("Iniializando salida datos ...");*/
}

void loop() {
int D = A1, A = A0, W = A3, S = A4;  
int arriba,abajo,izquierda,derecha ;
 int lectura = analogRead(W); 
  
  if (lectura>0 && lectura<50){
  arriba=0;
  }
else{arriba=1;
 }
 lectura = analogRead(S); 

  if (lectura>0 && lectura<50){
  abajo=0;
  }
else{abajo=1;
 }

 lectura = analogRead(D); 

  if (lectura>0 && lectura<50){
  derecha=0;
  }
else{derecha=1;
 }

lectura = analogRead(A); 

  if (lectura>0 && lectura<50){
  izquierda=0;
  }
else{izquierda=1;
 } 

            
    if (arriba=0) {
       Keyboard.press('w');
       delay(100);
       Keyboard.release ('w');
   
    } 
    if (abajo=0) {
       Keyboard.press('s');
       delay(100);
       Keyboard.release ('s');
   
    } 
     if (izquierda=0) {
       Keyboard.press('a');
       delay(100);
       Keyboard.release ('a');
   
    } 
     if (derecha=0) {
       Keyboard.press('d');
       delay(100);
       Keyboard.release ('d');
   
    } 
  


}

