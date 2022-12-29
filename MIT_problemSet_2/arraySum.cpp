#include <iostream>

int sum(const int numbers[], const int numbersLen){
    int sum = 0;
    for(int i = 0; i<numbersLen; ++i){
        sum+=numbers[i];
    }
    return sum;
}

int main(){
    int arr[]={1,2,3,4};
    std::cout<<sum(arr,4);
    return 0;
}