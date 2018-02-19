#include<stdio.h>
main(){
/*	Muita gente não sabe, mas é possível desligar o Windows através de um comando, em que se pode programar até em quanto tempo o computador deve desligar. o comando shutdown dispõe das seguintes opções:
Simular uma campanha
PUBLICIDADE

-s : desligar
-r : reiniciar
-f : força a executar o comando imediatamente
-t : tempo
-l : fazer logoff
-c : mostra uma mensagem
-a : cancela o comando

Por exemplo, queremos desligar o pc em 10 minutos, com a mensagem vou desligar em 10 minutos, então comando seria:

shutdown -s -t 600 -c "vou desligar em 10 minutos"

Para cancelar o comando, seria executado:

shutdown -a

O número 600, é quantidade de segundos, 10minutosx60. ele trabalha apenas com segundos, por isso fica dessa forma.

Para testar estes comandos é só ir em iniciar/executar e digitar o comando.*/


	printf("vou desligar em 5 minutos");
	system("shutdown -s -t 300 ");// ver depois se posso passar o comando por parametro, ou então fazer um switch case;
	
}
