#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout << "What do you want to know?\n1. Call schedule\n2. Timetable\n";
    cin >> b;
    switch (b)
    {
    case 1:
        cout << "1. 8:00 - 8:45(10 minutes)\n2. 8:55 - 9:40(20 minutes)\n3. 10:00 - 10:45(20 minutes)\n4. 11:05 - 11:50(10 minutes)\n5. 12:00 - 12:45(10 minutes)\n6. 12:55 - 13:40(10 minutes)\n7. 13:50 - 14:35";
    break;
    case 2:
        cout << "Enter the day of the week number: ";
    cin >> a;
    switch (a)
    {
    case 1:
        cout << "Monday\n1. English\n2. World Art\n3. Math\n4. Russian Language\n5. Russian Language\n6. Biology\n7. Works";
        break;
    case 2:
        cout << "Tuesday\n1. Physical education\n2. Physical education\n3. Social Studies\n4. Physics\n5. English\n6. Economy";
        break;
    case 3:
        cout << "Wednesday\n1. History\n2. Math\n3. Math\n4. Chemistry\n5. Geography\n6. Biology";
        break;
    case 4:
        cout << "Thursday\n1. Literature\n2. Literature\n3. History\n4. Physics\n5. Computer Science\n6. Math\n7. Math";
        break;
    case 5:
        cout << "Friday\n1. English\n2. Physics\n3. Law\n4. Chemistry\n5. Life safety fundamentals\n6. Physical education";
        break;
    }
    }

}
