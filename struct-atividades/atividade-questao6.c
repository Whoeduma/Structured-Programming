#include<stdio.h>

struct cidadeEstado {//nna
    char cidade[10], estado[2];
};

struct endereco { //tipo de dado complexo

    char rua[10], bairro[10], cep[8];
    struct cidadeEstado  cidEst;
};

struct cadastro{

    char rg[10], cpf[15], estadoCivil[10], tel[10], nome[15], sexo;
    int idade;
    float salario[12];
    struct endereco end; //end é o nome da variavel do tipo endereco

};

int main(){
    struct cadastro cliente[3];
    int i, maiorIdade = -1;

    for(i=0; i<3; i++){

        printf("\n--------CADASTRO DE CLIENTES-------- %d\n\n\n", i);
        
        //nome
        printf("\nDigite o nome......: ");
        fflush(stdin);
        fgets(cliente[i].nome, 15, stdin);
        
        //sexo
        printf("\nDigite o sexo......:");
        fflush(stdin);
        scanf("%c", &cliente[i].sexo);

        //idade
        printf("\nDigite a idade......:");
        fflush(stdin);
        scanf("%d", &cliente[i].idade);

        // RG
        printf("\nDigite o rg......:");
        fflush(stdin);
        fgets(cliente[i].rg, 10, stdin);

        //CPF
        printf("\nDigite o cpf......:");
        fflush(stdin);
        fgets(cliente[i].cpf, 15, stdin);

        //estado civil
        printf("\nDigite o estado civil:");
        fflush(stdin);
        fgets(cliente[i].estadoCivil, 10, stdin);

        //telefone
        printf("\nDigite o telefone......:");
        fflush(stdin);
        fgets(cliente[i].tel, 10,stdin);

        //salario
        printf("\nDigite o salario......:");
        fflush(stdin);
        scanf("%f", &cliente[i].salario);

        //Estado
        printf("\nDigite o Estado......:");
        fflush(stdin);
        fgets(cliente[i].end.cidEst.estado, 2, stdin);
       
        //cidade
        printf("\nDigite a cidade......:");
        fflush(stdin);
        fgets(cliente[i].end.cidEst.cidade, 10, stdin);

        //RUA
        printf("\nDigite a rua......:");
        fflush(stdin);
        fgets(cliente[i].end.rua, 10, stdin);

        //Bairro
        printf("\nDigite o bairro......:");
        fflush(stdin);
        fgets(cliente[i].end.bairro, 10, stdin);

        //CEP
        printf("\nDigite o CEP......:");
        fflush(stdin);
        fgets(cliente[i].end.cep, 8, stdin);
    }
     
     //Encontre a pessoa com maior idade entre os cadastrados
    for (i= 0; i <3; i++){
        if(cliente[i].idade > maiorIdade){
            maiorIdade = cliente[i].idade;
        }
    }

    printf("\n----CLIENTE COM MAIOR IDADE----: %d anos\n\n\n", maiorIdade);
    
     //ate essa parte de cima o codigo rodou!!

     //Encontre as pessoas do sexo masculino
     char clientesM[3][15];
     char clientesS[3];
      
      for(i=0;i<3; i++){
        if (cliente[i].sexo == 'm' || cliente[i].sexo == 'M')
            strcpy(clientesM[i], cliente[i].nome);
      }

    printf("--------CLIENTES DO SEXO MASCULINO--------");
    
      for (i =0; i<3; i++){
        printf("%s\n", clientesM[i]);
      }





}
