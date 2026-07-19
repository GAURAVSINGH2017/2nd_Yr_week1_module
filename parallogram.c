// wap in c to print the star parallelogram pattern in c 
#include<stdio.h>
int main(){
  int n;
  printf("enter the number of lines:");
  scanf("%d",&n);

  // outer loop for number of rows 
  for(int i=1;i<=n;i++){

    //inner loop 1: for leading spaces
    for(int j=1;j<=n-i;j++){
      printf(" ");
    }

    //inner loop 2: for printing stars 
    for(int k=1;k<=n;k++){
      printf("*");
    }

    //move to the next line after each row complition 
    printf("\n");
  }
  return 0;
}