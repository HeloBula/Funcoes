#include <stdio.h>
#include <math.h>
int main() {
    int N[4];
    int SomaDivisores(int n); 
  for(int i=0;i<4;i++)
  {
    printf("Digite um número: ");
    scanf("%d",&N[i]);
    if(N[i]>=0)
    {
      printf("O número informado é positivo\n");
    }
    else
    {
      printf("O número informado é negativo\n");
    }
    printf("A soma dos divisores desse número é:%d\n",SomaDivisores(N[i]));
  }
  
  
    return 0;
}
int SomaDivisores(int n){
  int soma=0;
  for(int i=1;i<n;i++)
    {
     if((n%i)==0)
     {soma=soma+i;
     }
    }
   return soma;
  } 