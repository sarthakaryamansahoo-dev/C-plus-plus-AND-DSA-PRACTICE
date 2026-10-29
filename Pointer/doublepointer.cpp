# include <iostream>
using namespace std;
int main(){
  int x=5;
  int* p1=&x;
  int** p2=&p1;
  cout<<x<<endl<<p1<<endl<<*p2<<endl;
  cout<<x<<endl<<*p1<<endl<<**p2<<endl;
}