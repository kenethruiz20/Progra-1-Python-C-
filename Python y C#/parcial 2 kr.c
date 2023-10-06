#include <stdio.h>
#include <stdlib.h>

struct empleadoInfo {
	char nombre[255];
	int dpi;
	char departamento[255];
	int jornada;
	int resultado, anio, mes, horas;
		
};



int  main (){
	int op;
	int i;
	int pruebas = 20;
	
	
	
	struct empleadoInfo labor[20];
	
	while(op!= 4){
		printf("1. Porfavor Ingrese la informacion del empleado\n");
		printf("2. Calculo del pago necesario \n");
		printf("3. Salarios\n");
		printf("4. salida \n");
		scanf("%d", &op);
		
		switch (op)
		{
			case 1 :{
				for (i=0; i<pruebas; i++)
				{
					printf("Porfavor ingrese el nombre del empleado \n");
					scanf("%s", labor[i].nombre);
					
					printf("porfavor ingrese el numero del DPI \n");
					scanf("%d", &(labor[i].dpi));
					
					printf("porfavor ingrese el departamento donde labora \n");
					scanf("%s", labor[i].departamento);
					
					printf("Ingresar el numero 1 si labora por tiempo completo \nIngresar el numero 2 si labora por hora\n");
					scanf("%d", &(labor[i].jornada));
					
				}
				
				break;
			}
			
			
			case 2:{
				for (i=0; i<pruebas; i++)
				{
					
					if (labor[i].jornada == 1)
					{
						printf("ingresar el numero de mes que hay que pagar r\n");
						scanf("%d", &(labor[i].mes));
						printf("porfavor ingresar el año \n");
						scanf("%d", &(labor[i].anio));
						
						if(labor[i].mes<=6 && labor[i].mes%2 == 0)
						{
							labor[i].resultado = 23*500;
						}
						else if (6<labor[i].mes<=12 && labor[i].mes%2 == 0)
						{
							labor[i].resultado = 23*500;					
						}
						else if (labor[i].mes <= 6 && labor[i].mes%2 != 0)
						{
							labor[i].resultado = 22*500;			
						}
						else if (6< labor[i].mes <= 12 && labor[i].mes%2 !=0)
						{
							labor[i].resultado = 22*500;							
						}
						
					}
					else if (labor[i].jornada == 2)
					{
						printf("Porfavor Ingrese el numero de horas trabajadas\n");
						printf(" El numero de horas ingresadas debe ser menor a 192 horas mensuales.\n");
						scanf("%d", &(labor[i].horas));
						printf("Ingrese el numero del mes que hay que pagar\n");
						scanf("%d", &(labor[i].mes));
						printf("Ingrese el año \n");
						scanf("%d", &(labor[i].anio));
						
						if (labor[i].horas<= 192)
						{
							labor[i].resultado = labor[i].horas*50;
						}
						else if(labor[i].horas> 192)
						{
							printf("El numero de horas trabajadas no cumplen. \n");

						}
					}
				}
				break;
			}
			
			case 3:{
				for (i=0 ; i< pruebas; i++)
				{
					printf("Tabla de pagos a empleados. \n");
					printf("El salario de %s en el mes %d, del anio %d es: %d \n\n\n\n", labor[i].nombre, labor[i].mes, labor[i].anio, labor[i].resultado);
				}
				break;
			}
			
			case 4:{
				exit(1);
				
			default:
				printf("Opcion invalida\n");
	
				break;
			}

			
			
		}
		
		
		
	}
}

