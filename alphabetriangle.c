// wap in c to print the alphabet triangle 
#include<stdio.h>
int main(){

  //ENTER THE SIZE OF THE TRIANGLE     
  int n;
  printf("enter the number of lines:");
  scanf("%d",&n);

  // loop for lines
  for(int i=1;i<=n;i++){
    
    int a=1; //variable to store the value of the alphabet 

    // loop for printing the alphabet
    for(int j=1;j<=i;j++){
      int d=a+64;
      char ch=(char)d;
      printf("%c",ch);
      a++;
    }

    printf("\n"); // new line after each row
  }
return 0;
}