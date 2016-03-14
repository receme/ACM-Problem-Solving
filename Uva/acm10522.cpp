#include<stdio.h>
#include<math.h>

double i,j,k,m,n,p,a,b,c;

int main(){
    
    scanf("%lf",&j);
    k=0;
    while(1){
        if(k==j) break;       
        scanf("%lf %lf %lf",&m,&n,&p);       
        if(m==0||n==0||p==0){
         printf("These are invalid inputs!\n");
         k++;
         continue; }     
        a=1/m; b= 1/n; c= 1/p;        
       i=1/((a+b+c)*(-a+b+c)*(a-b+c)*(a+b-c));
       
       if(i<0){
         printf("These are invalid inputs!\n");
         k++; }
       else
         printf("%.3lf\n",sqrt(i));  
       
}

return 0;
}     
