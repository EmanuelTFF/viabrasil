/*
1. FUP que leia 10 n�meros e verifique quantos
 destes n�meros s�o negativos.
 Imprima uma mensagem na tela .
 */ 
 
 
 
 
 
 
#include <iostream>
using namespace std;
int const TAM = 5;
int i,num,qtde_neg = 0;
main()
{
  system("chcp 65001"); //para usar acentua��o
  cout<<"\n\n\t\t ****  PESQUISA DE N�MEROS    *** \n\n";
  for (i=1;i<10;i++)
  { cout<<"\n Informe o "<<i<<"� n�mero:";
    cin>>num;
    if (num<0)//verifica se o n�mero � �mpar
    {  qtde_neg++; //contador
    }
  }
  cout<<"\n Quantidade de n�meros negativos informados: "<<qtde_neg;
  cout<<"\n\n\n\n\n"; 
}
