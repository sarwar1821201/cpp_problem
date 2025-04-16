#include<iostream>
using namespace std;

int main(){
    int num=38;
    while(num>=10){
        int sum=0;
        while(num>0){
            sum=sum+num%10;
            num=num/10;

        }
        num=sum;
        //cout<<"the sum is ="<<num;

    }
    cout<<"the sum is ="<<num;
}