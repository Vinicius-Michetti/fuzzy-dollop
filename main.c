#include <stdio.h>
#include <stdlib.h>

/*
A prefeitura de uma cidade fez uma pesquisa entre os seus habitantes, coletando dados
sobre o sal�rio familiar e quantidade de membros (pais + filhos). Escreva um procedimento que
leia esses dados para um n�mero n�o determinado de fam�lias (ler at� que sal�rio igual 0),
calcule e exiba a m�dia de sal�rio da popula��o. Fa�a um programa main que acione o
procedimento.
*/

void pesquisa (float salario, int quantidade_membros){

     float soma = 0, n = 0;

     do{
        printf("Digite o salario familiar: ");
        scanf("%f", &salario);
        printf("Digite a quantidade de membros da familia: ");
        scanf("%f", &quantidade_membros);
        soma += salario;
        n++;
     } while(salario != 0);

     printf("A media salarial eh de: %.2f", soma/(n -1));
}

int main()
{
    int n1, n2;
    pesquisa(n1, n2);
}
