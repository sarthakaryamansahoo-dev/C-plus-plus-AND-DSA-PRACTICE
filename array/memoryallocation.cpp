# include <iostream>
using namespace std;
int main(){
  int arr[4]={9,6,4,7};
  cout<<&arr[0]<<endl;
  cout<<&arr[1]<<endl;
  cout<<&arr[2]<<endl;
  cout<<&arr[3]<<endl;
  
    //  0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
    //  hexadecimal

  // 0x61ff00
  // 0x61ff04
  // 0x61ff08
  // 0x61ff0c
  cout<<&arr;

  // address of array is equal to the address of the 1st element of 1st bit of an array


}