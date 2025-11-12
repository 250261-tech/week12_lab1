#include <iostream>
using namespace std;

void findMinMax(const int* arr, int size, int& minVal, int& maxVal) {
    const int *ptr;
    ptr=arr;

    minVal = maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (*ptr < minVal) minVal = *ptr;
        if (*ptr> maxVal) maxVal = *ptr;
        ptr++;
    }
}


int main() {
    int min;
    int max;
    int a;
    cin>>a;
    int ar[a];
    for (int i = 0; i < a; i++) {
        cin>>ar[i];
    }
    findMinMax(ar, a, min, max);
    cout<<"min="<<min<<endl;
    cout<<"max="<<max<<endl;
    return 0;
}