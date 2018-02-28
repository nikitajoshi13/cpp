#include<iostream>
#include<string.h>
using namespace std;
class store
{
	private:
	int quant[10];
	int item_code[10];
	float price[10];
	
	public:
	void get_data();
	void show_data();
	float total_bill();
};
int n;
void store::get_data()
{
	cout<<"\n enter quantity item code and price of each product\n";
	for(int i=0;i<n;i++)
	{
		cout<<"quantity of "<<i+1<<"item";
		cin>>quant[i];
		cout<<"item code of "<<i+1<<"item";
		cin>>item_code[i];
		cout<<"price of "<<i+1<<"item";
		cin>>price[i];
	}
}
void store::show_data()
{
	cout<<"\n the quantity item code and price of each product\n";
	for(int i=0;i<n;i++)
	{
		cout<<"\n Item "<<i+1;
		cout<<"\t quantity "<<quant[i];
		cout<<"\titem code "<<item_code[i];
		cout<<"\tprice "<<price[i];
	}
}
float store::total_bill()
{
	cout<<"\nprice of item is\n";
	for(int i=0;i<n;i++)
	{
		cout<<"\nprice of item "<<i+1<<"is "<<quant[i]*price[i];
	}
}
int main()
{
	store s;
	cout<<"enter number of items";
	cin>>n;
	s.get_data();
	s.show_data();
	s.total_bill();
}
