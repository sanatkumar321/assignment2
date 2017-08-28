#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double p,t,r,x,ans;
	cout << "enter principle amount "<<endl;
	cin>>p;
	cout << "enter rate "<< endl;
	cin>>r;
	cout<< "enter time period "<<endl;
	cin>>t;
	x=1+r; 
 	ans= pow(x,t);
	cout << "then the compound interest is " << p*ans;
	
        return 0;
}
	
