//wap in c to print the even number right triangle pattern 
#include<stdio.h>
int main(){
  int n;
  printf("enter the number of lines:");
  scanf("%d",&n);

  //outer loop for number of lines
  for(int i=2;i<=2*n;i=i+2){

    //inner loop for printing the even numbers
    for(int j=2;j<=i;j=j+2){
      printf("%d",j); //print even numbers 
    }
    printf("\n"); // move to the next line after each line complition 
  }
return 0;
}