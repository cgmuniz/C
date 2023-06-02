#include <stdio.h>
#include <math.h>

int main(void){
  while(1){
    int bin = 0, dec = 0, aux = 0, resto, i = 0;
    
    printf("Insira um número em binário:\n");
    scanf("%d", &bin);
    aux = bin;
  
    if(bin == 0){
      dec = 0;
    }
    else{
      while(aux != 0){
        resto = aux % 10;
        if(resto == 0){
          dec = dec;
        }
        else{
          dec = dec + (pow(2, i));
        }
        aux/=10;
        i++;
      }
    }
    printf("O número %d em decimal é %d\n", bin, dec);
    
  }
  
  return 0;
}
