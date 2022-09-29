#include <stdio.h>

int main() {
	int notas[30];
	int i;
	int QuantidadeAlunos;
	
	printf("Digite a quantidade de alunos:", i);
	scanf("%d", &QuantidadeAlunos);
	
	for(i=1; i <QuantidadeAlunos; i++){
		printf("Digite a %d nota do aluno:", i);
		scanf("%d", &notas[i]);
	}
	
	for(i=1; i<QuantidadeAlunos; i++){
		printf("Notas %d: %d\n", i, notas[i]);
	}
return 0;
}