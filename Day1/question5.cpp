#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the age";
    int age=0;
    cin>>age;
    if(age<0)cout<<"Nhi ho skta bhai";
    else if(age>=0 && age<17) cout<<"child";
    else if(age>=17 && age<50) cout<<"adult";
    else if(age>=50 && age<100) cout<<"old";
    else if(age>=100) cout<<"keseee zindaa hai";
    else{
        cout<<"age enter kr bhai or kuch nhi";
    }
    return 0;
}
