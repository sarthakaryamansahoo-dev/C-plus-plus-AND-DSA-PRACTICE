#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"The First Number:";
    cin>>a;
    cout<<"The Seccond Number:";
    cin>>b;
    cout<<"The Third Number:";
    cin>>c;
    if(c*c==(a*a+b*b )||a*a==(c*c+b*b)||b*b==(c*c+a*a)){
        cout<<"these are the sides of a Rightangle Triangle";
    }
    else{
        cout<<"these are not the sides of a Rightangle Triangle";
    }
}

