#include<stdio.h>

long i,k,l,m,n,cas,h1,h2,m1,m2,h,mm,co;
char ch;

int main(){
    
    scanf("%ld",&cas);

for(l=0;l<cas;l++){

 scanf("%ld %ld%c%ld",&n,&h1,&ch,&m1);
  k=100000;
 
 for(i=0;i<n;i++){
 
  scanf("%ld%c%ld %ld",&h2,&ch,&m2,&mm);
  
  
 
  
  h=h1; m=m1;
  co=0;
  for(;;){
    if(h==h2&&m==m2)
     break;
    co++;
    m++;
    if(m==60){
     h++;
     m=0;}
   if(h==24)
    h=0;
}    
  co=co+mm;
   
  if(co<k)
   k=co;
   
}

printf("Case %ld: %ld\n",l+1,k);

}

return 0;
}     
