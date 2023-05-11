/*
1. FUP que leia 10 números e verifique quantos
 destes números são negativos.
 Imprima uma mensagem na tela .
 */ 
 
 
 
 
 
 
#include <iostream>
using namespace std;
int const TAM = 5;
int i,num,qtde_neg = 0;
main()
{
  system("chcp 65001"); //para usar acentuação
  cout<<"\n\n\t\t ****  PESQUISA DE NÚMEROS    *** \n\n";
  for (i=1;i<10;i++)
  { cout<<"\n Informe o "<<i<<"º número:";
    cin>>num;
    if (num<0)//verifica se o número é ímpar
    {  qtde_neg++; //contador
    }
  }
  cout<<"\n Quantidade de números negativos informados: "<<qtde_neg;
  cout<<"\n\n\n\n\n"; 
}
