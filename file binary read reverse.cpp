#include<iostream>
#include<fstream>
using namespace std;
class employee
{
	int emp_code;
	char name[50];
	int hra;
	int da;
	int ta;
	public:
		void get_data()
		{
			cout<<"\nenter emp code";
			cin>>emp_code;
			cout<<"\nenter name";
			cin>>name;
			cout<<"\nenter hra";
			cin>>hra;
			cout<<"\nenter da";
			cin>>da;
			cout<<"\nenter ta";
			cin>>ta;
			
		}
		void show_data()
		{
			cout<<"\n emp code "<<emp_code;
			cout<<"\nName: "<<name;
			cout<<"\nHRA: "<<hra;
			cout<<"\nDA: "<<da;
			cout<<"\nTA: "<<ta;
		}
};
int main()
{
	employee e;
	fstream fin;
	fin.open("emp.txt",ios::binary|ios::in|ios::ate);
	int objects=fin.tellp()/(sizeof(e));
	for(int i=objects;i>0;i--)
	{
		int location=(i-1)*sizeof(e);
		fin.seekg(location);
		fin.read((char *)&e,sizeof(e));
		e.show_data();
	}	
}

