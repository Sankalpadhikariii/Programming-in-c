#include<stdio.h>
struct Student
{
	char Name[50];
	char Address[100];
	int Roll;
};
int main()
{
	struct Student s1,s2;
	printf("Enter name address and roll of first student");
	scanf("%s%s%d",s1.Name,s1.Address,&s1.Roll);
		printf("Enter name address and roll of second student");
	scanf("%s%s%d",s2.Name,s2.Address,&s2.Roll);
	printf("Details of first Student =");
	printf("Name=%s\n",s1.Name);
	printf("Address=%s\n",s1.Address);
	printf("Roll=%d\n",s1.Roll);
		printf("Details of Second Student =");
	printf("Name=%s\n",s2.Name);
	printf("Address=%s\n",s2.Address);
	printf("Roll=%d\n",s2.Roll);
}
