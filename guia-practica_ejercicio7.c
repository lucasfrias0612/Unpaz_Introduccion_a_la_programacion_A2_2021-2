#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number1=0;
    printf("Ingrese un numero: ");
    fflush(stdin);
    scanf("%i", &number1);

    int number2=0;
    printf("Ingrese otro numero: ");
    fflush(stdin);
    scanf("%i", &number2);

    int divisor=1;
    printf("Ingrese el divisor: ");
    fflush(stdin);
    scanf("%i", &divisor);

    if(number1%divisor == 0 || number2%divisor==0){
        printf("Al menos uno de los numeros es divisible entre %i\n",divisor);
    }else{
        printf("Ninguno de los numeros es divisible entre %i\n",divisor);
    }

    system("pause");
    return 0;
}
