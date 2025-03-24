#include<iostream>
using namespace std;
class Test{
    public:
    int a;
    int b;
    void sum(){
        cout<<a+b<<endl;
    }
};
int main(){
    Test t1;
    t1.a=10;
    t1.b=20;
    cout<<t1.a << " "<<t1.b<<"Sum is:"<<endl;
    t1.sum();
    return 0;
}