#include<iostream>
using namespace std;

int main(){
    int x,  r, sum=0;
    
    cout<<"enter the number for input : "<< endl;
    cin>> x;

    int temp=x;

    while(temp>0){
        r=temp%10;
        sum=sum*10+r;
        temp/=10;
    }

    if(sum==x){
        cout<< "the number is palindrome";
    }
    else{
        cout<<"not palindrome";
    }

    return 0;
}