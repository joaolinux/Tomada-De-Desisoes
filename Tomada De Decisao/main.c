#include <stdio.h>
#include <stdlib.h>

// Autor: Jo�o

int main()
{
    int i = 10;

    printf("Digite um numero != de 5: \n") ;
    scanf("%i", &i);

    if(i!=5)
    {
        printf("\nA expressao e:\n ");
        printf("TRUE\n");
    }else{
         printf("\nA express�o e:\n ");
         printf("FALSE\n");
    }

//! � um sinal de nega��o, igual a express�o NOT


/*

1) positivo -> 1
2) negativo -> 0

*/

// == compara��o positiva -> x == y
// != compara��o negativa -> x != y

    return 0;
}
