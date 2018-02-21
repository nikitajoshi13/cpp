#include<iostream>

using namespace std;
struct emp
{
	int id;
	float sallary;
	char name[40];
};
   int main()
    {
	  int n,i;

	  cout<<"enter number of employees\n";
	  cin>>n;
	  emp e[n];
	  cout<<"enter details of "<<n<<" employees\n";
	  for(i=1;i<=n;i++)
	  {
	  	cout<<"enter id of "<<i<<" employee ";
		cin>>e[i].id;
		cout<<"enter name of "<<i<<" employee ";
		cin>>e[i].name;
		cout<<"enter the sallary  of "<<i<<" employee ";
		cin>>e[i].sallary;
	  }
	cout<<"the details of "<<n<<" employees are as follows\n";
	  
	  for(i=1;i<=n;i++)
	{
		cout<<"\nid of "<<i<<"employee is "<<e[i].id;
		cout<<"\nname of "<<i<<"employee is "<<e[i].name;
		cout<<"\nthe sallary  of "<<i<<"employee is "<<e[i].sallary;

	} 
	
    }
