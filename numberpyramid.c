#include<stdio.h>
int main(){
  int n;
  printf("ENTER THE NUMBER OF THE LINES:");
  scanf("%d",&n);

  //outer loop for handle the number of rows
  for(int i=1;i<=n;i++){

    //print spaces before numbers 
    for(int j=1;j<=n-i;j++){
      printf(" ");
    }
    int a=1;

    //print numbers increasing 
    for(int k=1;k<=i;k++){
      printf("%d",a);
      a++;
    }
    int b=i-1;

    //print numbers decreasing 
    for(int l=1;l<=i-1;l++){
      printf("%d",b);
      b--;
    }

    // move to the next line after compliting an each row 
    printf("\n");
  }
  return 0;
}