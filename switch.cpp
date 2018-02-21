#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	char n,s;
	do
	{
		cout<<"choose your option\n";
		cout<<"+ for addition\n";
		cout<<"- for subtraction\n";
		cout<<"* for multiplication\n";
		cout<<"/ for division\n";
		cin>>n;
		
		switch(n)
		{
			case'+':
		    cout<<"enter two numbers\n";
		    cin>>a>>b;
			c=a+b;
			cout<<"the sum of "<<a<<" and "<<b<<" is  \n"<<c;
		    break;
		    case'-':
		    cout<<"enter two numbers\n";
		    cin>>a>>b;
			c=a-b;
			cout<<"the subtraction of "<<a<<" and "<<b<<" is  \n"<<c;
		    break;
		    case'*':
		    cout<<"enter two numbers\n";
		    cin>>a>>b;
		    c=a*b;
			cout<<"the multiplication of "<<a<<" and "<<b<<" is \n"<<c;
		    break;
		    case'/':
			cout<<"enter two numbers\n";
		    cin>>a>>b;
		    if(b==0)
			{
				cout<<"division not possible\n";
			}
			else
			{
			  c=a/b;
			  cout<<"the division of "<<a<<" and "<<b<<" is \n"<<c;
		    }
		    break;
	        default:
	   	    cout<<"\nwrong input\n";
	   
       }
	   cout<<"\npress y or Y to continue\n";      
       cin>>s;  
	   }while(s=='y'||s=='Y');
}
