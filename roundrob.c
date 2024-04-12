#include<stdio.h>
void main()
{
 int time_qu,lim;
 printf("Enter the time quatum:");
 scanf("%d",&time_qu);
 printf("Enter the number of process:");
 scanf("%d",&lim);
 int i,p[lim],bt[lim],wt[lim],tat[lim],rt[lim],flag=0,total=0;
 printf("Enter process and burst time:\n");
 for(i=0;i<lim;i++)
 {
  scanf("%d%d",&p[i],&bt[i]);
  rt[i]=bt[i];
  
 }
 while(flag<lim)
 {
 for(i=0;i<lim;i++)
 {
  if(rt[i]>0)
  {
   if (rt[i] > time_qu) {
                    total += time_qu;
                    rt[i] -= time_qu;
                } else {
                    total += rt[i];
                    wt[i] = total - bt[i]; 
                    rt[i] = 0;
                    flag++;
                    tat[i] = total;
                    }
                    }}}
                    float tot_wt,tot_tat;
                    printf("process\tbt\twt\ttat\n");
                    for(i=0;i<lim;i++)
                    {
                     printf("%d\t%d\t%d\t%d\n",p[i],bt[i],wt[i],tat[i]);
                     tot_wt+=wt[i];
                     tot_tat+=tat[i];
                    }
printf("Average WT = %.2f\nAverage TAT = %.2f\n", tot_wt / lim, tot_tat / lim);
}
