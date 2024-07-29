#include <iostream>
using namespace std;

int biaya(int bebek)
{
    int harga_bebek;

    if (bebek < 10)
    {
        harga_bebek = 100000;
    }
    else if (bebek >= 10 && bebek <= 50)
    {
        harga_bebek = 75000;
    }
    else
    {
        harga_bebek = 50000;
    }
    return harga_bebek * bebek;
}

int main()
{
    int jantan[4] = {0, 10, 50, 60};
    int betina[4] = {7, 80, 9, 40};

    for (int i = 0; i < 4; i++)
    {
        int biaya_jantan = biaya(jantan[i]);
        int biaya_betina = biaya(betina[i]);

        cout << biaya_jantan + biaya_betina << endl;
    }
}