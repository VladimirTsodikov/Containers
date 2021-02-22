#include <set>
#include <map>
#include <iostream>

using namespace std;
 
int main()
{
    //пример на set - автоматическая сортировка чисел с помощью контейнера
    set<int> k;
    int n;  //количество сортируемых чисел
    cin >> n;
    int tmp;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        k.insert(tmp);
    }
    for (int x : k)
        cout << x << ' ';
    cout << endl;

    //пример на map - ключи плюс значения

    map<string, int> m;
    m["Odin"] = 1;
    m["Dva"] = m["Odin"] + 1;
    m["Tri"] = 3;
    m["Chetire"] = 4;
    for (auto x : m)
        cout << x.first << ' ' << x.second << endl;  //числа будут выведены на экран в соответствии с алфавитном порядком ключей
    cout << m.size();
}