#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main (void)
{
	char v[3] = {'3','2','1'};
	char aux1, aux2;	
	if (fork() != 0)
	{		
		//Executo o processo pai
		printf("v= %c %c %c\n", v[0],v[1],v[2]);
		waitpid(0,NULL,0);
		
	}
	else
	{
		//ordena o vetor	
		aux1 = v[0];
		aux2 = v[1];
		v[0] = v[2];
		v[1] = aux1;
		v[2] = aux2;
		exit(0);
	}
}
/* Foram criados 2 processos, o pai e o filho, comprovando que cada processo
 tem a sua própria memoria. Percebemos isso pois o processo filho ordenava um dado vetor 
e o pai nao tinha acesso ao vetor ordenado. */
