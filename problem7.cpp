#include <iostream>
using namespace std;

int findLargestElement(const int* arr, int size) {
    const int* ptr = arr;

    for (int i = 0; i < size-1; i++) {
        if (*ptr<arr[i]) {
            ptr=&arr[i];
        }

    }
    return *ptr;
}


int main() {
    int p;
    int a;
    cin>>a;
    int ar[a];
    for (int i = 0; i < a; i++) {
        cin>>ar[i];
    }
    p=findLargestElement(ar, a);
    cout<<p<<endl;
    return 0;
}