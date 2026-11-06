# include <iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<=n-1;i++){
      cin>>a[i];
  }
  int x;
  cin>>x;
  bool flag = false;
  for(int i=0;i<=n-1;i++){
      if(a[i]==x) flag = true;
  }
  if (flag==false) cout<< "element found";
  else cout<< "404 element not found";
}