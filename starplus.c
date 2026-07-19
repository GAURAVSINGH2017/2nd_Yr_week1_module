// wap in c to print the star plus pattern 
#include<stdio.h>
int main(){
  int n;
  printf("enter the number of lines:");
  scanf("%d",&n);

  // outer loop for number of rows 
  for(int i=1;i<=n;i++){
    int a=n/2+1;//middle line for odd numbers 

    //inner loop for printing stars and spaces 
    for(int j=1;j<=n;j++){

      //print stars if row and column are equal to middle line else space
      if(j==a||i==a){
        printf("*"); // print stars 
      }
      else{
        printf(" "); // print spaces
      }
    }

    //move to the next line after each row complition 
    printf("\n");
  }
return 0;
}