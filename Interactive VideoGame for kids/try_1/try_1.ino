#include <SoftwareSerial.h>
                           
#include <Keyboard.h>


void setup() {
          // joystick eje Y                          // Iniciamos emulacion raton.
  Keyboard.begin();   
  portA0// Iniciamos emulacion teclado.
  /*comVirtual.flush();                  // Vacia el buffer de entrada.
  delay(500);
  comVirtual.begin(9600);             // Inicializa com virtual
  comVirtual.print("Iniializando salida datos ...");*/
}

void volt(int A,char w){
 if (A>900&&A<1100){
  
  Serial.print(A);
  Serial.print("\n "); 
  Keyboard.press(w);
  delay(100);
  Keyboard.release (w);
   }}
void loop() {
int W= A0;  
int w = analogRead(W);  
volt(w,'w');
int A = A2, a = analogRead(A); 
volt(a,'a');
int D = A4,d = analogRead(D), S = A3,s = analogRead(S);
volt(d,'d');
//volt(s,'s');


    /*        
    if (arriba==0) {
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
   
    }*/ 
  

}
