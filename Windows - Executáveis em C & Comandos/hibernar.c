#include<stdio.h>
main(){
/*	Muita gente n�o sabe, mas � poss�vel desligar o Windows atrav�s de um comando, em que se pode programar at� em quanto tempo o computador deve desligar. o comando shutdown disp�e das seguintes op��es:
Simular uma campanha
PUBLICIDADE

-s : desligar
-r : reiniciar
-f : for�a a executar o comando imediatamente
-t : tempo
-l : fazer logoff
-c : mostra uma mensagem
-a : cancela o comando

Por exemplo, queremos desligar o pc em 10 minutos, com a mensagem vou desligar em 10 minutos, ent�o comando seria:

shutdown -s -t 600 -c "vou desligar em 10 minutos"

Para cancelar o comando, seria executado:

shutdown -a

O n�mero 600, � quantidade de segundos, 10minutosx60. ele trabalha apenas com segundos, por isso fica dessa forma.

Para testar estes comandos � s� ir em iniciar/executar e digitar o comando.*/


	printf("vou desligar em 5 minutos");
	system("shutdown -s -t 300 ");// ver depois se posso passar o comando por parametro, ou ent�o fazer um switch case;
	
}
