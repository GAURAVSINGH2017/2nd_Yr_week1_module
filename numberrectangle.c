//wap in c to print number rectangle in c 
#include<stdio.h>
int main(){
  
  //enter the  size of the rectangle
  int n,m;
  printf("enter the number of row :");
  scanf("%d",&n);
  printf("enter the number of column:");
  scanf("%d",&m);

  //outer loop fornumber of row 
  for(int i=1;i<=m;i++){
    
    //inner loop for printing  numbers 
    for(int j=1;j<=n;j++){
      printf("%d",j); // printing numbers
    }
    
    //move to the next line after each row complition
    printf("\n");
  }
return 0;
}