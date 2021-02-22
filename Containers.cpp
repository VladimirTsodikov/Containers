#include <set>
#include <map>
#include <iostream>

using namespace std;
 
int main()
{
    //������ �� set - �������������� ���������� ����� � ������� ����������
    set<int> k;
    int n;  //���������� ����������� �����
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

    //������ �� map - ����� ���� ��������

    map<string, int> m;
    m["Odin"] = 1;
    m["Dva"] = m["Odin"] + 1;
    m["Tri"] = 3;
    m["Chetire"] = 4;
    for (auto x : m)
        cout << x.first << ' ' << x.second << endl;  //����� ����� �������� �� ����� � ������������ � ���������� �������� ������
    cout << m.size();
}