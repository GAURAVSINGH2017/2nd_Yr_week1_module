// wap in c to print the left side inverted right angle triangle 
#include<stdio.h>
int main(){

  //ENTER THE SIZE OF THE INVERTED TRIANGLE                                       
  int n;
  printf("enter the no. of lines for triangle:");
  scanf("%d",&n);

  //outer loop for rows 
  for(int i=1;i<=n;i++){

    // inner loop for  PRINTING stars in each row 
    for( int j=1;j<=n+1-i;j++){
      printf("*"); //PRINTING STARS 
    }

    //move to the next line after compliting a row 
    printf("\n");
  }
return 0;
}
