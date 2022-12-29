#include <iostream>

int sum(const int numbers[], const int numbersLen){
    if(numbersLen==0){
        return 0;
    }
    return numbers[0]+sum(numbers+1,numbersLen-1);
}

int main(){
    int arr[]={1,2,3,5};
    std::cout<<sum(arr,4);
    return 0;
}