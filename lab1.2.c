#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main (void)
{
	char v[3] = {'b','c','a'};
	char buf1, buf2;	
	if (fork() != 0)
	{		
		//Executo o processo pai
		printf("v= %c %c %c\n", v[0],v[1],v[2]);
		waitpid(0,NULL,0);
		
	}
	else
	{
		//ordena o vetor	
		buf1 = v[0];
		buf1 = v[1];
		v[0] = v[2];
		v[1] = buf1;
		v[2] = buf2;
		exit(0);
	}
}
/* Foram criados 2 processos,o pai e o filho, com o fim
de comprovar que cada processo tem a sua própria memoria mostrando de
forma que o processo filho ordenava um dado vetor o pai nao tinha
acesso ao vetor ordenado. */
