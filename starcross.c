//wap in c to print the star cross pattern in c 
#include<stdio.h>
int main(){
  int n,i,j;
  printf("enter the number of lines for the star:");
  scanf("%d",&n);

  // outer loop for number of rows 
  for(i=1;i<=n;i++){

    // inner loop for printing stars and pattern 
    for(j=1;j<=n;j++){

      //print stars at the corners and if row equal to column else print spaces 
      if(i==j||i+j==n+1){
        printf("*");// print stars 
      }
      else{
        printf(" ");// print spaces 
      }
    }

    //move to the next line after each row complition 
    printf("\n");
  }
  return 0;
}