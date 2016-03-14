    #include<stdio.h>


    int step,mod,arr[100010],prev,i,j,count,seed;;
    int main()
    {

               while(scanf("%d %d",&step,&mod)==2)
               {


                       for(j=0;j<mod;j++)
                       arr[j]=0;

                       prev=0;
                       count=0;

                       while(1)
                       {
                               if(count==mod)
                               {
                                   break;
                               }
                               seed=(prev+step)%mod;
                               if(arr[seed]!=1)
                               {
                                      arr[seed]=1;
                                      prev=seed;
                                      count++;
                               }
                               else

                                break;
                       }

                       printf("%10d%10d",step,mod);

                       if(count==mod)
                       printf("    Good Choice\n\n");
                       else
                       printf("    Bad Choice\n\n");
               }

    return 0;
    }

