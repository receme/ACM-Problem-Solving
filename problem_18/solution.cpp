#include<stdio.h>

int i,j,k,m,n,l,a[11000],b[11000],flag,f,c=0;

void check(){
   flag=0;
    for(i=0;i<l;i++)
     if(a[l]==a[i]||b[l]==b[i]){
      flag=1;
      break; } 
    f=0;  
    if(flag==0){
     printf("Case %d: Escaped again! More 2D grid problems!\n",c);
     f=1 ;}
     }
int main(){
    
    
    while(scanf("%d %d %d",&m,&n,&l)==3){
   if(m==0&&n==0&&l==0) break;                  
    c++;
    for(i=0;i<=l;i++)
     scanf("%d %d",&a[i],&b[i]);
     check();
     if(f==1)continue;
     k=a[l];
     a[l]=a[l]+1;
      if(!(a[l]<0||a[l]>=m))
        check();
     if(f==1)continue;
     a[l]=k;
     a[l]=a[l]-1;
     if(!(a[l]<0||a[l]>=m))
       check();
     if(f==1)continue;
     a[l]=k;
     k=b[l];
     b[l]=b[l]+1;
     if(!(b[l]<0||b[l]>=n))
      check();
     if(f==1)continue;
     b[l]=k;
     b[l]=b[l]-1;
     if(!(b[l]<0||b[l]>=n))
        check();
    
     if(f==1)continue;
    printf("Case %d: Party time! Let's find a restaurant!\n",c);   

}

return 0;
}    
