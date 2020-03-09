#pragma once
#include <iostream>
#include <vector>
#include "pb1.h"

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);

}

bool prim(int x)
{
    for (int d = 2; d <= x / 2; d++)
        if (x % d == 0)
            return 0;
    return 1;
}

void generare_nr_prime(int n)
{
    int ct = 0, i = 1;
    while (ct != n)
    {
        if (prim(i) == 1)
        {
            cout << i << " ";
            ct++;
        }
        i++;
    }
    cout << endl;
}

void subseq(vector <int> vec)
{
    int contor = 1, poz = 0, max = -1, maxcontor = -1, i = 0;

    while (i < (vec.size() - 1))
    {
        if (gcd(vec[i], vec[i + 1]) == 1)
        {
            poz = i + 1;
            contor += 1;
        }
        else
            contor = 1;

        if (contor > maxcontor)
        {
            max = poz;
            maxcontor = contor;
        }

        i += 1;
    }


    for (int i = max - maxcontor + 1; i < max + 1; i++)
    {
        cout << vec[i] << " ";
    }


}

void main_pbA()
{
    int n;
    cout << "n: ";
    cin >> n;
    cout << "Primele " << n << " numere prime: ";
    generare_nr_prime(n);
}

void main_pbB()
{
    cout << "\nCea mai lunga secventa cu nr relativ prime intre ele: ";
    vector <int> vecti{ 1,2,3,4,4,5,6,7,8,11,13 };
    subseq(vecti);
}

void main_pb1()
{
    cout << "1 - Pct a\n2 - Pct b \nOption: ";
    int opt;
    cin >> opt;
    if (opt == 1)
        main_pbA();
    else if (opt == 2)
        main_pbB();


}