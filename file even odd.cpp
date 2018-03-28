#include<iostream>
#include<fstream>>
using namespace std;
int main()
{
	ofstream fout;
	ofstream fout2;
	fout.open("even.txt");
	fout2.open("odd.txt");
	int i;
	cout<<"enter a number";
	cin>>i;
	if(i%2==0)
	{
	fout<<i<<"is even";
    }
    else
    {
    	fout2<<i<<"is odd";
	}
}
