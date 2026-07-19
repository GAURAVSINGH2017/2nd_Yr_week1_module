//wap in c to print the right tirangle star pattern 
#include<stdio.h>
int main(){
  int n;
  printf("enter the number of lines for the triangle:");
  scanf("%d",&n);

  //outer loop for number of rows 
  for(int i=1;i<=n;i++){   

    //inner loop for printing the star 
    for(int j=1;j<=i;j++){
      printf("*"); //PRINTING STARS    10
      
    }

    //move to the next line after each row complition 
    printf("\n");
  }
  return 0;
}