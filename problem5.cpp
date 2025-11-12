#include<iostream>
using namespace std;
void reverseArray(int* arr, int size) {
    int* i=arr;
    int* j=arr+size-1;
    while(i<j) {
        int temp=*i;
        *i=*j;
        *j=temp;
        *i++;
        *j--;
    }

}


int main() {
    int a;
    cin>>a;
    int ar[a];
    for (int i = 0; i < a; i++) {
        cin>>ar[i];
    }
    reverseArray(ar, a);
    for (int i = 0; i < a; i++) {
        cout<<ar[i]<<" ";
    }
    return 0;
}