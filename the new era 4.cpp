#include<iostream>
#include<string.h>
using namespace std;

class House
{
   public:
   	int h__no;
   	char h__name[100];
   	char h__address[100];
   	int h__room;
   	int room__size;
};

int main()
{
	House h;
	h.h__no=1;
	strcpy(h.h__name,"Star Manorath");
	strcpy(h.h__address,"Khlovad");
	h.h__room=5;
	h.room__size=15*14;
	
	cout<<"House No="<<h.h__no<<endl;
	cout<<"House Name="<<h.h__name<<endl;
	cout<<"House Address="<<h.h__address<<endl;
	cout<<"House Room="<<h.h__room<<endl;
	cout<<"Room size="<<h.room__size;
	return 0;
}
