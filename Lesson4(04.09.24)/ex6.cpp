#include <iostream>
#include <string>
#include <map>

bool isValidRoman(const std::string& roman) {
    std::map<char, int> romanValues;
    romanValues['I'] = 1;
    romanValues['V'] = 5;
    romanValues['X'] = 10;
    romanValues['L'] = 50;
    romanValues['C'] = 100;
    romanValues['D'] = 500;
    romanValues['M'] = 1000;

    for (size_t i = 0; i < roman.size(); ++i) {
        char current = roman[i];
        char next = (i + 1 < roman.size()) ? roman[i + 1] : '\0';


        if (romanValues.find(current) == romanValues.end()) {
            return false;
        }

        if (next != '\0' && romanValues[current] < romanValues[next]) {
            std::string pair = std::string() + current + next;
            if (!(pair == "IV" || pair == "IX" || pair == "XL" || pair == "XC" || pair == "CD" || pair == "CM")) {
                return false;
            }

            if (i + 2 < roman.size() && romanValues[roman[i + 2]] > romanValues[next]) {
                return false; 
            }
        }
    }

    return true;
}

int decodeRomanNumeral(const std::string& roman) {
    std::map<char, int> romanValues;
    romanValues['I'] = 1;
    romanValues['V'] = 5;
    romanValues['X'] = 10;
    romanValues['L'] = 50;
    romanValues['C'] = 100;
    romanValues['D'] = 500;
    romanValues['M'] = 1000;

    if (!isValidRoman(roman)) {
        std::cerr << "Ошибка: недопустимая последовательность римских символов." << std::endl;
        return -1;
    }

    int total = 0;   
    int prevValue = 0; 

    for (int i = roman.size() - 1; i >= 0; --i) {
        char c = roman[i];

        if (romanValues.find(c) == romanValues.end()) {
            std::cerr << "Ошибка: недопустимый символ '" << c << "' в римской записи." << std::endl;
            return -1;
        }

        int currentValue = romanValues[c];

        if (currentValue < prevValue) {
            total -= currentValue;
        } else {
            total += currentValue;
        }

        prevValue = currentValue;
    }

    return total;
}

int main() {
    std::string roman;
    std::cout << "Введите римскую запись числа: ";
    std::cin >> roman;

    int result = decodeRomanNumeral(roman);

    if (result != -1) {
        std::cout << "Арабское число: " << result << std::endl;
    }

    return 0;
}