#include<stdio.h>
 int main (){
 int n,m,i;
 printf("ingresar la cantida de terminos del cake number");
 scanf("%d",&n);
   for(i=1;i<=n;i++){
     m=3*i*i-8*i+6;
     printf("%d\t",m);
  }
 return 0;
 }
