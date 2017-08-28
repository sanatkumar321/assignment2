#include<iostream>
using namespace std;
int main()
{
	double c;
	cout << "enter the temperature in farenheits  :" << endl;
        cin >> c ;
	cout << "this temperature in celsius : "<< (c-32)*5/9 << "°C"<<endl;
        return 0;
	
}
