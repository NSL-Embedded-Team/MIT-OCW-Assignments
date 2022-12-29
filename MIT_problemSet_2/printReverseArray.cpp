#include <iostream>

void reverse(int numbers[], const int numbersLen){
    for(int i=0; i<numbersLen/2; ++i){
        int tmp = numbers[i];
        int indexFromEnd = numbersLen-i-1;
        numbers[i]=numbers[indexFromEnd];
        numbers[indexFromEnd]=tmp;
    }
}

void printArray (const int arr[], const int len){
    for(int i = 0; i<len; ++i){
        std::cout<<arr[i];
        if(i<len-1){
            std::cout<<", ";
        }
    }
}

int main(){
    int arr[]={1,2,3,4};
    reverse(arr,4);
    printArray(arr,4);

    return 0;
}