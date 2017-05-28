#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int qDestinos, i,viz[10][10],dur[10][10],num[10][10],voo,duracao,k, j,dVoo;
    char destino[10][100], origem[100],dFinal[100];

    // A vari‡vel K somente Ž utilizada para acrescentar representativamente +1 no cadastramento de rota

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
        fflush(stdin);
        gets(origem);

        for(i=0;i<qDestinos;i++)
        {
            if(origem == destino[i])
            {
                voo=i;
            }
        }

        printf("Destino: ");
        fflush(stdin);
        gets(dFinal);

        for(j=0;j<qDestinos;j++)
        {
            if(dFinal == destino[1])
            {
                dVoo = j;
            }
        }

        for(i=0;i<qDestinos;i++)

        printf("Tempo do voo <minutos>: ");
        scanf("%d", &duracao);

        printf("Numero do voo: ");
        scanf("%d", &voo);
    }

    return 0;
}
