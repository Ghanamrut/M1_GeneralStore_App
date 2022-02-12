#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student_management.h"

int ret_roll(char name[])
{ int i;
	for ( i = 0; i <20; i++)
	{
		if(!strcmp(name,name_s[i]))
		{
        break;
	    }
		
	}
	if(i>19){

	printf("Name Not Found\n");
	return 0;
	}
	else{
		return roll_no[i];
	}
}
int marks(char name[])
{ 
	int i=0,marks=0;
	for ( i = 0; i <20; i++)
	{
		if(!strcmp(name,name_s[i]))
		{
        break;
	    }
		
	}
	if(i>19){
	printf("Name Not Found\n");
	return 0;}
	else{
	marks=physics[i]+chemistry[i]+biology[i]+maths[i];
	return marks;
	}
}
int ret_subtotal(int ch)
{ int i;int total=0,avg;
switch(ch)
{ 
	case 1:
	for ( i = 0; i <20; i++)
	{
		total += physics[i];
	}
	break;
	case 2:
	for ( i = 0; i <20; i++)
	{
		total += chemistry[i];
	}
	break;
	case 3:
	for ( i = 0; i <20; i++)
	{
		total += biology[i];
	}
	break;
	case 4:
	for ( i = 0; i <20; i++)
	{
		total += maths[i];
	}
	break;
	
}
avg=total/20;
return total;
}
int compare(int roll1,int roll2)
{ int i,flag=0;int roll,total1,total2;
	for ( i = 0; i <20; i++)
	{
		if(roll1 ==roll_no[i])
		{
        flag++;
	    }
		if(roll1 ==roll_no[i])
		{
		flag ++;
		}
	}
	if(flag==2)
	{
		printf("Name     :-%s	%s\n",name_s[roll1-301],name_s[roll2-301]);
		printf("Physics  :-%d		\t%d\n",physics[roll1-301],physics[roll2-301]);
		printf("Chemistry:-%d		\t%d\n",chemistry[roll1-301],physics[roll2-301]);
		printf("Biology  :-%d		\t%d\n",biology[roll1-301],physics[roll2-301]);
		printf("Maths    :-%d		\t%d\n",maths[roll1-301],physics[roll2-301]);
		total1=physics[roll1-301]+chemistry[roll1-301]+biology[roll1-301]+maths[roll1-301];
		total2=physics[roll2-301]+chemistry[roll2-301]+biology[roll2-301]+maths[roll2-301];
		printf("Total    :-%d		\t%d\n",total1,total2);
		if(total1>total2)
		roll=roll1;
		else
		roll=roll2;
		return roll;
	}
	else{
	printf("Invalid Roll no");
	return 0;
}
}