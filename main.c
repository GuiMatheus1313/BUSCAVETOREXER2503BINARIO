#include <stdio.h>
#include <stdbool.h> //Colocar valores de bool em C

int main(void) {
  int vetor_busca[] = {5,15,25,30,40,65,100,145};
  int fim = 8, chave, comeco = 0, meio;
  bool achou = false;

  printf("Digite a chave que deseja procurar: ");
  scanf("%d", &chave);

  meio = (comeco+fim)/2;

  while(achou == false && comeco <= fim)
  {
    if(vetor_busca[meio] == chave)
    {
      achou = true;
      break;
    }
    else{
      if(chave < vetor_busca[meio])
        fim = meio - 1;
      else
        comeco = meio + 1;
    }
    meio = (comeco+fim)/2;
  }
  if(achou == true)
    printf("Encontrado na posicao: %d", meio);
  else
    printf("Não foi encontrado");
  

  
  
  

  
}