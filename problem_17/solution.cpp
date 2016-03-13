#include<stdio.h>
#include<math.h>

int main(){

float a,b,c,d,r1,r2;

int i=0;
while((scanf("%f %f %f %f",&a,&b,&c,&d))==4){
     if(a==0)break;
  i++;
  if(a==1){

     r1=((b+c)/2)*d;
     r2=(c-b)/d;
     printf("Case %d: %.3f %.3f\n",i,r1,r2);
     }

  if(a==2){
    r2=(c-b)/d;
    r1= ((c*c)-(b*b))/(2*d);
    printf("Case %d: %.3f %.3f\n",i,r1,r2);
    }

  if(a==3){
   r1= sqrt((b*b)+(2*c*d));
   r2=(r1-b)/c;
   printf("Case %d: %.3f %.3f\n",i,r1,r2);
   }

  if(a==4){
    r1=sqrt((b*b)-(2*c*d));
    r2=(b-r1)/c;
    printf("Case %d: %.3f %.3f\n",i,r1,r2);

    }


  }
  return 0;
  }