#include"Param.h"

string* randomTopic(string str) {
    ifstream ran("Random.txt");
    if (ran.is_open()) {
        while (getline(ran, str)) {
            cout << str[random(1, 100)];
        }
    }
    else {
        cout << "Не удалось открыть файл" << endl;
        return 0;
    }
}

void human(int mistakes) {
    switch (mistakes) {
    case 0:
        cout << endl << endl << endl << endl << endl;
        break;
    case 1:
        cout << endl << endl << endl << endl << "  |" << endl;
        break;
    case 2:
        cout << endl << endl << endl << "  |" << endl << "  |" << endl;
        break;
    case 3:
        cout << endl << endl << "  |" << endl << "  |" << endl << "  |" << endl;
        break;
    case 4:
        cout << endl << "  |" << endl << "  |" << endl << "  |" << endl << "  |" << endl;
        break;
    case 5:
        cout << "_____" << endl << "  |" << endl << "  |" << endl << "  |" << endl << "  |" << endl;
        break;
    case 6:
        cout << "_____" << endl << "  |   |" << endl << "  |   O" << endl << "  |  /|\\" << endl << "  |  / \\" << endl;
        break;
    }
}

int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "rus");

    int topic;
    cout << "\tТемы" << endl;
    cout << "1)Случайная" << endl;
    cout << "2)Животные" << endl;
    cout << "3)Профессии" << endl;
    cout << "4)Еда" << endl;
    cin >> topic;



    string str = "";
    switch (topic) {
    case 1:
        cout << randomTopic(str);
        break;
    case 2:

        break;
    case 3:

        break;
    case 4:

        break;
    }
}