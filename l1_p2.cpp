#include <iostream>
#include <vector>
#include "pb1.h"
using namespace std;

int main()
{
    cout << "1 - Problema 1\n2 - Problema 2\nOption: ";
    int opt;
    cin >> opt;
    if (opt == 1)
        main_pb1();
    else if (opt == 2)
        main_pb2();
    return 0;
}
