#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
//#include<conio.h>

double U,I,P;
int i,j,k,l,m,n,t,cas,f1,f2,f3,p,x,nn,x1,ii;
char b[100],c[100],d[100],ch;

int main()
{
    scanf("%d\n",&cas);

    for(t=0;t<cas;t++)
    {
       gets(d);

  nn=strlen(d);
  f1=0; f2=0; f3=0;

  //while (pch != NULL)
  for(ii=0;ii<nn;ii++)
  {
    //printf ("%s\n",pch); getch();
   // strcpy(d,pch);

   // memset(c,0,100);
    if(d[ii]=='U'&&d[ii+1]=='=')
    {
       //printf("b[]=%s\n",b);
       memset(b,0,100);
       memset(c,0,100);
       x=0;
       x1=ii;
       while(1)
       {
         if(d[x1]=='V'){
          b[x]=d[x1];
          x++;

          break; }

          b[x]=d[x1];
          x++;
          ii++;
          x1++;

       }
       f1=1;
       n=strlen(b);
       j=0;
       for(i=2;i<n;i++)
       {
         if((b[i]>=48&&b[i]<=57)||b[i]=='.'){
         c[j]=b[i];
         j++;}
         else break;
       }

       U=atof(c);

       ch=b[n-2];

       if(ch=='m')
        U=U/1000.0;
       else if(ch=='k')
        U=U*1000.0;
       else if(ch=='M')
        U=U*1000000.0;

  //printf("%lf\n",U);
    }

    else if(d[ii]=='I'&&d[ii+1]=='=')
    {
       f2=1;
       memset(b,0,100);
       memset(c,0,100);
       x=0;
       x1=ii;
       while(1)
       {
         if(d[x1]=='A'){
          b[x]=d[x1];
          x++;
          break; }

          b[x]=d[x1];
          x++;
          ii++;
          x1++;

       }

    //   printf("%s\n",b);
       n=strlen(b);
       j=0;
       for(i=2;i<n;i++)
       {  if((b[i]>=48&&b[i]<=57)||b[i]=='.'){
         c[j]=b[i];
         j++;}
         else break;
       }

       I=atof(c);

       ch=b[n-2];

       if(ch=='m')
        I=I/1000.0;
       else if(ch=='k')
        I=I*1000.0;
       else if(ch=='M')
        I=I*1000000.0;
       //printf("%lf\n",I);

    }
    else if(d[ii]=='P'&&d[ii+1]=='=')
    {
       f3=1;

       memset(b,0,100);
       memset(c,0,100);

       x=0;
       x1=ii;
       while(1)
       {
         if(d[x1]=='W'){
          b[x]=d[x1];
          x++;

          break; }

          b[x]=d[x1];
          x++;
          ii++;
          x1++;

       }
       n=strlen(b);
       j=0;
       for(i=2;i<n;i++)
       {
         if((b[i]>=48&&b[i]<=57)||b[i]=='.'){
         c[j]=b[i];
         j++;}
         else
          break;
       }

       P=atof(c);

       ch=b[n-2];

       if(ch=='m')
        P=P/1000.0;
       else if(ch=='k')
        P=P*1000.0;
       else if(ch=='M')
        P=P*1000000.0;
      //  printf("%lf\n",P);


    }


    //pch = strtok (NULL, " ");
  }

  printf("Problem #%d\n",t+1);
  if(f1==1&&f2==1)
  {
     P=U*I;
     printf("P=%.2lfW\n",P);
  }
  else if(f2==1&&f3==1)
  {
   U=P/double(I);
    printf("U=%.2lfV\n",U);
  }
  else if(f1==1&&f3==1)
  {
   I=P/double(U);
    printf("I=%.2lfA\n",I);
  }
  printf("\n");

    }
return 0;
}
