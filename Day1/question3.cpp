#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the amount";
    int amount =0;
    cin>>amount;
    int hundreds = amount/100;
    amount %=100;
    int fiftys = amount/50;
    amount %=50;
    int twentys = amount/20;
    amount %=20;
    int ones = amount;
    cout<<"result is:"<<endl;
    cout<<hundreds<<" of hundered.";
    cout<<fiftys<<" of fiftys.";
    cout<<twentys<<" of twentys.";
    cout<<ones<<" of ones.";
    return 0;
}
