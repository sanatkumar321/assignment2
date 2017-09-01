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
	x=1+ r/100; 
 	ans= pow(x,t);
	cout << "then the compound interest is " << p*ans - p;
	
        return 0;
}
	
