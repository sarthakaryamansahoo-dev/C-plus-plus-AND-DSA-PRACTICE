# include <iostream>
using namespace std;
int main(){
  //right
  int x=5,y=6;
  int* p1=&x,* p2=&y;
  cout<<*p1<<endl<<*p2;

  //syntax error
  
  //int* p3=&x p4=&y;
  //cout<<*p3<<endl<<*p4;
}