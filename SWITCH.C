#include<stdio.h>
#include<conio.h>
void main()
{
       int n;
       clrscr();
       printf("1.hello\n2.good\n3.bye");
       printf("\n\nenter your choice");
       scanf("%d",&n);
       switch (n)
       {
		case 1:
		{
			printf("\n hello !! How r u??");
			break;

		}
		case 2:
		{
			printf("\ngood mrg...");
			break;
		}
		case 3:
		{
			printf("\nbye sweet dream....");
			break;

		}

		defult:
		{
			printf("\nsorry your choice is wrong..");

		}


       }









	getch();


}