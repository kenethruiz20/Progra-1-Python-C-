#include <stdio.h>

struct Preguntas
{
  char pregunta[255];
  char respuesta1[255];
  char respuesta2[255];
  char respuesta3[255];
  char respuesta4[255];
  int RC;
};

int main(void) {
int count, i, opc, respuesta, h, notaestudiante;
struct Preguntas vector[10];



printf("Ingrese la opci?n que quiere ejecutar: \n 1. Crear examen  \n 2. Ser examinado (Ejecutar examen)\n ");
scanf("%d",&opc);

switch(opc)
{
 case 1:;
for (i=0; i<10; i++){
  printf("Ingresar la pregunta: %d) ", i+1);
  scanf("%s",vector[i].pregunta);
  printf("Ingrese la primera posible respuesta: ");
  scanf("%s",vector[i].respuesta1);
  printf("Ingrese la segunda posible respuesta: ");
  scanf("%s",vector[i].respuesta2);
  printf("Ingrese la tercera posible respuesta: ");
  scanf("%s",vector[i].respuesta3);
  printf("Ingrese la cuarta posible respuesta: ");
  scanf("%s",vector[i].respuesta4);
  printf("Ingrese la respuesta correcta: 1,2,3,4 ");
  scanf("%d", &vector[i].RC);
}

break;
case 2:;
for(i=0; i<2;i++){
  printf("La primera pregunta es: \n %s  \n",vector[i].pregunta);

  printf("Las opciones de respuestas son:\n 1.) %s \n 2.) %s \n 3.) %s \n 4.) %s \n ",vector[i].respuesta1,vector[i].respuesta2, vector[i].respuesta3, vector[i].respuesta4 );

  printf("Ingrese el n?ero de la respuesta que considera correcta : \n");

  scanf("%d",&respuesta);
if (respuesta==vector[i].RC){
  notaestudiante = notaestudiante +10;
 }
}

printf("Su nota en este examen fue de:%d\n",notaestudiante);



  return 0;
}
}


