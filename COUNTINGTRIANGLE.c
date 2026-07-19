// wap in c to print the alphabet triangle 
#include<stdio.h>
int main(){

  //ENTER THE SIZE OF THE TRIANGLE     
  int n;
  printf("enter the number of lines:");
  scanf("%d",&n);
  int a=1;

  // loop for lines
  for(int i=1;i<=n;i++){
    

    // loop for printing the alphabet
    for(int j=1;j<=i;j++){
      printf("%d",a);
      a++;
    }

    printf("\n"); // new line after each row
  }
return 0;
}