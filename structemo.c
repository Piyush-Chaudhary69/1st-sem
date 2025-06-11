#include<stdio.h>
#include<string.h>
struct emp_info
{
	int emp_id;
	char name[15];
	char address[15];
	int salary;
}temp;
void emp_rec(int ,struct emp_info []);
void emp_asc(int ,struct emp_info []);
void emp_highest_salary(int ,struct emp_info []);
void emp_lowest_salary(int ,struct emp_info []);
int main()
{
	int n,i;
	printf("Enter the no of employees\n");
	scanf("%d",&n);
	struct emp_info v[n];
	for(i=0;i<=n-1;i++)
	{
		printf("Enter the id name address and salary of employee\n");
		scanf("%d",&v[i].emp_id);
		fflush(stdin);
		gets(v[i].name);
		fflush(stdin);
		scanf("%s%d",v[i].address,&v[i].salary);
	}
	emp_rec(n,v);
	emp_asc(n,v);
	emp_highest_salary(n,v);
	emp_lowest_salary(n,v);
}
void emp_rec(int a,struct emp_info x[a])
{
	int i=0;
	printf("Information of employees\n");
	for(i=0;i<=a-1;i++)
	{
		printf("Id=%d\tName=%s\tAddress=%s\tSalary=%d\n",x[i].emp_id,x[i].name,x[i].address,x[i].salary);
	}
}
void emp_asc(int a,struct emp_info x[a])
{
	int i=0,j=0;
	for(i=0;i<=a-1;i++)
	{
		for(j=i+1;j<=a-1;j++)
		{
			if(strcmp(x[i].name,x[j].name)>0)
			{
				temp=x[i];
				x[i]=x[j];
				x[j]=temp;
			}
		}
	}
	printf("Information of employees in Asc order\n");
	for(i=0;i<=a-1;i++)
	{
		printf("Id=%d\tName=%s\tAddress=%s\tSalary=%d\n",x[i].emp_id,x[i].name,x[i].address,x[i].salary);
	}
}
void emp_highest_salary(int a,struct emp_info x[a])
{
	int i=0,gt;
	gt=x[0].salary;
	for(i=0;i<=a-1;i++)
	{
		if(gt>=x[i].salary)
		{
			continue;
		}
		else
		{
			gt=x[i].salary;
		}
	}
	printf("Information of employee with highest salary\n");
	for(i=0;i<=a-1;i++)
	{
		if(gt==x[i].salary)
		{
			printf("Id=%d\tName=%s\tAddress=%s\tSalary=%d\n",x[i].emp_id,x[i].name,x[i].address,x[i].salary);
		}
	}
}
void emp_lowest_salary(int a,struct emp_info x[a])
{
	int i=0,lw;
	lw=x[0].salary;
	for(i=0;i<=a-1;i++)
	{
		if(lw<=x[i].salary)
		{
			continue;
		}
		else
		{
			lw=x[i].salary;
		}
	}
	printf("Information of employee with lowest salary\n");
	for(i=0;i<=a-1;i++)
	{
		if(lw==x[i].salary)
		{
			
printf("Id=%d\tName=%s\tAddress=%s\tSalary=%d\n",x[i].emp_id,x[i].name,x[i].address,x[i].salary);
		}
	}
return 0;
}
