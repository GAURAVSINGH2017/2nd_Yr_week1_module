// wap in c to print the invereted star pyramid 
#include<stdio.h>
int main(){
  int n;
  printf("enter the number of lines:");
  scanf("%d",&n);

  // outer loop to handle the number of rows 
  for(int i=n;i>=1;i--){

    // inner loop 1: print leading spaces 
    for(int j=0;j<=n-i;j++){
      printf(" ");
    }

    // inner loop 2: print stars 
    for(int k=1;k<=2*i-1;k++){
      printf("*");
    }

    // move to the next line after compliting  each row 
    printf("\n");
  }
  return 0;
}