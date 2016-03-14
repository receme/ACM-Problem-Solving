#include<stdio.h>
#include<math.h>

double k,PI,m,n,r,s;
char a[10];

int main(){
    
    while(scanf("%lf %lf %s",&m,&n,a)==3){
               
        r=6440+ m;
        PI=2*acos(0.0);
        if(a[0]=='m')
         n=n/60;
        if(n>180) n=360-n;
        
        n=(n*PI)/180; 
        
        s=r*n;         
        k=sqrt(2*(r)*(r)*(1-cos(n))); 
        
    
      printf("%.6lf %.6lf\n",s,k);
}

return 0;
} 
