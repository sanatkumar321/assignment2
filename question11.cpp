#include<iostream>
using namespace std;
int main()
{
	double p,t,r;
	cout<< "enter the principle amount"<<endl;
	cin>> p;
	cout<< "enter the rate (% per annum)"<<endl;
	cin >> r;
	cout << "enter the time period in years "<< endl;
	cin>>t;
	cout<< " simple interest = rs"<< p*t*r/100; 
	return 0;
}
