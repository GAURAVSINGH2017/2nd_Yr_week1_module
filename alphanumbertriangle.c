// wap in c to print the alphanumber triangle pattern 
#include<stdio.h>
int main(){
  int n;
  printf("enter the number of lines:");
  scanf("%d",&n);

  // outer loop for number of lines
  for(int i=1;i<=n;i++){
    int a=1; //variable to print the numbers and alphabets

    // inner loop for printing the numbers and alphabets
    for(int j=1;j<=i;j++){
      int d=a+64;
      char ch=(char)d;
      if(i%2!=0){
        printf("%d",a); // print the numbers for odd lines 
      }
      else{
        printf("%c",ch); // print the alphabets for even lines 
      }
      a++;
    }
    printf("\n"); // move to the next line after each row is printed 
  }
return 0;
}