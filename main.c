#include <stdio.h>
#include <string.h>
#include "header1.h"
#include "header2.h"

/* Size of the Data Set */
#define SIZE (6)

int main() {

  unsigned char test[SIZE] = { 34, 14, 8, 21, 2, 6};
  	
  printf("%d \n", print_tab(test ,SIZE));
  sum_tab(test ,SIZE);
  printf("****sum****\n");
  printf("%d \n", print_tab(test ,SIZE));
  mul_tab(test ,SIZE);
  printf("****mul****\n");
  printf("%d \n", print_tab(test ,SIZE));
  modif_tab(test ,SIZE);
  printf("****mul****\n");
  printf("%d \n", print_tab(test ,SIZE));
  
  return 0;
  
}

