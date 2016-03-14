#include<stdio.h>
#include<algorithm>

using namespace std;

double a[5];

int main(){
    
    while(scanf("%lf %lf %lf",&a[0],&a[1],&a[2])==3){
             if(a[0]==0&&a[1]==0&&a[2]==0)
              break;
              
           sort(a,a+3);
           
           if(a[2]*a[2]==(a[1]*a[1]+a[0]*a[0]))
            printf("right\n");
           else
            printf("wrong\n");
}

return 0;
}            
