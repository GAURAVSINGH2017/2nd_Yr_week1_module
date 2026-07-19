#include<stdio.h>
int main(){
  int n;
  printf("enter the number of lines:");
  scanf("%d",&n);
  int nsp=0;
  int nst=n;
  for(int i=1;i<=n;i++){
    int a=1;
    for(int j=1;j<=nst;j++){
      printf("%d",a);
      a++;
    }
    for(int k=1;k<=nsp;k++){
      printf(" ");
      a++;
    }

    int total_stars = (i==1) ? nst-1 : nst;
    for(int l=1;l<=total_stars;l++){
      printf("%d",a);
      a++;
    }

    if(i==1){
      nsp=1;
    }
    else{
      nsp+=2;
    }
    nst--;
    printf("\n");
  }
return 0;
}