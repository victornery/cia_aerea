#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int destinos, i;

    printf("Sistema de companhia aerea - SIMPLIFICADO \n\n\n")

    printf("Digite a quantidade de destinos: ");
    scanf("%d", &destinos);

    char rota[destinos][100];

    printf("___________CADASTRANDO ROTAS__________\n\n");

    for(i=0;i<destinos;i++)
    {
        printf("Destino %i: ",i);
        fflush(stdin);
        gets(rota[i][0]);
    }

    char cadastro[];
    int duracao [destinos][5];
    int n

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
    }

    return 0;
}
