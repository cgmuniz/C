#include <stdio.h>

int calculaBissex(int anoIn){
  if(anoIn%4 == 0){
    if(anoIn%100 == 0){
      if(anoIn%400 == 0){
        return 1;
      }
      else {
        return 0;
      }
    }
    else{
      return 1;
    }
  }
  else{
    return 0;
  }
}

int main(void) {
  int contaDiasPassados = 0;
  int diaIn, mesIn, anoIn, diasAno, bissex = 0;
  int freqEsporte = 2, freqLiteratura = 3, freqFotografia = 4, freqXadrez = 5, freqCanto = 6;
  
  printf("Entre com a data de início do ano letivo:\n\nEntre com o dia: ");
  scanf("%d", &diaIn);

  printf("Entre com o mês: ");
  scanf("%d", &mesIn);

  printf("Entre com o ano: ");
  scanf("%d", &anoIn);

  bissex = calculaBissex(anoIn);

  if(bissex == 1){
    diasAno = 366;
  }
  else{
    diasAno = 365;
  }

  if(diaIn <= 0 || mesIn <= 0 || anoIn <= 0){
    printf("Dados incorretos");
    return 0;
  }
  else if(mesIn > 12){
    printf("Dados incorretos");
    return 0;
  }
  else if(((mesIn % 2 != 0 && mesIn < 8) || (mesIn % 2 == 0 && mesIn >= 8)) && diaIn > 31){
    printf("Dados incorretos");
    return 0;
  }
  else if(((mesIn % 2 == 0 && mesIn < 8) || (mesIn % 2 != 0 && mesIn >= 8)) && diaIn > 30){
    printf("Dados incorretos");
    return 0;
  }
  else if(mesIn == 2 && diaIn > 29){
    printf("Dados incorretos");
    return 0;
  }
  else if(mesIn == 2 && diaIn == 29 && bissex == 0){
    printf("Dados incorretos");
    return 0;
  }

  int i = mesIn;
  int j = diaIn;
  int cont = 0;
  
  printf("\nPróximos dias de encontro de todos os clubes:\n\n");

  while(i < 13){
    if(cont !=0){
      j = 1;
    }
    if(i == 2){
      if(bissex == 0){
        while(j < 29){
          if(contaDiasPassados != 0 && contaDiasPassados % freqEsporte == 0 && contaDiasPassados % freqLiteratura == 0 && contaDiasPassados % freqFotografia == 0 && contaDiasPassados % freqXadrez == 0 && contaDiasPassados % freqCanto == 0){
            printf("%d/%d/%d\n", j, i, anoIn);
          }
          if(j == 28){
            i++;
            cont = 1;
          }
          contaDiasPassados++;
          j++;
        }
      }
      else{
        while(j < 30){
          if(contaDiasPassados != 0 && contaDiasPassados % freqEsporte == 0 && contaDiasPassados % freqLiteratura == 0 && contaDiasPassados % freqFotografia == 0 && contaDiasPassados % freqXadrez == 0 && contaDiasPassados % freqCanto == 0){
            printf("%d/%d/%d\n", j, i, anoIn);
          }
          if(j == 29){
            i++;
            cont = 1;
          }
          contaDiasPassados++;
          j++;
        }
      }
    }
    else if((i % 2 != 0 && i < 8) || (i % 2 == 0 && i >= 8)) {
      while(j < 32){
        if(contaDiasPassados != 0 && contaDiasPassados % freqEsporte == 0 && contaDiasPassados % freqLiteratura == 0 && contaDiasPassados % freqFotografia == 0 && contaDiasPassados % freqXadrez == 0 && contaDiasPassados % freqCanto == 0){
          printf("%d/%d/%d\n", j, i, anoIn);
        }
        if(j == 31){
          i++;
          cont = 1;
        }
        contaDiasPassados++;
        j++;
      }
    }
    else if((i % 2 == 0 && i < 8) || (i % 2 != 0 && i >= 8)) {
      while(j < 31){
        if(contaDiasPassados != 0 && contaDiasPassados % freqEsporte == 0 && contaDiasPassados % freqLiteratura == 0 && contaDiasPassados % freqFotografia == 0 && contaDiasPassados % freqXadrez == 0 && contaDiasPassados % freqCanto == 0){
          printf("%d/%d/%d\n", j, i, anoIn);
        }
        if(j == 30){
          i++;
          cont = 1;
        }
        contaDiasPassados++;
        j++;
      }
    }
  }
  
  return 0;
}
