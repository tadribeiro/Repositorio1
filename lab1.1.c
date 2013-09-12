#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main (void)
{
	if (fork() != 0)
	{			
		//Executa o processo pai
		printf("pid pai= %d\n", getpid());
		waitpid(0,NULL,0);
		
	}
	else
	{
		//Executa o processo filho
		printf("pid filho = %d\n",getpid());
		exit(0);
	}
}
/* Foram criados 2 processos, o pai e o filho. Diferenciamos os dois  utilizando um if(fork()!=0). O fork
retorna 0 para o processo filho e o pid do filho pro pai. Assim, foi exibido o pid de cada um dos processos.*/
