#include<stdio.h>
#include<math.h>

double area,n,i,j,spectators,officials;
int l=0;

int main(){
    
  while(scanf("%lf %lf",&n,&area)==2){
           if(n<3) break;
         
       i = (2*acos(0.0))*(area/(n*tan((2*acos(0))/n)));
       j = (2*acos(0.0))*2*area/(n*sin(2*(2* acos(0))/n));     
       spectators = j - area;
       officials = area - i;  
     l++; 
     printf("Case %d: %.5lf %.5lf\n",l,spectators,officials);
}

return 0;
}  

