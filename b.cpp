#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    int a;
    cin>>a;
    int h=(int)(a/100);
    a=a%100;
    int tw=(int)(a/20);
    a=a%20;
    int t=(int)(a/10);
    a=a%10;
    int f=(int)(a/5);
    a=a%5;
    int o=(int)a;
    cout<<"change"<<endl; 
    //kl
    cout<<endl;
    cout<<(h+tw+t+f+o)<<endl;
    return 0;
}