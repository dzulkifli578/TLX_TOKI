#include <iostream>
using namespace std;

int main()
{
    int beli[10] = {13, 100, 0, 4, 31, 0, 178, 23, 1, 13};
    int jual[10] = {0, 2, 24, 0, 10, 4, 0, 121, 0, 15};
    int bebekHarian, bebekSisa = 0;

    for (int i = 0; i < 10; i++)
    {
        bebekHarian = beli[i] - jual[i];
        bebekSisa += bebekHarian;
        cout << bebekSisa << endl;
    }
}
