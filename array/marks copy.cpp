# include <iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the number of students:";
  cin>>n;
  int s[n];
  cout<<"Enter the marks:";
  // for input

  for(int i=0;i<=n-1;i++){
    cin>>s[i];
  }

  //for output

  for(int i=0;i<=n-1;i++){
    if(s[i]<35){
      cout<<"the roll no. of the failed students are:"<<i+1<<" ";
    }
  }
}