#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main (){
float raiz,x=4,F,g,y;
do
{
F=pow(x,3)-10*x+1;
g=3*pow(x,2)-10;
y=(float)F/g;
x+=-y;
printf("%f\n",y);
}
while(abs(y)>=0.0000005);
printf("la raiz x = %f\n",x);

return 0;
}

