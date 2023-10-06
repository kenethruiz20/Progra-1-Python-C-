#include<conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct nodo_casa{   
	int id_residencia;	
	char residencial[50];
	int manzana;
	int lote;
	char nom_encargado[100];
	struct nodo_casa *next;
};

struct nodo_lectura{
	int id_lectura;   
	int id_residencia;	
	int mes;
	int consumo;
	int monto;
	int exceso;
	struct nodo_lectura *next;
};

struct nodo__lectura *head__lectura = NULL;
struct nodo__lectura *tail__lectura = NULL;

struct nodo_casa *head_casa = NULL;
struct nodo_casa *tail_casa = NULL;

int buscar_lectura(int id_lec){
	int sw =1;
	
	struct nodo_lectura *p;
	p =  head_lectura;
	
	while((p != NULL)&&(sw==1)){
		if(p->id_lectura== id_lec){
			sw=0;
		}else{
			p=p->next;
		}
	}
	return sw;
}

int buscar_residencia(int id_res){
	int sw =1;
	
	struct nodo_casa *p;
	p =  head_casa;
	
	while((p != NULL)&&(sw==1)){
		if(p->id_residencia== id_res){
			sw=0;
		}else{
			p=p->next;
		}
	}
	return sw;
}

void add_lectura(int id_lec,int id_res,int mes,int cons) {
	nodo_lectura* nuevo = new nodo_lectura;

	nuevo->id_lectura=id_lec;   
	nuevo->id_residencia=id_res;	
	nuevo->mes=mes;
	nuevo->consumo=cons;
	nuevo->monto=150;
	if(cons>30){
		int ex = 150 - cons;
		if(){
			
		}
	}else{
		nuevo->exceso=0;	
	}
	
	nuevo->next = NULL;
	
	if (head_casa == NULL && tail_casa == NULL){
		head_casa = nuevo;
		tail_casa = nuevo;
	}else{
		tail_casa->next = nuevo;
		tail_casa = nuevo;
	}
}

void add_casa(int id_res,char res[],int man,int lote,char n_enc[]) {
	nodo_casa* nuevo = new nodo_casa;
	
	nuevo->id_residencia = id_res;
	strcpy(nuevo->residencial, res);
	nuevo->manzana = man;
	nuevo->lote = lote;
	strcpy(nuevo->nom_encargado,n_enc);
	
	nuevo->next = NULL;
	
	if (head_casa == NULL && tail_casa == NULL){
		head_casa = nuevo;
		tail_casa = nuevo;
	}else{
		tail_casa->next = nuevo;
		tail_casa = nuevo;
	}
}


int main(){
	int opcion = 10;
	char residen[100];
	char nom_enca[100];
	int id_res;
	int man,lote;
	
	while (opcion != 0) {
		printf("====================================\n");
		printf("\tMENU PRINCIPAL \n");
		printf("====================================\n");
		printf("\n1. Registro de casas \n");
		printf("  2. Registro de lecturas \n");		
		printf("0. Salir \n");
		printf("-----------------------------------\n");
		scanf("%d", &opcion);
		
		switch(opcion){
			case 1:{
				char descr[100];
			
				printf("Ingrese su identificacion de residencia : \n");
				scanf("%d", &id_res);
				if(buscar_residencia(id_res)==1){
					printf("Ingrese el Residencial : \n");
					scanf(" %[^\n]s", residen);
					printf("Ingrese la manzana de la residencia : \n");
					scanf("%d", &man);					
					printf("Ingrese el lote de la residencia : \n");
					scanf("%d", &lote);					
					printf("Ingrese nommbre del encargado : \n");
					scanf(" %[^\n]s", nom_enca);
				
					add_casa (id_res,residen,man,lote,nom_enca);
				}else{
					printf("Ya existe una casa con esta identificacion \n");
				}
				break;
			}
			
			default:{
				printf("Opcion invalida... \n");
			}
		}
	}
	
}
