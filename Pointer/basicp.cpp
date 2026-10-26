# include <iostream>
using namespace std;
int main(){
    int x=3;
    int *p1=&x;
    cout<<x<<endl<<p1<<endl<<&x<<endl<<*p1<<endl;
    float y=8.3;
    float *p2=&y;
    cout<<y<<endl<<p2<<endl<<&y<<endl<<*p2<<endl;
    cout<<y<<endl;
    *p2 = 5.2;
    cout<<y;
    // pointer - in which we stores address
}