#include <iostream>
using namespace std;
int main(){
    cout<<"enter a character:";
    char n;
    cin>>n;
    int x=int(n);
    if(x>=97&&x<=122||x>=65&&x<=90)
        cout<<"this character is an alphabet:";
    else
        cout<<"this character is not an alphabet:";
}