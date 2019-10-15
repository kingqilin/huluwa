/*计算某日是该年度第几天*/
#include<stdio.h>

int leap(int a)
{
	if(a%4==0&&a%100!=0||a%400==0)
	    return 1;
	else
	    return 0;
}


int number(int y,int m,int d)
{   int sum=0,i,j,k;
    int a[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	int b[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	if(leap(y)==1)
	{for(i=0;i<m-1;i++) 
	 sum=sum+a[i];}
	else
	{for(j=0;j<m-1;j++)
	sum=sum+b[j];}
	k=sum+d;
	return k;
}

void main()
{
    int a,b,c,d,e;
	scanf("%d %d %d",&a,&b,&c);
	d=number(a,b,c);
	if(leap(a)==1)
	{e=366-d;
	printf("%d 年是闰年\n今天是本年度的第%d天\n本年度还剩%d天\n",a,d,e);}
        else if(leap(a)==0)
		{e=365-d;
		printf("%d 年不是闰年\n今天是本年度的第%d天\n本年度还剩%d天\n",a,d,e);}
}


