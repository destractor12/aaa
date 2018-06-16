#include <stdio.h>
#include <stdlib.h>
/**Llamar a la funcion a traves de un puntero :
tipo dato de que devulve ,el nombre de la funcion pero entre parentesis y asterisco y lista de paramtros que recibe
ACCEDOA LA FUNCION A TRAVES DEL PUNTERO*/

void funcion1();
void funcion2(char*);//Muestra
void funcionPuntero(void(*)(char*));



int main()
{
   void (*F1)(void); // hay que apuntar la funcion , le paso la direccion de la memoria de la funcion
   void(*F2)(char*);


   F1=funcion1;//YA DEVUELVE LA DIRECCION DE MEMORIA DE LA FUNCION SOLO EL NOMBRE SIN PARENTESIS
   F1();

   F2=funcion2;
   F2("hola vo");

   funcionPuntero(funcion2); //lepaso la direccion de memoria a delegado y cuando ejecuto delegado llama a funcion 2

    return 0;
}

void funcion1()
{
    printf("Hola mundo!!");
}
void funcion2(char* vo)
{
    printf("%s",vo);
}

void funcionPuntero(void(*delegado)(char*))//llamo a lafuncion que muestra
{
 delegado("hola pip");
}
