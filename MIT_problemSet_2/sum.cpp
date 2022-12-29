#include <iostream>

int sum (const int a, const int b){
    return a+b;
}

double sum (const double a, const double b){
    return a+b;
}

int sum (const int num1, const int num2, const int num3) {
    return num1+num2+num3;
}

int sum (const int num1, const int num2, const int num3, const int num4) {
    return num1+num2+num3+num4;
}

int main(){
    std::cout<<sum(1,2)<<'\n';
    std::cout<<sum(1.1,2.2)<<'\n';
    std::cout<<sum(1,2,3)<<'\n';
}