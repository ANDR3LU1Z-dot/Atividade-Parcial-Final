#include<stdio.h>
#include<stdlib.h>

//Crie um algoritmo que simule um estacionamento
//com 20 espaços. Faça uma forma de simular uma ocupação de uma vaga e faça o
//liberar vaga.






int main()
{
    int vagas[20];

    int i, op, valor, ocupar, liberar, escolha;

	for(i=0;i<20;i++)
    {
        vagas[i] = 0;
    }

        printf("\n----------------------------------------------------------\n");
    	printf("Bem vindo(a) ao Estacionamento Fametro!");
        printf("\n----------------------------------------------------------\n");


    do{
        printf("\nDigite [1] para ocupar una vaga disponivel: ");
        printf("\nDigite [2] para liberar uma vaga: ");
        printf("\nDigite [3] para sair: \n");
        scanf("%d", &valor);


         switch(valor){
            case 1:
            printf("Em qual posicao deseja ocupar a vagas?");

            printf("\n----------------------------------------------------------");
            for(i=1;i<=20;i++)
            {

                printf("\n Posicao %d - Vaga %d", i, vagas[i]);
            }

            printf("\n");
            printf("\n");
            printf("LEGENDA: ");
            printf("\nStatus 0: VAGA LIVRE");
            printf("\nStatus 1: VAGA OCUPADA");


            printf("\n");
            printf("Digite o numero da vaga que deseja ocupar: ");
            scanf("%d", &ocupar);

            if(vagas[ocupar]==1)
            {
                printf("\nEsta vaga nao esta disponivel!");
            }
            else
            {
                vagas[ocupar] = 1;
                printf("\nVaga preenchida com sucesso!\n");

            }
                break;
            case 2:

            printf("Em qual posicao deseja liberar a vaga?");

            printf("\n----------------------------------------------------------");

            for(i=1;i<=20;i++)
            {

                printf("\n Posicao %d - Vaga %d", i, vagas[i]);
            }

            printf("\n----------------------------------------------------------");
            printf("\nVALOR 0: VAGA DISPONIVEL");
            printf("\nVALOR 1: VAGA OCUPADA");


            printf("\nDigite um valor: ");
            scanf("%d", &liberar);

            if(vagas[liberar] == 0){
                printf("\nEsta vaga ja esta livre.");
            } else{
                vagas[liberar] = 0;
                printf("\nVaga foi liberada com sucesso!");
            }

                break;

            case 3:
                printf("\nAgradecemos pela sua presenca, volte sempre");
                op = 2;
                break;

            default:
                printf("\nDigite um valor valido!");
         }




        printf("\n------------------------------");
        printf("\nDeseja Continuar?\n");
        printf("1- SIM OU 2-NAO\n");
        printf("\n------------------------------");
        scanf("%d", &op);

    }while(op == 1);


    return(0);
}
