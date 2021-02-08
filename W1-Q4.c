#include<stdio.h>
/*marks of 5 phy chem math bio comp and findding grade and percentage marks obtained by the student.*/
  int  main() 
{
	int math, comp, bio,phy,chem,total ;
	float percent;
	printf("Enter marks of math=");
	scanf("%d",&math);
	printf("Enter marks of phy=");
	scanf("%d",&phy);
	printf("Enter marks of chem=");
	scanf("%d",&chem);
	printf("Enter marks of bio=");
	scanf("%d",&bio);
	printf("Enter marks of comp=");
	scanf("%d",&comp);
	
	total=math+comp+bio+phy+chem;
	printf("\nTotal marks=%d",total);
	
	percent=(float)total/5;
	printf("\nPercent of marks=%f",percent);
	
	if(percent>=90&&percent<=100)
	{
		printf("\nGrade A");
	}
	else if(percent>=80&&percent<90)
	{
		printf("\nGrade B");
	}
	else if(percent>=70&&percent<80)
	{
		printf("\nGrade C");
	}
	else if(percent>=60&&percent<70)
	{
		printf("\nGrade D");
	}
    	else if(percent>=50&&percent<60)
	{
		printf("\nGrade E");
	}
		else if(percent>=40&&percent<50)
	{
		printf("\nGrade F");
	}
	return 0;
}
