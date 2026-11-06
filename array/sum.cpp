# include <iostream>
using namespace std;
int main(){
  int n,sum = 0;
  cin>>n;
  int s[n];

for(int i=0;i<=n-1;i++){
      cin>>s[i];
  }

for(int i=0;i<=n-1;i++){
      sum+=s[i];
  }

cout<<sum;

}