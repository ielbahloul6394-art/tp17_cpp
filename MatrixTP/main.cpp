
#include <iostream>
#include "Matrix.h"

using namespace std;

int main() {

    // Matrices 2x2 d'entiers
    Matrix<int, 2, 2> A, B;

    A.at(0, 0) = 1;
    A.at(0, 1) = 2;
    A.at(1, 0) = 3;
    A.at(1, 1) = 4;

    B.at(0, 0) = 5;
    B.at(0, 1) = 6;
    B.at(1, 0) = 7;
    B.at(1, 1) = 8;

    cout << "Matrice A :" << endl << A;
    cout << "Matrice B :" << endl << B;

    cout << "Addition A + B :" << endl;
    cout << A + B;

    cout << "Multiplication A * B :" << endl;
    cout << A * B;


    // Matrice 3x3 de reels
    Matrix<double, 3, 3> C, D;

    C.at(0, 0) = 1.5;
    C.at(0, 1) = 2.0;
    C.at(0, 2) = 3.0;

    C.at(1, 0) = 4.0;
    C.at(1, 1) = 5.5;
    C.at(1, 2) = 6.0;

    C.at(2, 0) = 7.0;
    C.at(2, 1) = 8.0;
    C.at(2, 2) = 9.5;

    D = C;

    cout << "Matrice C :" << endl << C;

    cout << "Addition C + D :" << endl;
    cout << C + D;

    cout << "Multiplication C * D :" << endl;
    cout << C * D;

    return 0;
}
