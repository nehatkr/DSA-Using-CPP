#include <iostream>
using namespace std;

// Assume 32 bit decimal number
string DecimalToBinaryString(int a)
{
    string binary = "";
    int mask = 1;
    for (int i = 0; i < 31; i++)
    {
        if ((mask & a) >= 1)
            binary = "1" + binary;
        else
            binary = "0" + binary;
        mask <<= 1;
    }
    return binary;
}

int main()
{
    int n = 63;
    int ans;
    int m = n;
    int mask = 0;
    cout << "n- " << DecimalToBinaryString(n) << endl;
    while (m != 0)
    {
        mask = (mask << 1) | 1;
        cout << "mask- " << DecimalToBinaryString(mask) << endl;
        m = m >> 1;
        cout << "m- " << DecimalToBinaryString(m) << endl << "--------------------------------" << endl;
    }
    ans = (~n) & mask;

    cout << ans << endl;
}
