#include<iostream>
using namespace std;

int gcd(int,int);

int main(){
    int x, y;
    cin >> x >> y;
    cout << gcd(x,y);
    return 0; 
}

int gcd(int x,int y){
    if(y>x){
        int z=0;
        z=x;
        x=y;
        y=z;
    }
    while(x%y != 0){
    int z=x%y;
    x=y;
    y=z;
    
    }
    return y;
    
        
}
