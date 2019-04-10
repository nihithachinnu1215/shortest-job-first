#include<stdio.h>

struct process{
	int at;
	int bt;
	int wt;
	int st;
	int ft;
	int ta;
	float pr;
}p[10];
int main()
{
int n=10;

	struct process temp;
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(p[i].at>p[j].at){
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			}
		}
	}

	int i1,j1;
	for(i1=0;i1<n-1;i1++)
	{
		for(j1=i1+1;j1<n;j1++)
		{
			if(p[i1].pr<p[j1].pr)
			{
				temp=p[i1];
				p[i1]=p[j1];
				p[j1]=temp;
			}
		}
	}


 
	int i2;
	printf("Process\tArrival time\tBurst time\n");
	for(i2=0;i2<n;i2++){

		printf("   P%d\t%d\t\t%d  \n",i2+1,p[i2].at,p[i2].bt);
	}
	

}
