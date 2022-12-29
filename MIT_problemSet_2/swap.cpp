#include <iostream>

//7.2
void swap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}

//7.3
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
//7.4
void swap(int **x, int **y){
    int *temp=*x;
    *x = *y;
    *y = temp;
}

int main(){
    int x=5, y=6;
    int *ptr1=&x, *ptr2=&y;
    
    swap(x,y);
    std::cout<<"First swap\n";
    std::cout<<*ptr1<<" "<<*ptr2<<'\n';
    
    swap(&x,&y);
    std::cout<<"Second swap\n";
    std::cout<<*ptr1<<" "<<*ptr2<<'\n';
    
    swap(&ptr1, &ptr2);
    std::cout<<"Third swap\n";
    std::cout<<*ptr1<<" "<<*ptr2<<'\n';
    
    
    return 0;
}