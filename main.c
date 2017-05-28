#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int qDestinos, i,viz[10][10],dur[10][10],num[10][10],voo,duracao,k, j,dVoo = 0,oVoo,continuar;
    char destino[10][100], origem[100],dFinal[100];
    bool loop;

    // A variável K somente é utilizada para acrescentar representativamente +1 no cadastramento de rota

    printf("Sistema de companhia aerea - SIMPLIFICADO \n\n\n");

    printf("Digite a quantidade de destinos: ");
    scanf("%d", &qDestinos);
    fflush(stdin);

    printf("___________CADASTRANDO ROTAS__________\n\n");
    for(i=0;i<qDestinos;i++)
    {
        k=i+1;
        printf("Destino %d: ",k);
        gets(destino[i]);
        fflush(stdin);
    }

    printf("__________________CADASTRANDO VIAGENS_________\n\n");
        do
        {
        printf("Origem: ");
        gets(origem);
        fflush(stdin);

        for(i=0;i<qDestinos;i++)
        {
            if(origem == destino[i])
            {
                oVoo=i;
            }
        }

        printf("Destino: ");
        gets(dFinal);
        fflush(stdin);

        for(j=0;j<qDestinos;j++)
        {
            if(dFinal == destino[1])
            {
                dVoo = j;
            }
        }
        viz[oVoo][dVoo] = 1;

        printf("Tempo do voo <minutos>: ");
        scanf("%d", &duracao);
        fflush(stdin);

        dur[voo][dVoo] = duracao;

        printf("Numero do voo: ");
        scanf("%d", &voo);
        fflush(stdin);
        num[voo][dVoo] = oVoo;

        printf("Digite 1 para continuar a cadastrar voos ou qualquer coisa para parar:");
        scanf("%i",&continuar);
        fflush(stdin);
        switch (continuar)
        {
            case 1:
                loop = true;
            break;
            default:
                loop = false;
            break;
        }

        } while (loop == true);

    return 0;
}
