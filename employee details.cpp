#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,n,id[n];
	float sallary[n];   
    string name[50];
    
	cout<<"enter the number of employees\n";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cout<<"enter id of "<<i<<" employee ";
		cin>>id[i];
		cout<<"enter name of "<<i<<" employee ";
		cin>>name[i];
		cout<<"enter the sallary  of "<<i<<" employee ";
		cin>>sallary[i];
	
	} 
	for(i=1;i<=n;i++)
	{
		cout<<"\nid of "<<i<<"employee is "<<id[i];
		cout<<"\nname of "<<i<<"employee is "<<name[i];
		cout<<"\nthe sallary  of "<<i<<"employee is "<<sallary[i];

	} 
	
}
