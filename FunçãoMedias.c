#include <stdio.h>
#include <math.h>

int main() {
  float MedArit(float N1, float N2, float N3);
  float MedPond(float N1, float N2, float N3);
  float N1,N2, N3;
  int num;
    printf("Existem 2 opções de nota - Média aritmética(opção 1) ou Média Ponderada com pesos 5,3 e 2 (opção 2)\n");
    printf("\tDigite a nota da prova 1: ");
    scanf("%f",&N1);
    printf("\tDigite a nota da prova 2: ");
    scanf(" %f",&N2);
    printf("\tDigite a nota da prova 3: ");
    scanf(" %f",&N3);
    printf("Insira a o número da opção da média a ser adotada:");
    scanf("%d",&num);
  switch(num){
    case 1:
      printf("A média escolhida foi média aritmética! Sua média é: %.2f",MedArit(N1,N2,N3));break;
    case 2:
      if(MedPond(N1,N2,N3)>=10)
      {printf("A média escolhida foi a média ponderada! Sua média é: 10");}
      else
      {printf("A média escolhida foi a média ponderada! Sua média é: %.2f",MedPond(N1,N2,N3));};break;
  }
    return 0;
}
float MedArit(float N1, float N2, float N3){
  float mediaArit=0;

 mediaArit=(N1+N2+N3)/3;

return mediaArit;
}
float MedPond(float N1, float N2, float N3){
  float mediaPond=0;

  mediaPond=(N1*5)+(N2*3)+(N3*2)/10;
 return mediaPond; 
}