#include<stdio.h>

double i,j,x1,y1,x2,y2,x3,y3,x4,y4,a1,b1,a2,b2,k1,k2,r,s;
long cas,l;
int main(){
    
    scanf("%ld",&cas);
    
    for(l=0;l<cas;l++){
     scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
     
     if(l==0)
      printf("INTERSECTING LINES OUTPUT\n");

     a1=(y1-y2); b1=x2-x1; k1=x1*(y1-y2)-y1*(x1-x2);
      
  // for line checking   
    // put (x3,y3) in 1st line
    
    r=x3*a1+y3*b1;
  // put (x4,y4) in 1st line
   
    s=x4*a1+y4*b1;  
     
    if(r==k1&&s==k1){
     printf("LINE\n");
     continue; }
   //*******************  
   a2=(y3-y4); b2=x4-x3; k2=x3*(y3-y4)-y3*(x3-x4);
   
   if(a1*b2==a2*b1){
    printf("NONE\n");
    continue; }
   
  k1=-k1; k2=-k2; 
  i=(b1*k2-b2*k1)/(a1*b2-a2*b1);
  j=(k1*a2-k2*a1)/(a1*b2-a2*b1);
  
  printf("POINT %.2lf %.2lf\n",i,j);
 
}
     
printf("END OF OUTPUT\n");

return 0;
}
