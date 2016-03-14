#include<stdio.h>
#include<math.h>
#include<string.h>
double area(double x1,double y1,double x2,double y2,double x3,double y3);
long i,j,l,flag,t[100];
double a[20],b[20],c[20],d[20],e[20],f[20],x,y,s,ar,sum;
char ch[2],sr[100],sp[100];
int main(){

      i=0;
  while(1){
      scanf("%s",ch);
      if(ch[0]=='*')
       break;
      if(ch[0]=='r'){
       scanf("%lf %lf %lf %lf",&a[i],&b[i],&c[i],&d[i]);
       t[i]=0;}
      else if(ch[0]=='c'){
       scanf("%lf %lf %lf",&a[i],&b[i],&c[i]);
        t[i]=1; }
      else if(ch[0]=='t'){
        scanf("%lf %lf %lf %lf %lf %lf",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
        t[i]=2; }
       i++;

 }

 l=1;
 while(scanf("%lf %lf",&x,&y)==2){

      if(x==9999.9&&y==9999.9)
        break;
     flag=0;
     for(j=0;j<i;j++){

       if(t[j]==1){
           s=sqrt((x-a[j])*(x-a[j])+(y-b[j])*(y-b[j]));
         if(s<c[j]){
          printf("Point %ld is contained in figure %ld\n",l,j+1);
          flag=1;}
       }
       else if(t[j]==0){
       if(x>a[j]&&x<c[j]&&y<b[j]&&y>d[j]){
         printf("Point %ld is contained in figure %ld\n",l,j+1);
         flag=1;
         }
       }
       else if(t[j]==2){
         ar=area(x,y,a[j],b[j],c[j],d[j]);
         sum=ar;
         ar=area(x,y,c[j],d[j],e[j],f[j]);
         sum=sum+ar;
         ar=area(x,y,a[j],b[j],e[j],f[j]);
         sum=sum+ar;
         ar=area(c[j],d[j],a[j],b[j],e[j],f[j]);
         sprintf(sr,"%lf",sum);
         sprintf(sp,"%lf",ar);
         if(strcmp(sr,sp)==0){

         printf("Point %ld is contained in figure %ld\n",l,j+1);
         flag=1;}
       }
     }
     if(flag==0)
      printf("Point %ld is not contained in any figure\n",l);



l++;

 }

return 0;
}


double area(double x1,double y1,double x2,double y2,double x3,double y3){

   double arr;
    arr=x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2);
    arr=arr*.5;
    if(arr<0)
     arr=-arr;
     return arr;
}
