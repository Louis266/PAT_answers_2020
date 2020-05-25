#include <iostream>
#include <vector>

using namespace std;

void print_num(int num)
{
    int minus = 0;
    if (num < 0)
    {
        minus = 1;
        num = 0 - num;
    }
    vector<char> res;
    int pos = 1;
    for (int i = num; i != 0; i = i / 10)
    {
        char r = (i % 10) + '0';
        res.push_back(r);
        if (pos % 3 == 0 && i /10 != 0)
        {
            res.push_back(',');
        }
        pos++;
    }

    if (minus == 1)
    {
        cout << '-';
    }

    for (vector<char>::iterator it = res.end(); it != res.begin(); it--)
    {
        cout << res.back();
        res.pop_back();
    }
    cout << endl;
}
int main()
{
    int a, b;
    cin >> a >> b;

    //cout << a << " " << b << endl;

    int res = a + b;

    if (res == 0)
    {
        cout << '0' << endl;
    }

    //cout << res << endl;

    print_num(res);
}