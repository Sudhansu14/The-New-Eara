#include<iostream>

using namespace std;

class Distance
{
	public:
	int feet,inch,sum;
};

int main()
{
	Distance d1,d2,sum;
	
	cout<<"enter the 1 distance";
	cout<<"enter the feet=";
	cin>>d1.feet;
	cout<<"ente the 1 inch=";
	cin>>d1.inch;
	
	cout<<"enter the 2 distance";
	cout<<"enter the feet=";
	cin>>d2.feet;
	cout<<"ente the 2 inch=";
	cin>>d2.inch;
	
	sum.feet=d1.feet+d2.feet;
	sum.inch=d1.inch+d2.inch;
	
	while(sum.inch>=12)
	{
		sum.feet++;
		sum.inch-=12;
	}
	
	cout<<"feet"<<sum.feet<<"inch="<<sum.inch;
	
	
	
	
	
	
}
