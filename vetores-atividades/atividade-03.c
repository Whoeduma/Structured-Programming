#include <stdio.h>

int main() {
	int dado[100];
	int i;
	int soma;
	
	for(i = 0; i <= 99; i++){
        printf("Digite o %d valor: ", i); 
		 scanf("%d", &dado[i]);
        soma += dado[i];
    }
    
      printf("Soma: %d", soma);

return 0;
}
