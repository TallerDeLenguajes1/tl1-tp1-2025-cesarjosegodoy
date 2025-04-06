#include<stdio.h>
#include<stdlib.h>

int cuadrado(int x){

    return(x*x);

}

void cuadradoPorReferencia(int *px){

*px = (*px)*(*px);

}

void Invertir(int *a,int *b){

int c;
int *pc = &c;

*pc = *a;
*a = *b;
*b =*pc;

}


void orden(int *x, int*y){

    int c;
    int *pc = &c;

if (*x >= *y){

    *pc = *x;
    *x = *y;
    *y =*pc;


}else {

    *x = *x;
    *y =*y;

}


}










int main (){
    
    int valor = 4;
    int resultado;
    int ingresar;
    int va, vb;
    
    resultado = cuadrado(valor);

    printf(" a - El valor es : %d y su cuadrado es : %d",valor,resultado);

    cuadradoPorReferencia(&valor);

    printf("\n b - Su cuadrado es por referencia : %d",valor);

    printf("\n c - Ingresar un valor : ");
    scanf("%d",&ingresar);

    printf("\n c - La direccion de memoria de la variable ingresada es : %p y su contenido es %d ",&ingresar,ingresar);

    printf("\n d - Ingresar un valor a: ");
    scanf("%d",&va);

    printf("\n d - Ingresar un valor b: ");
    scanf("%d",&vb);

    printf("\n d - El valor en a = %d y en b = %d ",va,vb);

    Invertir(&va,&vb);

    printf("\n d - El valor en a = %d y en b = %d ",va,vb);


    orden(&va,&vb);

    printf("\n e - El valor mas chico en  a = %d y en b  el mas grande = %d ",va,vb);





    return 0;
}