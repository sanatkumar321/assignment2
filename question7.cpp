#include<iostream>
using namespace std;
int main()
{
	double A1,A2,A3;
	
	cout << "enter any two angles of the triangle"<< endl;
	cin >> A1;
	cin >>A2;
	A3 = 180-A1-A2;
	cout << "the third angle of the triangle is " << A3 <<"°" ;
        return 0;
	
}
