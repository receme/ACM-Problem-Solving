#include<stdio.h>
#include<math.h>

int main(){
    float a[10000],b[10000],gx,gy,dx,dy,dg,dd;
    long i,n,flag;
    
    while(scanf("%d %f %f %f %f",&n,&gx,&gy,&dx,&dy)==5){
              
       for(i=0;i<n;i++)
        scanf("%f %f",&a[i],&b[i]);
        flag=0;
     for(i=0;i<n;i++){
       dg=((a[i]-gx)*(a[i]-gx))+((b[i]-gy)*(b[i]-gy));
       dg=pow(dg,.5); 
       dd=((a[i]-dx)*(a[i]-dx))+((b[i]-dy)*(b[i]-dy));
       dd=pow(dd,.5);
       dd=dd/2;
       if(dg<=dd){
        printf("The gopher can escape through the hole at (%.3f,%.3f).\n",a[i],b[i]);         
        flag=1;
        break; }
       }
      if(flag==0)
       printf("The gopher cannot escape.\n");
      
         
       
       }
       
       return 0;
       }                                        
