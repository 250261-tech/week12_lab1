#include <iostream>
using namespace std;

void swapNums(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int first,second;
    cin >> first >> second;
    swapNums(&first, &second);
    cout <<"a="<< first << " " <<"b="<< second << endl;
    return 0;
}