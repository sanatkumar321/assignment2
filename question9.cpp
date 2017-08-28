#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,ans;
	cout << "enter the length of a side of the equilateral triangle "<<endl;
	cin >> a;
 	ans= pow(a,2);
	cout <<"area of this equilateral triangle is "<< (1.732*ans)/4 << " sq. units";
	
        return 0;
	
}
