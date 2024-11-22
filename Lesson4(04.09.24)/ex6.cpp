#include <string>
#include <iostream>
#include <regex>
using namespace std;


bool ValidationOfRomanNumerals(string str)
{

    const regex pattern("^M{0,3}(CM|CD|D?C{0,3})(XC|XL|L?X{0,3})(IX|IV|V?I{0,3})$");


    if (str.empty()) {
        return false;
    }


    if (regex_match(str, pattern)) {
        return true;
    }
    else {
        return false;
    }
}
int value(char r)
{
    if (r == 'I')
        return 1;
    if (r == 'V')
        return 5;
    if (r == 'X')
        return 10;
    if (r == 'L')
        return 50;
    if (r == 'C')
        return 100;
    if (r == 'D')
        return 500;
    if (r == 'M')
        return 1000;

    return -1;
}

int romanToDecimal(string& str)
{
    int res = 0;


    for (int i = 0; i < str.length(); i++)
    {

        int s1 = value(str[i]);

        if (i + 1 < str.length())
        {

            int s2 = value(str[i + 1]);


            if (s1 >= s2)
            {

                res = res + s1;
            }
            else
            {

                res = res + s2 - s1;
                i++;
            }
        }
        else {
            res = res + s1;
        }
    }
    return res;
}


int main()
{
    string str = "1";
    if (ValidationOfRomanNumerals(str)) {
        cout << "Integer form of Roman Numeral is " << romanToDecimal(str) << endl;
    }
    else {
        cout << "Vvedeni nekoorektnie dannie";
    }

    return 0;
}