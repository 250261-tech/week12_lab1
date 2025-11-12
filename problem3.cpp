#include <iostream>
using namespace std;

int main() {
    int *ptrA;
    int ar[10]={4,3,6,2,8,3,2,44,16,9};
    ptrA=ar;

    for(int i=0;i<=9;i++) {
        cout<<ptrA<<" "<<*ptrA<<endl;
        ptrA++;
    }
    return 0;
}