#include<stdio.h>
#include<locale.h>
main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int e, SegDigitados;
	
	printf("1 - desligar em 1 minuto.\n");
	printf("2 - desligar em 2 minutos.\n");
	printf("3 - desligar em 3 minutos.\n");
	printf("4 - desligar em 4 minutos.\n");
	printf("5 - desligar em 5 minutos.\n");
	printf("6 - Escolher quantos minutos.\n");
	printf("7 - HIBERNAR.\n");
	printf("8 - DESLIGAR AGORA.\n");
	printf("9 - ESCREVA O COMANDO.\n:");
	scanf("%d",&e);
	switch(e){
	case 1 :
		printf("vou desligar em 1 minuto.");
		system("shutdown -s -t 60 ");
		break;
	case 2 :
		printf("vou desligar em 2 minutos");
		system("shutdown -s -t 120 ");
		break;
	case 3 :
		printf("vou desligar em 3 minutos");
		system("shutdown -s -t 180 ");
		break;
	case 4 :
		printf("vou desligar em 4 minutos");
		system("shutdown -s -t 240 ");
		break;
	case 5 :
		printf("vou desligar em 5 minutos");
		system("shutdown -s -t 300 ");
		break;
	case 6 : 
		///int SegDigitados;
		printf("digite em SEGUNDOS, quanto tempo você quer que a maquina desligue");
		scanf("%d",&SegDigitados);
		printf("A Maquina Será Desligada em %d Segundos\n",SegDigitados);
		break;
		
	case 7 :
		printf("vou hibernei :)");
		system("shutdown -h");
		break;
	default:printf("Opção incorreta!\n");
	}
	
	
}
