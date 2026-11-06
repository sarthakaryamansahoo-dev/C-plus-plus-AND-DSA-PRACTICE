# include <iostream>
# include <climits>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<=n-1;i++){
    cin>>a[i];
}

int max = INT_MIN;
for(int i=0;i<=n-1;i++){
    if(max < a[i]) max = a[i];
}
int max2 = INT_MIN;
for(int i=0;i<=n-1;i++){
    if(a[i]!=max && max2<a[i]){
        max2 = a[i];
    }
}
cout << max2;
}