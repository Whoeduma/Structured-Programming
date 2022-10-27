#include <stdio.h>


int main( ) {
	int notas[30];
	int i;
	
	for (i=0; i<=30; i++){
		printf("Digite a nota do aluno: ", i);
		scanf("%d", &notas[i]);
	}
	
	for (i=0; i<30; i++){
		printf("Notas %d: %d\n", i, notas[i]);
	}
	return 0;
}