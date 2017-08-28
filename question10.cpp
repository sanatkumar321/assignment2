#include<iostream>
using namespace std;
int main()
{
	double p,c,m,b,e;
        cout << "enter your marks in physics , chemistry, maths , biology, and english respectively out of 40 in each :"<<endl;
	cin>> p;
	cin>>c;
	cin>>m;
	cin>>b;
	cin>>e;
	
	cout<< "  your average marks is "<< (p+c+m+b+e)/5<<endl<< "your percentage is" << (p+c+m+b+e)*100/200;
	return 0;
}
