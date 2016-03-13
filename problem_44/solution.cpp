#include<stdio.h>
#include<string.h>


char str[200],a[200],b[200],c[200],ch,*pch;
int i,j,m,n1,n2,n3,co1;

int main()
{

    while(gets(str))
    {
     if(strcmp(str,"e/o/i")==0)
      break;
     pch = strtok (str,"/");
    i=0;
    while (pch != NULL)
    {

      if(i==0)
      {
       strcpy(a,pch);
       n1=strlen(a);
       i=1;
      }
      else if(i==1)
      {
       strcpy(b,pch);
       n2=strlen(b);
       i=2;
      }
      else if(i==2)
      {
       strcpy(c,pch);
       n3=strlen(c);
      }
      pch = strtok (NULL, "/");

    }
    ////////////////
    j=0;
    co1=0;
    for(i=0;i<n1;i++)
    {
     if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='y')
     {

      if(j==0)
       co1++;
      j=1;
     }
     else
     {
      j=0;
     }
    }

   if(co1!=5)
   {
     printf("1\n");
     continue;
   }
   ////////////////
   j=0;
    co1=0;
    for(i=0;i<n2;i++)
    {
     if(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u'||b[i]=='y')
     {

      if(j==0)
       co1++;
      j=1;
     }
     else
     {
      j=0;
     }
    }

   if(co1!=7)
   {
     printf("2\n");
     continue;
   }
   ////////////////////
   j=0;
    co1=0;
    for(i=0;i<n3;i++)
    {
     if(c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u'||c[i]=='y')
     {

      if(j==0)
       co1++;
      j=1;
     }
     else
     {
      j=0;
     }
    }

   if(co1!=5)
   {
     printf("3\n");
     continue;
   }

  printf("Y\n");
    }

return 0;
}
