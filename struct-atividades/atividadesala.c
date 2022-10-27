//crie um algoritmo que recebe os dados de um livro
//usando struct 
//nome, valor, editora, volume
 #include <stdio.h>

 struct livro {
    char nome[30], editora[30];
    float valor;
    int volume;
 };

 int main() {
    struct livro livros [3];
    int i;

    for (i=0; i<3; i++){
        printf("\n--------CADASTRO DE LIVROS--------\n\n\n");

        printf("nome do livro......:");
        fflush(stdin);
        fgets(livros[i].nome, 30, stdin);

        printf("Editora......:");
        fflush(stdin);
        fgets(livros[i].editora, 30, stdin);

        printf("Volume......:");
        scanf("%f", &livros[i].volume);

        printf("Valor......:");
        scanf("%d", &livros[i].valor);
    }

    printf("\n--------LISTA DE LIVROS--------\n\n\n");
    printf("Nome\t\tEditora\t\tVolume\t\tValor\n");

    for (i=0; i<3; i++){
         printf("%s\t\t%s\t\t\t\t%.2f\t\t%d\n", livros[i].nome, livros[i].editora, livros[i].volume, livros[i].valor);
    }
    



    return 0; 
    
 }
