#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"give a integer:";
    cin>>n;
    if(n<0){
        cout<<-(n);
    }
    else{
        cout<<n;
    }
}