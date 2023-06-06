#include<iostream>
#include<string.h>

using namespace std;

class Bikes
{
	private:
		
	char company__name[100];
	char modal__name[100];	
};
int main()
{
	Bikes b1,b2;
	
	strcpy(b1.company__name,"kavasaki Ninja");
	strcpy(b1.modal__name,"ZX10R");
	strcpy(b2.company__name,"BMW");
	strcpy(b2.modal__name,"GS150");
	
	cout<<"company name="<<b1.company__name<<endl;
	cout<<"modal name="<<b1.modal__name<<endl;
	cout<<"company name="<<b1.company__name<<endl;
	cout<<"modal name="<<b1.modal__name<<endl;
	
	
	return 0;
}
