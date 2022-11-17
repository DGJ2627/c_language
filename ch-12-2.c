#include<stdio.h>
#define p printf
#define s scanf
struct employee {
	int id;
	char name[100];
	int age;
	char role[100];
	char city[100];
	int exp;
	char cname[100];
	
};
void main(){
	int n,i;
	p("enter number of employee :");
	s("%d",&n);
	
	struct employee G[n];
	for (i=0;i<n;i++)
	{
		system("cls");
		p("enter employee name\t: ");
		s("%s",G[i].name);
		p("enter employee id\t: ");
		s("%d",&G[i].id);
		p("enter employee age\t: ");
		s("%d",&G[i].age);
		p("enter employee role\t: ");
		s("%s",&G[i].role);
		p("enter employee city\t: ");
		s("%s",&G[i].city);
		p("enter employee experience\t: ");
		s("%d",&G[i].exp);
		p("enter employee company name\t: ");
		s("%s",&G[i].cname);
	}
	system("cls");
	printf("id\tname:\trole:\texp:\tname:\tage:\tcity:\n\n");
	for (i=0;i<n;i++){
		printf("%d\t%s\t%s\t%d\t%s\t%d\t%s\n",G[i].id,G[i].name,G[i].role,G[i].exp,G[i].cname,G[i].age,G[i].city);
	}
}
