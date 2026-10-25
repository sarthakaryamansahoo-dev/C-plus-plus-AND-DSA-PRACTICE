#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter The Character:";
    cin>>ch;
    int ascii=(int)ch;
    if(ascii>=97&&ascii<=122||ascii>=65&&ascii<=90){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            cout<<"The Character Is Vowel";
        }
        else if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
            cout<<"The Character Is Vowel";
        }
        else{
            cout<<"The Character Is Consonant";
        }
    }
    else{
        cout<<"The Character Is Not An Alphabet";
    }
}