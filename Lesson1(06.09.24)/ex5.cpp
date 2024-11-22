#include <iostream>
#include <cstdlib>
using namespace std;

// Задание «Лампа со шторой». 
// В комнате светло, если на улице день и раздвинуты шторы или если включена лампа. 
// Ваша программа должна, в зависимости от времени суток и состояния лампы и штор, 
// отвечать на вопрос, светло ли в комнате.


int main()
{
    string timeOfDay, curtains, lamp;
    cout << "Введите 'день' или 'ночь': " << endl;
    cin >> timeOfDay;

    cout << "Напишите 'раздвинуты' или 'задвинуты' шторы: " << endl;
    cin >> curtains;

    cout << "Введите 'включена' или 'выключена' лампа в комнате: " << endl;
    cin >> lamp;

    if (timeOfDay == "день" && curtains == "раздвинуты"){
        cout << "В комнате светло" << endl;
    }
    else if (timeOfDay == "день" && curtains == "задвинуты" && lamp == "включена") {
        cout << "В комнате светло" << endl;
    }
    else if (timeOfDay == "ночь" && lamp == "включена"){
        cout << "В комнате светло" << endl;
    }
    else {
        cout << "В комнате темно";
    }
    return 0;
}
