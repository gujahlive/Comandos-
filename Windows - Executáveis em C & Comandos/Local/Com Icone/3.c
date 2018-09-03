#include<string.h>
#include<stdio.h>
main(){
	char sigla[3], estado[30];
	printf("Digite a sigla: ");
	gets(sigla);
	//scanf("%s",sigla);
	if (sigla == "RJ" || sigla == "rj"){
		printf("Rio de Janeiro");
	}else printf("Other State");
	if (strcmp(sigla, sigla)){
		
	}

}
