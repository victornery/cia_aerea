#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int qnt_rotas;
    char rota[100][100];
    int i;
    int tempo[100][100];
    int numero[100][100];


    printf("Digite o numero de rotas: ");
    scanf("%d", &qnt_rotas);

    printf("___________CADASTRANDO ROTAS__________\n\n");

    for(i=0;i<qnt_rotas;i++)
    {
        printf("Rota: ");
        gets(rota[i]);
        fflush(stdin);
    }


    printf("__________________CADASTRANDO VIAGENS_________\n\n");

    for(i=0;i<qnt_rotas;i++)
    {
        printf("Origem: ");
        gets(rota[i]);

        printf("Destino: ");
        gets(rota[i]);

        printf("Tempo do voo <minutos>: ");
        scanf("%d", &tempo[i][0]);

        printf("Numero do voo: ");
        scanf("%d", &numero[i][100]);

        printf("__________PRESSIONE <N> PARA CONTINUAR CADASTRO\n\n");
        printf("__________PRESSIONE <ENTER> PARA ENCERRAR CADASTRO\n\n");
    }





    return 0;
}
