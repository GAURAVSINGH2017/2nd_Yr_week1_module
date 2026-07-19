// wap in c to print the left side right triangle star pattern 
#include<stdio.h>
int main(){
  int n,i,j,k;
  printf("enter the number of lines of the triangle:");
  scanf("%d",&n);
  
  //outer loop for handle the rows 
  for(i=1;i<=n;i++){

    // inner loop 1: print leading spaces 
    for(int j=1;j<=n-i;j++){
      printf(" ");
    }

    // inner loop 2: print stars 
    for(k=1;k<=i;k++){
      printf("*");
    }

    // move to the next line after compliting an each row 
    printf("\n");
  }
  return 0;
}