
#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <stdexcept>
using namespace std;

template <typename T, int N, int M>
class Matrix {
private:
    T data[N][M];

public:
    Matrix() {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                data[i][j] = T();
            }
        }
    }

    T& at(int i, int j) {
        if (i < 0 || i >= N || j < 0 || j >= M) {
            throw out_of_range("Indice invalide");
        }
        return data[i][j];
    }

    const T& at(int i, int j) const {
        if (i < 0 || i >= N || j < 0 || j >= M) {
            throw out_of_range("Indice invalide");
        }
        return data[i][j];
    }

    Matrix<T, N, M> operator+(const Matrix<T, N, M>& other) const {
        Matrix<T, N, M> result;

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                result.data[i][j] = data[i][j] + other.data[i][j];
            }
        }

        return result;
    }

    template <int P>
    Matrix<T, N, P> operator*(const Matrix<T, M, P>& other) const {
        Matrix<T, N, P> result;

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < P; j++) {
                for (int k = 0; k < M; k++) {
                    result.at(i, j) += data[i][k] * other.at(k, j);
                }
            }
        }

        return result;
    }

    friend ostream& operator<<(ostream& os, const Matrix<T, N, M>& mat) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                os << mat.data[i][j] << " ";
            }
            os << endl;
        }
        return os;
    }
};

#endif
