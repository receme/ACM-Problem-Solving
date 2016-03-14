
#include<stdio.h>

int main(){
    
    int count,m,n,i=0;
    
    while(scanf("%d",&m)&&m){
      count=m;
      n=m;
      
      for(;;){
         i++;     
       if(n==2){
        count=count+1;
        break; }
       if(n==1)
        break; 
       if(n>=3){
      m=n/3;
      count=count+m;
      n=m+n%3;  }

}

printf("%d %d\n",count,i);

}

return 0;
}                              
