#include<stdio.h>

int main()
{
int i,j,aa[50],bb[50],no,t;

printf("\n Enter the no of value  :  ");
scanf("%d",&no);
printf("enter the first set value  :  ");
for(i=0;i<no;i++)
{
scanf("%d",&aa[i]);
aa[i]=bb[i];
}
printf("enter the second set value  :  ");
for(j=0;j<no;j++)
{
scanf("%d",&aa[j]);
}
for(i=0;i<no;i++)
{
for(j=0;j<no;j++)
{
if(bb[i]>bb[j])
{
t=aa[i];
aa[i]=aa[j];
aa[j]=t;
t=bb[i];
bb[i]=bb[j];
bb[j]=t;
}
else if(bb[i]==bb[i+1])
{
if(aa[i]>aa[j])
{
t=aa[i];
aa[i]=aa[j];
aa[j]=t;
}
}
}
}
for(i=0;i<n;i++)
{
printf("%d",aa[i]);
}
return 0;


}
