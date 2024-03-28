#include <iostream>

using namespace std;

string convert(int n)
{
    string ans = "";

    while (n > 0)
    {
        int rem = 0;
        char ch;

        rem = n % 16;

        if (rem < 10)
        {
            ch = rem + 48;
        }
        else
        {
            ch = rem + 55;
        }

        ans += ch;
        n = n / 16;
    }

    int i = 0;
    int j = ans.size() - 1;
    while (i <= j)
    {
        swap(ans[i], ans[j]);
        i++;
        j--;
    }
    return ans;
}

int main()
{
    int n;
    cout << "enter a decimal number" << endl;

    cin >> n;
    cout << convert(n);

    return 0;
}