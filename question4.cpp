#include<iostream>
using namespace std;
int main()
{
	int d;
	cout << "enter the no. of days"<<endl;
	cin >> d ;
	int y=d/365;
	cout << y << "years"<< endl;
	int w= (d - 365*y)/7;
	cout << w << "weeks"<<endl;
	int dy = d - 365*y - 7*w;
	cout << dy << "days" <<endl;
	return 0;
}
