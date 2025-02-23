#include<iostream>
#include <clocale>
using namespace std;

void hanoiskaya(int n, int start, int final)
{
    int help;
    if (n == 0)
    {
        return;
    }
    help = 6 - start - final;
    hanoiskaya(n - 1, start, help);
    cout << "диск " << n << " перемещаем со стержня " << start << " на стержень " << final << endl;
    hanoiskaya(n - 1, help, final);
}

int main()
{
    setlocale(LC_ALL, "RUS");
    int num;
    cout << "введите количество дисков:" << endl;
    cin >> num;
    if (num <= 0)
    {
        cout << "количество дисков должно быть больше 0, введите еще раз";
        cin >> num;
    }
    hanoiskaya(num, 1, 3);
    return 0;
}
