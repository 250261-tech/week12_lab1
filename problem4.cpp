#include <iostream>
using namespace std;

int sumArray(int* arr, int size) {
    int *ptr;
    int sum=0;
    ptr=arr;
    for(int i=0; i<size; i++) {
        sum+=*ptr;
        ptr++;
    }
    return sum;
}

int main() {
    int len;
    cin>>len;
    int ar[len];
    for (int i = 0; i < len; i++) {
        int a;
        cin>>a;
        ar[i]=a;
    }
    cout<<sumArray(ar,len);
    return 0;
}