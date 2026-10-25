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
    if(a+b>c&&b+c>a&&a+c>b){
        cout<<"these are the sides of a Triangle";
    }
    else{
        cout<<"these are not the sides of a Triangle";
    }
}