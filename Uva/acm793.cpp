#include<stdio.h>
#include<string.h>
 //#include<conio.h>

using namespace std;
char str,a[10],b[10],*pch;
int i,j,k,l,m,n,p,r,s,t,cas,flag,u,v,par[1000000],co,co1;



void makeset(int n){
    par[n]=n; //at first every element is parent of itself.
}


int find(int r) // ==find_representative()
{

    if(par[r]==r)
    {

     return r;  //if r is parent of itself than r is representative

    }
    else
    {
        //return find(par[r]);
        return par[r]=find(par[r]);
                                //else find representative of parent of r
    }
}

void Union(int a,int b)
{
     u=find(a);
     v=find(b);

    if(u==v&&flag==1)
     co++;
     //printf("%ld\n",count1[u]);

    else if(u!=v)
    {

        if(flag==0)
         par[v]=u;
        else
        {
          co1++;
        }
    }
}


int main()
{
  //freopen("input.txt","r",stdin);
 scanf("%d",&cas);

 for(t=0;t<cas;t++)
 {



   scanf("%d\n",&n);
   co=0;
   co1=0;
    for(i=1;i<=n;i++)
        {
         makeset(i);
        }

   while(gets(a))
   {

       if(t!=cas-1){
       if(strcmp(a,"")==0)
        break;}

         j=0;
         pch = strtok (a," ");
         while (pch != NULL)
         {
          if(j==0)
          {
            str=a[0];
            j=1;

          }
          else if(j==1)
          {
            strcpy(b,pch);
            m=strlen(b);
            r=0;
            l=1;
            for(k=m-1;k>=0;k--){
             r=r+(b[k]-48)*l;
             l=l*10; }
            j=2;
          }
          else if(j==2)
          {
            strcpy(b,pch);
            m=strlen(b);
            s=0;
            l=1;
            for(k=m-1;k>=0;k--){
             s=s+(b[k]-48)*l;
             l=l*10; }
            j=2;
          }
         // printf ("%s\n",pch);


          pch = strtok (NULL," ");
         }

       //scanf("%d %d",&r,&s);
       //printf("%c %d %d\n",str,r,s);

       flag=0;
      // printf("str==%s\n",str);
       if(str=='c')
       {

       if(r<s){
        Union(r,s);
        //printf("par[%d]=%d\n",s,par[s]); getch();
        }
       else{
        Union(s,r);
       // printf("par[%d]=%d\n",r,par[s]); getch();
        }
       }
       else
       {
         flag=1;
         //printf("%d %d****\n",par[r],par[s]);

         if(r<s){
          Union(r,s);
         // printf("par[%d]=%d\n",s,par[s]); getch();
          }
         else
          Union(s,r);
       }



   }


   printf("%d,%d\n",co,co1);
   if(t!=cas-1)
    printf("\n");
 }

return 0;
}
