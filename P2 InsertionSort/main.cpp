#include <iostream>

using namespace std;

void insertionSort(int A[], int N);

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}

void insertionSort(int A[], int N) {
    int i, j;
    for (i = 2; i <= N; i++) {
        j = i;
        while (j > 1 && (A[j] < A[j-1])) {
            swap(A[j], A[j-1]);
            j -= 1;
        }
    }

//    for (i = 0; i < array.lenght; i++){
//
//    }
}
