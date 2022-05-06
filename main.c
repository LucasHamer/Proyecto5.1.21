#include <stdio.h>
#include <stdlib.h>

int main()
{
    int f,j,filas,espacios,asteriscos;

    printf("Ingrese la cantidad de filas: ");
    scanf("%d",&filas);
    asteriscos=1;
    espacios=filas-1;
    for(f=1;f<=filas;f++)
    {
        for(j=1;j<=espacios;j++)
        {
            printf(" ");
        }
            espacios--;
        for(j=1;j<=asteriscos;j++)
        {
            printf("*");
        }
        asteriscos=asteriscos+2;
        printf("\n");
    }
    asteriscos=asteriscos-4;
    espacios=1;

    for(f=1;f<=filas;f++)
    {
        for(j=1;j<=espacios;j++)
        {
            printf(" ");
        }
            espacios++;
        for(j=0;j<asteriscos;j++)
        {
            printf("*");
        }
        asteriscos=asteriscos-2;
        printf("\n");
    }


    return 0;
}
