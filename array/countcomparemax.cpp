# include <iostream>
using namespace std;
int main(){
  int n, x , count = 0;
  cin>>n>>x;
  int a[n];
  for(int i=0;i<=n-1;i++){
    cin>>a[i];
  }
  for(int i=0;i<=n-1;i++){
    if(a[i]>x) count++;
  }
  cout<<count;
}