#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int marks(char name[]);
int ret_roll(char name[]);
int ret_subtotal(int ch);
int compare(int roll1,int roll2);
int main()
{
	int ch,roll1,roll2,choice;
	char name[20];
	while(1)
	{
	printf("1.Subject Total and percentage of Student\n2.Return Roll NO\n3.Total Marks of all students in a Subject\n4.Compare Two Students\n5.Exit\nChoice ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		scanf("\n");
		scanf("%[^\n]%*c", name);
    	int c=marks(name);
		printf("%d %f\n",c,(float)c/4);
		break;
		case 2:
		printf("%d\n",ret_roll(name));
		break;
		case 3:
		printf("1.Physics\n2.Chemistry\n3.Biology\n4.Maths\nEnter Choice ");
		scanf("%d",&ch);
		printf("%d",ret_subtotal(ch));
		break;
		case 4:
		printf("\nEnter the two roll numbers to compare marks ");
		scanf("%d %d",&roll1,&roll2);
		compare(roll1,roll2);
		printf("1.Return Roll No\n2.Subject Total of Student\n3.Total Marks of all students in a Subject\n4.Compare Two Students\n5.Exit\nChoice ");
		break;
		case 5:
		return 0;

	}
	}
}