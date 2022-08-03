#include <stdio.h>
#include <stdlib.h>

int main()
{

    float num1 , num2 ;
    char op;
    printf("Saisissez un premier nombre \n");
    scanf("%f", &num1);
     printf("Saisissez le deuxieme nombre \n");
    scanf("%f", &num2);
    printf("Saisissez une operation  \n");
    scanf("%s", &op);

    switch (op) {
    case '-' :
        printf(" la soustraction des deux nombre est %f  ", num1-num2 );
break;

    case '+':
        printf("la somme des deux nombre est %f \n ", num1+num2);
break;

    case '/':
         printf("la division des deux nombre est %f 2\n", num1/num2 );
         if (num2 != 0 ) {
            printf("la division des deux nombre est %f 2\n", num1/num2 );
            }
            else {
                printf ("erreure" );
         }


break;
    case '*':
         printf("la multiplication des deux nombre est %f/\n ", num1*num2 );
break;
    default :

        printf("l'operation est incorrect/n");


}








    return 0;
}
