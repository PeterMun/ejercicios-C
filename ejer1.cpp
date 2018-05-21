#include <stdio.h>

int main(int argc, char *argv[]){
	
	int dia, mes, anio, max;
    

	printf("Introduzca la fecha \n");
	scanf("%d" "%d" "%d", &dia, &mes, &anio);
	printf(" %d / %d /%d \n",dia,mes,anio);
	dia = dia -1;
	//mes = mes -1;
	//anio = anio -1;
	
	
	if(mes == 4 || mes == 6 || mes ==9 || mes ==11 || mes ==12) max = 30;
	if(mes == 1 || mes == 3 || mes ==5 || mes ==7 || mes ==8 || mes==10||mes ==12) max = 31;
	if(mes ==2) max = 28;
	


	
	
	if(dia == 0 ||mes != mes){
		mes = mes-1;
		dia = 31;
		
	}
	if(mes == 0){
		mes = 12;
		anio = anio-1;
		
		
	}
	if(mes == 2){
		dia = 28;
	}
	if(mes == mes){
		mes = mes;
	}
	
		
	
		
	/*if(mes == 0){
		mes = 12;
		anio = anio-1;		
	}else{
		dia = dia -1;
		mes = mes -1;
	}*/

	printf(" %d / %d /%d \n",dia,mes,anio);

	
	return 0;
	
}




