#include <stdio.h>

int main(){
    float x,y,res;
    char op;

    printf("Operacion: ");
    scanf(" %c", &op);        /*leer entrada de usuario y almacenarla en variable. "%c" leer un caracter*/
    printf("Ingrese x: ");
    scanf("%f", &x);         /*"%f" leer un float*/
    printf("Ingrese y: ");
    scanf("%f", &y);

    switch (op)
    {
    case '+':
        res = x+y;
        break;
    case '-':
        res = x-y;
        break;
    case '*':
        res = x*y;
        break;
    case '/':
        if (y!=0)
        {
           res = x/y;
        }
        else{
            printf("No se puede dividir por 0");
            return 1;
        }        
        break;
    
    default:
        return 1;
    }

     printf("Resultado: %f ", res);
     return 0;   
}