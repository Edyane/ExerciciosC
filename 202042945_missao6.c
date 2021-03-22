#include <stdio.h>
#include <stdlib.h>

int numero, a, b, c;
float peso, altura, IMC;


int main(int argc, char *argv[])
{
    printf("Menu de opcoes\n\n");
    printf("1 - Informacoes\n");
    printf("2 - Calcule o seu IMC\n");
    printf("3 - Par ou Impar\n");
    printf("4 - Multiplicacao\n");
    printf("5 - Divisao\n");
    printf("6 - Sair do Menu\n");
    printf("\nEscolha a opção desejada:\n");
    scanf("%d", &numero);
    switch(numero)
    {
        case 1:
            system("cls");
            printf("Ola, me chamo Edyane, estou no primeiro semestre de engenharia, minha matricula e 202042945\n");
            break;

        case 2:
            system("cls");
            printf("Vamos calcular seu IMC:\n");
            printf("Digite sua altura:\n");
            scanf("%f", &altura);

            printf("Digite seu peso:");
            scanf("%f", &peso);

            printf("IMC=%2f\n", peso/(altura*altura));

            IMC=peso/(altura*altura);
            break;

        case 3:
            system("cls");
            printf("Numero par ou impar, digite um numero:\n");
            scanf("%d", &numero);
            if(numero%2 == 0){
                printf("O numero e par!\n");
            }else{
                printf("O numero e impar!\n");
            }
            break;

        case 4:
            system("cls");
            printf("Vamos realizar uma multiplicacao, digite um numero:\n");
            scanf("%d", &a);
            printf("Digite outro numero:\n");
            scanf("%d", &b);
            c=a*b;
            printf("O resultado e %.2d\n", c);
            break;

        case 5:
            system("cls");
            printf("Vamos realizar uma divisao, digite um numero:\n");
            scanf("%d", &a);
            printf("Digite outro numero:\n");
            scanf("%d", &b);
            c=a/b;
            printf("O resultado e %.2d\n", c);
            break;

        case 6:
            system("cls");
            printf("Até mais!:\n");
            break;
    }
    system("pause");
    return 0;
}
