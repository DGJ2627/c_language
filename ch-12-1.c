#include<stdio.h>
#define p printf
#define s scanf
struct student {
	int id;
	char name[100];
	int age;
	char course[100];
	char city[100];
	int std;
	char school[100];
	
};
void main(){
	int n,i;
	p("Enter number of student :");
	s("%d",&n);
	
	struct student G[n];
	for (i=0;i<n;i++)
	{
		system("cls");
		p("Enter student name\t: ");
		s("%s",&G[i].name);
		p("Enter student id\t: ");
		s("%d",&G[i].id);
		p("Enter student age\t: ");
		s("%d",&G[i].age);
		p("Enter student course\t: ");
		s("%s",&G[i].course);
		p("Enter student city\t: ");
		s("%s",&G[i].city);
		p("Enter student std\t: ");
		s("%d",&G[i].std);
		p("Enter student school\t: ");
		s("%s",&G[i].school);
	}
	system("cls");
	p("id\t-------name\t-------course\t-------std\t-------school\t-------age\t-------city\n\n");
	for (i=0;i<n;i++){
		p("%d:\t %s:\t\t %s:\t\t %d:\t\t %s:\t\t %d:\t\t %s:\n",G[i].id,G[i].name,G[i].course,G[i].std,G[i].school,G[i].age,G[i].city);
	}
}
