#include<stdio.h>
#include<string.h>
//#include<conio.h>

int i,j,k,l,m,n,flag,p,q;
char a[101],b[101],c[101],e[101],f[101];

int main()
{

  scanf("%d\n",&n);

  for(i=0;i<n;i++)
  {
     memset(b,0,101);
     memset(c,0,101);
     memset(e,0,101);
     memset(f,0,101);
     gets(a);
     m=strlen(a);
     for(j=0;j<m;j++)
     {
       if(a[j]!='<'&&a[j]!='>')
         printf("%c",a[j]);
     }

     printf("\n");

     flag=0;
     for(j=0;j<m;j++)
     {
       if(a[j]=='<'&&flag==0)
       { j++;
         k=0;
         flag=1;
         while(a[j]!='>'){
          b[k]=a[j];
          k++;
          j++; }

         j++;
         p=0;
         while(a[j]!='<')
         {
          e[p]=a[j];
          p++;
          j++;
         }
       }

       if(flag==1&&a[j]=='<')
       {
         j++;
         l=0;

         while(a[j]!='>'){
          c[l]=a[j];
          l++;
          j++; }
         j++;
           q=0;
         while(j<m)
         {
          f[q]=a[j];
          q++;
          j++;
         }
       }


     }
//printf("%s %s %s %s\n",b,c,e,f);
      gets(a);

     for(j=0;j<strlen(a)-3;j++)
       printf("%c",a[j]);
     printf("%s%s%s%s\n",c,e,b,f);
     //
  }



return 0;
}
