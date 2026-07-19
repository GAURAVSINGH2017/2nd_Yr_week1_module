//wap in c to print the star square pattern 
#include<stdio.h>
int main(){
  int n;
  printf("enter the side of the square:");
  scanf("%d",&n);

  //outer loop for number of rows 
  for(int i=0;i<n;i++){

    //inner loop for printing stars 
    for(int j=0;j<n;j++){
      printf("*"); //printing stars
    }
                                                               
    //move to the next line after each row complition 
    printf("\n");
  }
  return 0;
}    