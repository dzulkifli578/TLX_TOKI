#include <iostream>
using namespace std;

int main()
{
    int jantan = 0, betina = 0;
    int tanggal = 1;

    while (betina <= (10 * jantan))
    {
        jantan++;
        betina += tanggal;
        tanggal++;
    }

    cout << tanggal << endl;
}
