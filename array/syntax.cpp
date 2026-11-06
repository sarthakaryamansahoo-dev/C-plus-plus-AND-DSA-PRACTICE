# include <iostream>
using namespace std;
int main(){

    // int a[7] = {3,6,5,1,7,9,2}; basic syntax
    // cout<<a[5];

    // int we[] = {3,5,6,7}; thats works give
    // cout<<we[2];          output is 6

    // but this doesn't works
    // int we[];
    // we[3] = 6;
    // cout<<we[3];

    // use loop to print output

    int ed[5];

    // for input
    for(int i=0;i<=4;i++){
        cin>>ed[i];
    }

    // for output
    for(int i=0;i<=4;i++){
        cout<<ed[i]<<" ";
    }
}