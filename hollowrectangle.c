// wap in c to print the hollow rectangle star pattern 
#include<stdio.h>
int main(){
  int m,n,i,j;

  //enter the size of the rectangle 
  printf("enter the number of row of the rectangle:");
  scanf("%d",&m);
  printf("enter the number of column  of the rectangle:");
  scanf("%d",&n);
  
  // outer loop for the rows
  for(i=1;i<=n;i++){
    int a=1;

    // inner loop for the columns
    for(j=1;j<=m;j++){
      if(i==1||j==1||i==n||j==m){
      printf("*"); // print the star 
      }
      else{
        printf(" "); // print the spaces 
      }
    }
    printf("\n"); // move to the next line after each row is printed 
  }
return 0;
}