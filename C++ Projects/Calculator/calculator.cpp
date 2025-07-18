#include<iostream>
using namespace std;

void cal(float num1,float num2,char op){

    float result;


     switch (op)
    {
    case '+':
        result=num1+num2;
        cout<<"Result: "<<num1<<"+"<<num2<<"="<<result;
        break;
    case '-':
        result=num1-num2;
        cout<<"Result: "<<num1<<"-"<<num2<<"="<<result;
        break;
    case '*':
        result=num1*num2;
        cout<<"Result: "<<num1<<"x"<<num2<<"="<<result;;
        break;
    case '/':
         if (num2 != 0) {
                result = num1 / num2;
                cout<<"Result: "<<num1<<"/"<<num2<<"="<<result;
            } else {
                cout<<"Error: Division by zero!";
            }
            break;   
    default:
        cout<<"Error: Invalid operator"<<op;
        
    }
}
int main(){

    char op;
    float num1,num2;

    cout<<"Enter operators(+ , - , / , *): ";
    cin>>op;

    cout<<"Enter Numbers: ";
    cin>>num1>>num2;

    cal(num1,num2,op);

}