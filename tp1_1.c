#include<stdio.h>
#include<stdlib.h>

int main (){

    int var = 6;
    int *pVar;

    pVar= &var;

    printf("Hola Mundo");

    printf("\n01 - El contenido del puntero es : %d",*pVar);

    printf("\n02 - La direccion de memoria almacenada por el puntero es : %p",pVar);

    printf("\n03 - La direccion de memoria de la variable es : %p",&var);
    
    printf("\n04 - La direccion de memoria del puntero :%p",&pVar );

    printf("\n05 - El tamano de memoria utilizado : %lld", sizeof(var));

    return 0;



}
