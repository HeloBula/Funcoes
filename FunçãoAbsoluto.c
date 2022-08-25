#include <stdio.h>
#define p 4
int valorabsoluto(int N){
  N*=-1;
  return N;
}

int main() {
  int N[p],abs[p];
  for(int i=0;i<p;i++)
    {printf("Digite um número inteiro: ");
     scanf("%d",&N[i]);
    if(N[i]<0)
     { abs[i]= valorabsoluto(N[i]);
     }
    else
      abs[i]=N[i];
    }
 for(int i=0;i<p;i++)
   {printf("O número absoluto de %d é: %d\n",N[i],abs[i]);
   }
  
    return 0;
}
  