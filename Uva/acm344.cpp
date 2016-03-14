#include<stdio.h>

int main(){
    int one,five,ten,fifty,hundred;
    int i,j,k,n,l;
    
    
    
    while(scanf("%d",&n)==1){
     if(n==0) break;
     one=five=ten=fifty=hundred=0;
     for(i=1;i<=n;i++){
       if(i==100){
        hundred++;
        continue; }
       j=i%10;
       k=i/10;
       
       if(j<4){
         for(l=0;l<j;l++)
          one++; }
       else if(j==4){
            one++; five++;} 
       else if(j==5)
            five++;
       else if(j==9){
            one++; ten++; }
       else if(j>=6&&j<=8){
             j=j-5;
            five++;
            for(l=0;l<j;l++)
             one++; }
             
       if(k<4){
       for(l=0;l<k;l++)
        ten++; }
       else if(k==4){
         ten++; fifty++; }
       else if(k==5)
          fifty++;
       else if(k==9){
           ten++; hundred++; }   
       else if(k>=6&k<=8){
            k=k-5;
            fifty++;
            for(l=0;l<k;l++)
             ten++; }
            
}

printf("%d: %d i, %d v, %d x, %d l, %d c\n",n,one,five,ten,fifty,hundred);

}


return 0;
}
                    
       
                
           
