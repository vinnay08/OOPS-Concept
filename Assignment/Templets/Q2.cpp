//Q-2. Write a program of to sort the array using templates

#include <iostream>
using namespace std;

template <class T>
bubbleSort(T arr[8], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - 1 - i; ++j) {
            if (arr[j] > arr[j + 1]) {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
}
template <class T>
print(T arr[8], int n){
	for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
}
main(){
	int Arr[8] = {64, 34, 25, 12, 22, 11, 90, 87};
    int n = sizeof(Arr) / sizeof(Arr[0]);
    cout << "Unsorted integer array: ";
    print(Arr, n);
    bubbleSort(Arr, n);
    cout << "\nSorted integer array: ";
    print(Arr, n);
}

