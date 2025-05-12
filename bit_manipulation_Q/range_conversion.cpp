#include<iostream>
using namespace std;

void rangeConversion(int num,int i,int j){
    // int bitmask1=(1<<i);
    // int bitmask2=(1<<j);
    // int num1,num2;
    // if(num>0){
    //     num1=num&bitmask1;
    //     num2=num&bitmask2;
    //     num=num1 & bitmask2;

    // }
    // cout<<num;
    int a = (~0)<<(j+1);
    int b = (1<<i)-1;
    int bitmask = a|b;
    num = num&bitmask;
    cout<<num;


}
int main(){
    int num,i,j;
    cout<<"Enter the no: ";
    cin>>num;
    cout<<"Enter the i value: ";
    cin>>i;
    cout<<"Enter the j value: ";
    cin>>j;
    rangeConversion(num,i,j);
    return 0;
}