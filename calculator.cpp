#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int num1 ,num2;
    char operators;
    
    cout<<"operators ? ";

    cin >> operators;
    cin>>num1>>num2;
    if(operators=='+'){
        cout<<num1<<"+"<<num2<<"="<<num1 +num2;

    }

    else if (operators=='-'){
        cout<<num1<<"-"<<num2<<"="<<num1 -num2;

    }
    else if (operators=='*'){
        cout<<num1<<"*"<<num2<<"="<<num1 *num2;
    }

    else if(operators=='/'){
        cout<<num1<<"/"<<num2<<"="<<num1/num2;
    }



    return 0;
}