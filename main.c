#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int qDestinos, i,viz[10][10],dur[10][10],num[10][10],voo,duracao,k,temer;
    char destino[10][100], origem[100],dFinal[100];

    printf("Sistema de companhia aerea - SIMPLIFICADO \n\n\n");

    printf("Digite a quantidade de destinos: ");
    scanf("%d", &qDestinos);

    printf("___________CADASTRANDO ROTAS__________\n\n");
    for(i=0;i<qDestinos;i++)
    {
        k=i+1;

        printf("Destino %i: ",k);
        fflush(stdin);
        gets(destino[i]);
    }

    printf("__________________CADASTRANDO VIAGENS_________\n\n");


    for(i=0;i<qDestinos;i++)
    {
        printf("Origem: ");
        gets(origem);

        for(i=0;i<temer;i++)
        {
            if(origem == destino[i])
            {
                voo=i;
            }
        }

        printf("Destino: ");
        gets(dFinal);

        printf("Tempo do voo <minutos>: ");
        scanf("%d", &duracao);

        printf("Numero do voo: ");
        scanf("%d", &voo);
    }

    return 0;
}
