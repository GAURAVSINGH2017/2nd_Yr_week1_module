// wap in c to print inverted left side triangle pattern
#include<stdio.h>
int main(){
  int n;
  printf("enter the number of sides of the inverted right side triangle:");
  scanf("%d",&n);

  // outer loop for rows
  for(int i=n;i>=1;i--){

    // inner loop for columns
    for(int j=1;j<=i;j++){
      printf("*");
    }
    printf("\n");
  }
  return 0;
}