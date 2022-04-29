#include<iostream>
using namespace std;

int main() {
    int num, lastNum;
    cout<<"Enter The Number "<<endl;
    cin>>num;

    if (num<=9){
        cout<<num;
    } else{
        lastNum = num % 10;
        cout<<lastNum;
    }
    return 0;
}