# include <iostream>
using namespace std;
int main(){
    // addition of pointers in int datatype
    int x;
    int* p1=&x;
    cout<<p1<<endl;
    p1++;
    cout<<p1<<endl;
    // addition of pointers in boolean datatype
    bool flag=true;
    bool* p2=&flag;
    cout<<p2<<endl;
    p2++;
    cout<<p2<<endl;
    //addition 1 with address of y and print the value of pointer
    int y=8;
    int*  p3=&y;
    cout<<*p3<<endl;
    p3++;
    cout<<*p3<<endl;
    
     // why this type of output generated as after addition in the storing space no value is present
    
    //addition in pointer
    int y1=6;
    int*  p4=&y1;
    cout<<*p4<<endl;
    *p4++;
    cout<<*p4<<endl;

    //increment operator
    int a= 15;
    int* p5=&a;
    int b=++(*p5);//pre-increment
    cout<<a<<" "<<b<<endl;
    int c=(*p5)++;//post-increment
    cout<<a<<" "<<c<<endl;
}
