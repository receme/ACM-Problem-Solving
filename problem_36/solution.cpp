#include<stdio.h>

int main(){
long a,b;

while((scanf("%ld%ld",&a,&b))==2){
  if(a>b)
   a=a-b;
  else
   a=b-a;
  
 printf("%ld\n",a);


}

return 0;
}
