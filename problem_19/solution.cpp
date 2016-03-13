#include<stdio.h>
long a,b,c,d,L,k,i,co;

int main(){
    
    while(scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&L)==5){
                    
                    if(a==0&&b==0&&c==0&&d==0&&L==0)
                     break;
           
                    

           co=0;
           
           for(i=0;i<=L;i++){
            k=a*i*i+b*i+c;
            
           if(k%d==0)
            co++;
            }
            printf("%ld\n",co);
}

return 0;
}