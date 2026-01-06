#include<iostream>

using namespace std;

void mySwap(int &, int &);
void mySwap(string &, string &);
void mySwap(char &, char &);

int main(){
	int x, y;
	string a, b;
	char p, q;
	
	cin >> x >> y >> a >> b >> p >> q;
	
	cout << "Before swapping:\n";
	cout << "x = " << x << ", y = " << y << "\n";
	mySwap(x,y);
	cout << "After swapping:\n";
	cout << "x = " << x << ", y = " << y << "\n";
	
	cout << "Before swapping:\n";
	cout << "a = " << a << ", b = " << b << "\n";
	mySwap(a,b);
	cout << "After swapping:\n";
	cout << "a = " << a << ", b = " << b << "\n";
	
	cout << "Before swapping:\n";
	cout << "p = " << p << ", q = " << q << "\n";
	mySwap(p,q);
	cout << "After swapping:\n";
	cout << "p = " << p << ", q = " << q << "\n";

	return 0;
}

void mySwap(int &x,int &y){
	int a=x;
	int b=y;
	x=b;
	y=a;	
}

void mySwap(string &x,string &y){
	string a=x;
	string b=y;
	x=b;
	y=a;
}

void mySwap(char &x,char &y){
	char a=x;
	char b=y;
	x=b;
	y=a;
	
}