#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main (void)
{
	if (fork() != 0)
	{			
		//Executo o processo pai
		printf("pid pai= %d\n", getpid());
		waitpid(0,NULL,0);
		
	}
	else
	{
		//Executo o processo filho
		printf("pid filho = %d\n",getpid());
		exit(0);
	}
}
/* Foram criados 2 processos, o pai e o filho, os quais
eram distinguidos utilizando um if(fork()!=0), visto que o fork
retorna 0 para o processo filho e o pid do filho pro pai, desta
maneira foi exibido o pid de cada um dos processos.*/
