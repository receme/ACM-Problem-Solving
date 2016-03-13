#include<stdio.h>
#include<string.h>
#include<ctype.h>
using namespace std;

int i,j,k,l,m,t,n,s,r,p,flag,c,cas,nn,z;
char a[1000][1000],b[1000],d[1000];

int main()
{

flag=0;
scanf("%d",&cas);

for(c=0;c<cas;c++)
{

 if(flag!=0)
  printf("\n");

flag=1;

scanf("%d %d",&m,&t);


 for(i=0;i<m;i++)
 {
  scanf("%s",a[i]);
  for(j=0;j<t;j++)
   a[i][j]=toupper(a[i][j]);
 }

 scanf("%d",&nn);

 for(z=0;z<nn;z++)
 {
 scanf("%s",b);




   n=strlen(b);

   for(i=0;i<n;i++)
    b[i]=toupper(b[i]);



   for(k=0;k<m;k++)
    for(l=0;l<t;l++)
     if(a[k][l]==b[0])
     {

     ///////////////////****************
      if(l+n-1<=t-1)
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
       printf("%d %d\n",k+1,l+1);
       goto x; }
      }
    //////////////////////////////////
      if(k+n-1<=m&&l+n-1<=t)
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
       printf("%d %d\n",k+1,l+1);
       goto x; }

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
       printf("%d %d\n",k+1,l+1);
       goto x; }

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
       printf("%d %d\n",k+1,l+1);
       goto x; }

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
       printf("%d %d\n",k+1,l+1);
       goto x; }

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
       printf("%d %d\n",k+1,l+1);
       goto x; }

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
       printf("%d %d\n",k+1,l+1);
       goto x; }

      }
     ////////////////////////////
     if(k-n+1>=0&&l+n-1<=t)
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
       printf("%d %d\n",k+1,l+1);
       goto x; }


      }


     }

    x:
    continue;

 }

}
return 0;
}
