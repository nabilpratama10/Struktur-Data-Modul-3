#include <iostream>

using namespace std;    
void tampilArray2D(int arr[3][3]) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
void tukarNilaiPointer(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    cout << "Array A:" << endl;
    tampilArray2D(A);
    cout << "\nArray B:" << endl;
    tampilArray2D(B);
    int *p1 = &A[0][0];
    int *p2 = &B[0][0];

    cout << "\nSebelum ditukar: *p1 = " << *p1 << ", *p2 = " << *p2 << endl;
    tukarNilaiPointer(p1, p2);
    cout << "Setelah ditukar: *p1 = " << *p1 << ", *p2 = " << *p2 << endl;
    return 0;
}