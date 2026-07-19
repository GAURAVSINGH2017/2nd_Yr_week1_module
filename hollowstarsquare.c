// wap in c to print the hollow square pattern of the star 
#include<stdio.h>
int main(){
  
  //enter the size of the hollow square 
  int n;
  printf("enter the number of sides of the hollow square:");
  scanf("%d",&n);

  //loop for  each row 
  for(int i=1;i<=n;i++){

    //loop for each column
    for(int j=1;j<=n;j++){

      //print stars only at borders of the square 
      if(i==1||j==1||i==n||j==n){
        printf("*");
      }

      //print spaces at middle of the square 
      else{
        printf(" ");
      }
    }
    
    //move to the next line after compliting a row 
    printf("\n");
  }
  return 0;
}