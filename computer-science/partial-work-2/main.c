#include <stdio.h>
#include <ctype.h>
#include <string.h>

//Disciplina: algortimo e técnicas de programacao
//nomes: Pablo Henrique e Natalia Campos
//1 Periodo Aula de quinta-feira







struct aluno{                   // guardando informacoes dos alunos
    char nome[50];
    float nota1, nota2;
    float media;
};


int main(){


    struct aluno a1; // puxando a variavel do aluno

    char response;
    int count, nums, aprovado = 0, reprovado = 0, recuperacao = 0; // adicionando valores para iniciar a váriavel e não ficar com números aleatorios dentro do programa

    do{

        aprovado = 0;  // reiniciando os valores caso o usuário reinicie o programa
        reprovado = 0;
        recuperacao = 0;



        printf("=============================================\n");
        printf("       BOAS VINDAS!\n");
        printf(" registro e controle de alunos\n");
        printf("=============================================\n");
        printf(" Quantos alunos deseja adicionar? ");
        scanf("%d", &nums);

        for(count = 0; count < nums; count++){  // contador utilizando o número que o usuário digita
            printf("=============================================\n");
            printf("Nome do aluno: ");
            scanf("%s", &a1.nome);
            printf("=============================================\n");
            printf("            NOTAS\n");
            printf("=============================================\n");
            printf("1 - : ");
            scanf("%f", &a1.nota1);
            printf("---------------------------------------------\n");
            printf("2 - : ");
            scanf("%f", &a1.nota2);

            a1.media = (a1.nota1 + a1.nota2) / 2; // calculando média

            printf("=============================================\n");
            printf("          SITUAÇÃO\n");
            printf("=============================================\n");

            printf("         ALUNO: %s\n", a1.nome);
            printf("NOTA - 1: %.2f\n", a1.nota1);
            printf("NOTA - 2: %.2f\n", a1.nota2);
            printf("MÉDIA: %.2f\n", a1.media);

            // condicionais para saber a situacao do aluno

            if(a1.media < 40){
                printf("REPROVADO\n");
                reprovado++;
            }
            else if(a1.media > 40 && a1.media <= 59){
                printf("RECUPERAÇÃO\n");
                recuperacao++;
            }
            else if(a1.media >=60){
                printf("APROVADO\n");
                aprovado++;
            }

            // relatorio final

        }

        printf("=================================================\n");
        printf("         RELATÓRIO FINAL\n");
        printf("=================================================\n");

        printf("QUANTIDADE DE ALUNOS: %d\n", nums);
        printf("-------------------------------------------------\n");
        printf("APROVADOS - %d\n", aprovado);
        printf("-------------------------------------------------\n");
        printf("REPROVADOS - %d\n", reprovado);
        printf("-------------------------------------------------\n");
        printf("RECUPERAÇÃO - %d\n", recuperacao);


        //loop de acordo com a solicitacao do usuário

        printf("deseja executar novamente? (S//N): ");
        scanf(" %c", &response);

    } while(response == 'S' || response == 's');

    return 0;

}
