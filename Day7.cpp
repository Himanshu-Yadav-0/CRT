#include<iostream>
using namespace std;

class isha{
    public:
    int a;
    isha operator +(isha obj){
        isha result;
        result.a = a+obj.a;
        return result;
    }
};

int main(){
    isha himanshu,mota;
    himanshu.a = 10;
    mota.a = 20;
    isha temp = himanshu + mota;
    cout<<temp.a;
    return 0;
}