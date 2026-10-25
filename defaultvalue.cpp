# include <iostream>
using namespace std;
//void sf(int p,int w,int r){ 1st case
//void sf(int p=2,int w,int r){ 2nd case
//void sf(int p=3,int w=4,int r=9){ 3rd case
void sf(int p,float w){
    p+=w;
    cout<<p;
}
int main(){
    //sf(2,4,8);
    //sf();
    sf(4,9.2);
}