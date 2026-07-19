// wap in c to print the star diamond pattern 
#include<stdio.h>
int main(){
  int n;
  printf("enter the number of lines:");
  scanf("%d",&n);
  int nsp=n/2; // number of spaces
  int nst=1; // number of stars 
  int ml=n/2+1;// middle line 

  // loop for lines 
  for(int i=1;i<=n;i++){

    //loop for spaces
    for(int j=1;j<=nsp;j++){
      printf(" ");
    }

    // loop for stars            
    for(int k=1;k<=nst;k++){
      printf("*");
    }
    if(i<ml){
      nsp--;
      nst+=2;
    }
    else{
      nsp++;
      nst-=2;
    }
    printf("\n");  //new line after each row 
  }
  return 0;
}