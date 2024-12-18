#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>

using namespace std;

// Функция для вычисления среднего арифметического элементов строки
double calculateRowAverage(const vector<int>& row) {
    if (row.empty()) return 0.0;
    int sum = 0;
    for (int val : row) {
        sum += val;
    }
    return static_cast<double>(sum) / row.size();
}

// Функция для ввода двумерного массива
vector<vector<int> > inputMatrix(size_t rows, size_t cols) {
    vector<vector<int> > matrix(rows, vector<int>(cols));
    cout << "Введите элементы массива по строкам:\n";
    for (size_t i = 0; i < rows; ++i) {
        cout << "Строка " << i + 1 << ": ";
        for (size_t j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }
    return matrix;
}

// Функция для сортировки строк по убыванию средних арифметических
void sortMatrixByRowAverages(vector<vector<int> >& matrix) {
    vector<pair<double, vector<int> > rowWithAverages;
    for (const auto& row : matrix) {
        double avg = calculateRowAverage(row);
        rowWithAverages.push_back({avg, row});
    }

    // Сортировка по убыванию среднего
    sort(rowWithAverages.begin(), rowWithAverages.end(), [](const auto& a, const auto& b) {
        return a.first > b.first;
    });

    // Перезапись отсортированных строк в исходный массив
    for (size_t i = 0; i < matrix.size(); ++i) {
        matrix[i] = rowWithAverages[i].second;
    }
}

// Функция для вывода двумерного массива
void printMatrix(const vector<vector<int>>& matrix) {
    cout << "Двумерный массив:\n";
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << setw(5) << val;
        }
        cout << endl;
    }
}

int main() {
    size_t rows, cols;
    cout << "Введите количество строк и столбцов: ";
    cin >> rows >> cols;

    // Ввод массива
    vector<vector<int>> matrix = inputMatrix(rows, cols);

    // Вывод исходного массива
    cout << "\nИсходный массив:\n";
    printMatrix(matrix);

    // Сортировка массива
    sortMatrixByRowAverages(matrix);

    // Вывод отсортированного массива
    cout << "\nОтсортированный массив:\n";
    printMatrix(matrix);

    return 0;
}