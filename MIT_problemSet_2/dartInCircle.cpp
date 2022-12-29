#include <iostream>
#include <cmath>

int main(){
    int dartsInCircle=0;
    int n = 10;
    for(int i = 0; i<n; ++i){
        double x=rand()/(double)RAND_MAX;
        double y=rand()/(double)RAND_MAX;
        if(sqrt(x*x+y*y)<1){
            ++dartsInCircle;
        }
    }
    return 0;
}