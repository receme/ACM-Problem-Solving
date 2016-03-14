#include<stdio.h>
#include<string.h>
using namespace std;

int i,j,k,l,m,n,s,r,p,flag;
char a[1000][1000],b[1000],d[1000];

int main()
{

scanf("%d",&m);


 for(i=0;i<m;i++)
  scanf("%s",a[i]);

 while(scanf("%s",b)==1)
 {

   if(strcmp(b,"0")==0)
    break;

   n=strlen(b);
   flag=0;

   for(k=0;k<m;k++)
    for(l=0;l<m;l++)
     if(a[k][l]==b[0])
     {

     ///////////////////****************
      if(l+n-1<=m-1)
      {
       p=0;
       memset(d,0,100);
       s=k;
       for(r=l;r<l+n;r++)
       {
        d[p]=a[s][r];
        p++;
       }
       r--;


      if(strcmp(b,d)==0){
       printf("%d,%d %d,%d\n",k+1,l+1,s+1,r+1);
       flag=1;}
      }
    //////////////////////////////////
      if(k+n-1<=m&&l+n-1<=m)
      {
       p=0;
       memset(d,0,100);
       s=k;
       for(r=l;r<l+n;r++)
       {
        d[p]=a[s][r];
        s++;
        p++;
       }
       r--;
       s--;


      if(strcmp(b,d)==0){
       printf("%d,%d %d,%d\n",k+1,l+1,s+1,r+1);
       flag=1; }

      }

   ////////////////////////////////

    if(k+n-1<=m-1)
    {
       p=0;
       memset(d,0,100);
       r=l;
       for(s=k;s<k+n;s++)
       {
        d[p]=a[s][r];
        p++;
       }
       s--;


      if(strcmp(b,d)==0){
       printf("%d,%d %d,%d\n",k+1,l+1,s+1,r+1);
       flag=1;}

    }
   ////////////////////////////////////


      if(k+n-1<=m-1&&l-n+1>=0)
      {
       p=0;
       memset(d,0,100);
       r=l;
       for(s=k;s<k+n;s++)
       {
        d[p]=a[s][r];
        r--;
        p++;
       }
       s--;
       r++;

      if(strcmp(b,d)==0){
       printf("%d,%d %d,%d\n",k+1,l+1,s+1,r+1);
       flag=1;}

      }
      ////////////////////////////

      if(l-n+1>=0)
      {
       p=0;
       memset(d,0,100);
       s=k;
       for(r=l;r>l-n;r--)
       {
        d[p]=a[s][r];
        p++;
       }
       r++;


      if(strcmp(b,d)==0){
       printf("%d,%d %d,%d\n",k+1,l+1,s+1,r+1);
       flag=1; }

      }

      ///////////////////////////////
      if(k-n+1>=0&&l-n+1>=0)
      {
       p=0;
       memset(d,0,100);
       s=k;
       for(r=l;r>l-n;r--)
       {
        d[p]=a[s][r];
        s--;
        p++;
       }
       r++;
       s++;


      if(strcmp(b,d)==0){
       printf("%d,%d %d,%d\n",k+1,l+1,s+1,r+1);
       flag=1;}

      }
    //////////////////////////////////
     if(k-n+1>=0)
      {
       p=0;
       memset(d,0,100);
       r=l;
       for(s=k;s>k-n;s--)
       {
        d[p]=a[s][r];
        p++;
       }
       s++;


      if(strcmp(b,d)==0){
       printf("%d,%d %d,%d\n",k+1,l+1,s+1,r+1);
        flag=1; }

      }
     ////////////////////////////
     if(k-n+1>=0&&l+n-1<=m)
      {
       p=0;
       memset(d,0,100);
       s=k;
       for(r=l;r<l+n;r++)
       {
        d[p]=a[s][r];
        s--;
        p++;
       }
       r--;
       s++;


      if(strcmp(b,d)==0){
       printf("%d,%d %d,%d\n",k+1,l+1,s+1,r+1);
    flag=1;  }


      }


     }

   if(flag==0)
    printf("Not found\n");



 }


return 0;
}
