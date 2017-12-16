#include <iostream>
using namespace std;

int ** allocate2D(int row, int col) {
    int **ptr = new int*[row];
    for (int i = 0; i < row; i++)
        ptr[i] = new int[col];
    return ptr;
}

void deallocate2D(int **p, int row, int col) {
    for (int i = 0; i < row; i++) {
        delete [] p[i];
    }
    delete [] p;
}

int main() {
    int row = 2;
    int col = 3;
    int **ptr = allocate2D(row, col);
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            ptr[i][j] = i + j;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << ptr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
