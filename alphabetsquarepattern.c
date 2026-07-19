//wap in c to print alphabet rectangle 

#include<stdio.h>
int main(){
  
  //enter the  size of the rectangle
  int n,m;
  printf("enter the number of row :");
  scanf("%d",&n);
  printf("enter the number of column:");
  scanf("%d",&m);

  //outer loop fornumber of row 
  for(int i=1;i<=n;i++){
    int a=1;
    
    //inner loop for printing alphabet 
    for(int j=1;j<=n;j++){
      int d=a+64;
      char ch=(char)d;
      printf("%c",ch); // printing alphabet 
      a++;
    }
    
    //move to the next line after each row complition
    printf("\n");
  }
return 0;
}