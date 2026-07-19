// wap in c to print star pyramid
#include<stdio.h>
int main(){
  int n;
  printf("enter the number of lines:");
  scanf("%d",&n);
  int nsp=n-1; // for number of spaces
  int nst=1; // for number of stars

  // loop for number of lines
  for(int i=1;i<=n;i++){
    
    //loop for printing spaces
    for(int j=1;j<=nsp;j++){
      printf(" "); //print space
    }                                10
    
    //loop for printing stars
    for(int k=1;k<=nst;k++){
      printf("*"); // print stars 
    }

    // move to the next line after each row complition 
    printf("\n");
    nsp--;
    nst+=2;
  }
  return 0;
}