#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
#include <stdlib.h>

void *backgroundThread(void *arg){
  while(1){
    double range = 3; 
    double min = 0;
    double div = RAND_MAX / range;
    printf("backgroundThread \n");
    sleep(min + (rand() / div));
  }
}

int main() {

  char nome;
  double n1;
  double n2;
  
  pthread_t thread_id;
  pthread_create(&thread_id, NULL, &backgroundThread, NULL);
  
  printf("\nQual seu nome?\n");
  scanf("%s", &nome);

  while(1){
    printf("Oi, %s\n", &nome);
    sleep(rand() % 10);
  }  
  
  return 0;
}
