#include <iostream>
using namespace std;


class Matrix {
public:
    int rows, cols;  
    int mat[10][10]; // Matrix elements

    // Constructor with default dimensions 2x2
    Matrix(int r = 2, int c = 2) : rows(r), cols(c) {}

    // Method to input values into the matrix
    void input() {
        cout << "Enter values for a " << rows << "x" << cols << " matrix:" << endl;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cin >> mat[i][j];
            }
        }
    }

    // Method to display the matrix
    void display() {
        cout << "Matrix (" << rows << "x" << cols << "):" << endl;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << mat[i][j] << "\t";
            }
            cout << endl;
        }
    }

    // Overloaded addition operator
    Matrix operator+(const Matrix& other) const {
        Matrix result(rows, cols); // Create a result matrix
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                // Perform element-wise addition
                result.mat[i][j] = mat[i][j] + other.mat[i][j];
            }
        }
        return result; // Return the result matrix
    }

    // Overloaded subtraction operator
    Matrix operator-(const Matrix& other) const {
        Matrix result(rows, cols); // Create a result matrix
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                // Perform element-wise subtraction
                result.mat[i][j] = mat[i][j] - other.mat[i][j];
            }
        }
        return result; 
    }
};

int main() {
	sytem("clear");
    int r1, c1, r2, c2;

    cout << "Enter dimensions for matrix 1 (rows columns): ";
    cin >> r1 >> c1;
    Matrix m1(r1, c1); // Create matrix 1

    cout << "Enter dimensions for matrix 2 (rows columns): ";
    cin >> r2 >> c2;
    Matrix m2(r2, c2); // Create matrix 2

    // Check if matrices have the same dimensions
    if (m1.rows == m2.rows && m1.cols == m2.cols) {
        m1.input(); 
        m2.input(); 

        Matrix m3 = m1 + m2;
        Matrix m4 = m1 - m2;

        m3.display(); 
        m4.display(); 
    } else {
        cout << "Matrices have different dimensions and cannot be added or subtracted." << endl;
    }

    return 0;
}
