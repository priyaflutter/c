#include<stdio.h>
#include<conio.h>
void main()
{
	int a[4],i,n,j,temp;
	clrscr();
	printf("n=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\na[%d]=",i);
		scanf("\n%d",&a[i]);

	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;

			}


		}
		printf("\na[%d]=%d",i,a[i]);

	}






	getch();

}