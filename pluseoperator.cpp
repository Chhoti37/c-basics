#include<iostream>
using namespace std;
int main(){
    string s = "chhoti";
    cout<<s<<" "<<s.length()<<endl;
    //s = s+ "kumari";
    s = "kumari" + s;  //aise v likh sakte h
    cout<<s<<" "<<s.length()<<endl;
    
}