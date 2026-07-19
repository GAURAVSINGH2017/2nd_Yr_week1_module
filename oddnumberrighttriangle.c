// wap in c to print the odd number right triangle pattern
#include<stdio.h>
int main(){
  int n;
  printf("enrter the number of lines for the triangle:");
  scanf("%d",&n);
  int a=1; // variable to print the odd numbers

  // outer loop for number of lines
  for(int i=1;i<=n;i++){

    // inner loop for printing the odd numbers
    for(int j=1;j<=i;j++){
      printf("%d",a);// print the odd numbers
      a=a+2;
    }
    printf("\n"); // move to the next line after each row is printed 
  }
  return 0;
}