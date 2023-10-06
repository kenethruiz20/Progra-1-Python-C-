#include <stdio.h>
#include <string.h>

  struct datos
{ 
   char nombre[30];  
   int DPI;
   char tipojornada[30];
   char departamento[30];
};

int main() 
{
  int opc;
  struct datos funcion[2];
  int horas;
  int DPIX;
  int i;
  int r; 
  int mes;
  int ano;
  char h [30] = ("por horas");
  char t [30] = ("tiempo completo");
 
  while(opc!=2)
  {
  	printf("---Menu---\n");
    printf("1. Ingreso datos \n");
    printf("2. Calcular plantilla \n");
    printf("Seleccione una opcion \n");
    scanf("%d", &opc);

switch (opc)
{
	case 1:
	{	
	for(i=0; i<=2;i++)
	{
            printf("Ingrese el nombre del empleado: \n");
            scanf(" %[^\n]",funcion[i].nombre);
            printf("Ingrese DPI: \n");
            scanf("%d",&funcion[i].DPI);
            printf("Ingrese tipo de jornada (tiempo completo/por horas): \n");
            scanf(" %[^\n]",&funcion[i].tipojornada);
            printf("Ingrese departamento: \n");
            scanf(" %[^\n]",&funcion[i].departamento);
            printf("\n");
		}
		break;
	}
	case 2:
		{
		   printf("Ingrese el DPI: \n");
           scanf("%d", &DPIX);
          while(funcion[r].DPI!=DPIX)
		  {
          if(r==0)
		  {
            break;
            r++;
          }
          }
          if(funcion[r].DPI==DPIX)
		  {
            DPIX=1;
          }
        if(DPIX==1)
		{
            if(strcmp(h, funcion[r].tipojornada) == 0)
			{
			printf("Ingrese el numero de horas trabajadas: \n");
            scanf("%d",&horas);	
            
            printf("Salario: %d", horas*50);
			}
			else
			{
				 printf("Ingrese el mes: \n");
                 scanf("%d",&mes);	
                 printf("Ingrese año: \n");
                 scanf("%d",&ano);	
			
			}
			break;	
        }
        else
		{
          printf("Opcion ingresada no valida \n");
        }	
		}
		
	 default:
      {
        printf("Opcion ingresada no valida \n");
        break;
      }
	}
}
}
