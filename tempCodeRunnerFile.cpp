#include<iostream>
using namespace std;
int main(){
    int ld;
    for(int i=1;i<=500;i++){
        int sum=0;
        int mu=1;
        int x=i;
        while(x>0){
        ld=x%10;
        mu=ld*ld*ld;
        sum+=mu;
        x/=10;
        }
        if(sum==x){
            cout<<i;
        }
    }
}