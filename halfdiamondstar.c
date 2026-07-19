// WAP IN C TO PRINT HALF DIAMOND STAR PATTERN 
#include<stdio.h>
int main(){
  int n; 
  printf("enter the number of lines of the half diamond star pattern:");
  scanf("%d",&n);                                        5
  // upper half of the half diamond pattern 
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      printf("*");
    }
    printf("\n");
  }
  // outer loop for the lower half of the half diamond pattern  
  for(int i=n-1;i>=1;i--){

    // inner loop for printing the stars in the lower half of the half diamond pattern 
    for(int j=1;j<=i;j++){
      printf("*");// print the stars 
    }
    printf("\n"); // move to the next line after each row is printed 
  }
  return 0;
}