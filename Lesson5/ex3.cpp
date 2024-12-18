//ex 3 (задания 3 и 19)

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <map>
#include <string>
#include <cctype> 

using namespace std;


void writeWordsToFile(const string& filename) {
    ofstream file(filename.c_str());
    if (!file.is_open()) {
        cerr << "Ошибка: не удалось создать файл " << filename << endl;
        return;
    }

    cout << "Введите строки текста (введите пустую строку, чтобы завершить):\n";
    string line;

    while (true) {
        getline(cin, line);
        if (line.empty()) break;
        file << line << endl;
    }

    file.close();
    cout << "Текст успешно записан в файл: " << filename << endl;
}


void transformLinesToColumns(const string& inputFilename, const string& outputFilename) {
    ifstream inputFile(inputFilename.c_str());
    if (!inputFile.is_open()) {
        cerr << "Ошибка: не удалось открыть файл " << inputFilename << endl;
        return;
    }

    ofstream outputFile(outputFilename.c_str());
    if (!outputFile.is_open()) {
        cerr << "Ошибка: не удалось открыть файл " << outputFilename << endl;
        return;
    }

    vector<vector<string> > columns;
    string line;

    while (getline(inputFile, line)) {
        stringstream ss(line);
        string word;
        vector<string> row;

        while (ss >> word) {
            row.push_back(word);
        }

        columns.push_back(row);
    }

    size_t maxRowLength = 0;
    for (size_t i = 0; i < columns.size(); ++i) {
        if (columns[i].size() > maxRowLength) {
            maxRowLength = columns[i].size();
        }
    }

    for (size_t i = 0; i < maxRowLength; ++i) {
        for (size_t j = 0; j < columns.size(); ++j) {
            if (i < columns[j].size()) {
                outputFile << columns[j][i];
            }
            if (j < columns.size() - 1) {
                outputFile << '\t';
            }
        }
        outputFile << '\n';
    }

    inputFile.close();
    outputFile.close();
    cout << "Строки преобразованы в столбцы и сохранены в файл: " << outputFilename << endl;
}

void findMostFrequentCharacter(const string& filename) {
    ifstream file(filename.c_str());
    if (!file.is_open()) {
        cerr << "Ошибка: не удалось открыть файл " << filename << endl;
        return;
    }

    map<char, int> charFrequency; 
    char c;
    bool hasCharacters = false;

    while (file.get(c)) {
        if (isprint(c) && !isspace(c)) { 
            c = tolower(c); 
            charFrequency[c]++;
            hasCharacters = true; 
        }
    }

    if (!hasCharacters) { 
        cerr << "Ошибка: файл " << filename << " пуст или не содержит значимых символов." << endl;
        file.close();
        return;
    }

    char mostFrequent = '\0';
    int maxFrequency = 0;

    for (const auto& entry : charFrequency) {
        if (entry.second > maxFrequency) {
            mostFrequent = entry.first;
            maxFrequency = entry.second;
        }
    }

    file.close();

    cout << "Наиболее часто встречающийся символ (без учета регистра): '" << mostFrequent << "' (частота: " << maxFrequency << ")" << endl;
}


void displayFileContent(const string& filename) {
    ifstream file(filename.c_str());
    if (!file.is_open()) {
        cerr << "Ошибка: не удалось открыть файл " << filename << endl;
        return;
    }

    string line;

    cout << "\nСодержимое файла \"" << filename << "\":\n";
    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();
}

int main() {
    string inputFilename = "input.txt";
    string outputFilename = "output_columns.txt";

writeWordsToFile(inputFilename);
    transformLinesToColumns(inputFilename, outputFilename);
    findMostFrequentCharacter(inputFilename);
    displayFileContent(inputFilename);
    displayFileContent(outputFilename);

    return 0;
}




