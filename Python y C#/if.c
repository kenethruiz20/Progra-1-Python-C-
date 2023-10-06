#include <stdio.h>
int main()
{
    int numero1, numero2;
    
    printf("Ingrese un numero: ");
    scanf("%d", &numero1);

    printf("ingrese el segundo numero: ");
    scanf("%d", &numero2);

    // && => and
    // || =< or

    if ( numero1 == 7 && numero2 == 3 )
    {
        printf("Bienvenido a MiU \n");
    }
    else
    {
        printf("Error, usuario y/o contraseña incorrecta");
        
    }
}