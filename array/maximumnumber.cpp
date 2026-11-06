# include <iostream>
# include <climits>
using namespace std;
int main(){
  int n,a[n];
  cin>>n;
  for(int i=0;i<=n-1;i++){
      cin>>a[i];
  }
  // int max = a[0];
  int max = INT_MIN;
  for(int i=0;i<=n-1;i++){
      if(max<a[i]) max =a[i];
  }
  cout<<max;
}