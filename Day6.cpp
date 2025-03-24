#include<iostream>
using namespace std;
class Test{
    public:
        int a;
        int b;
        Test(){
            a=10;
            b=20;
            cout<<"hello"<<endl;
        }
};

int main(){
    // Test t1 = {10,20};
    // cout<<t1.a;
    Test t1;
    cout<<t1.a;
    return 0;
}