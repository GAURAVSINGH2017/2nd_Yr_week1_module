// wap in c to print the right side  star triangle  
#include<stdio.h>
int main(){
  int n;
  printf("enter the number of lines:");
  scanf("%d",&n);
  int nsp=0; //set number of spaces to zero 
  int nst=n; // set number of stars to number of lines 

  //outer loop to handle the number of rows 
  for(int i=1;i<=n;i++){

    // inner loop 1: for leading spaces 
    for(int j=1;j<=nsp;j++){
      printf(" ");
    }

    // inner loop 2: print stars 
    for(int k=1;k<=nst;k++){
      printf("*");
    }
    nsp++; // number of spaces spaces increases in each row 
    nst--; // number of stars decreasing in each row 
    printf("\n"); // move to the next line after each row complition 
  }
  return 0;
}