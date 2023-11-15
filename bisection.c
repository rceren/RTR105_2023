#include<stdio.h>
#include<math.h>
int main(){
 float a = 0.01, b = 1.5*M_PI, x, delta_x = 1.e-3/*0.001*/, funkca, funkcb, funkcx;
 int k = 0;

 funkca = sin(a); funkcb = sin(b);
 if(funkca*funkcb>0){
  printf("Interval [%.2f;%.2f] sin(x) for the function ",a,b);
  printf("no roots (or the number of even roots)\n ");
  return 1;}

 printf("               sin(%7.3f)=%7.3f\t\t\t\t",a,sin(a));
 printf("sin(%7.3f)=%7.3\n",b,sin(b));

 while((b-a)>delta_x){
  k++;//k=k+1;//k+=1;
  x = (a+b)/2.;
  if(funkca*sin(x)>0)// at a=0 -> funkca=0 -> multiplicationis exacly 0
                     //all the time -> all the time "working" b=x

   a = x;
  else
   b = x;
  printf("%2d. iteration: sin(%7.3f)=%7.3f\t",k,a,sin(a));
  printf("sin(%7.3f)=%7.3f\t",x,sin(x));
  printf("sin(%7.3f)=%7.3f\n",b,sin(b));}

 printf("The connection is at x=%.3f, because sin(x) has got %.3f\n",x,sin(x));

 return 0;}

