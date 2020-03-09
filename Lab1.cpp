#include <iostream>
#include <vector>
#include "pb2.h"

using std::cout;


bool primetest(int potentialprime)
{
    int divisor = 2;

    while (divisor <= potentialprime)
    {
        if (potentialprime == 2)
            return true;

        else if (potentialprime % divisor == 0)
        {
            return false;
            break;
        }
        while (potentialprime % divisor != 0)
        {
            if (potentialprime - divisor > 1)
            {
                divisor += 1;
            }
            else
            {
                return true;
            }
        }

    }

}
    

void primzahlen(int numprimes)
{
    int i = 0;
    while (i < numprimes)
    {
        if (primetest(i) == true)
        {
            cout << i << " ";
        }
        
        i++;
    }

}

void subseq(std::vector <int> vec)
{
    int contor = 1, poz = 0, max = -1, maxcontor = -1, i = 0;

    while (i < (vec.size() - 1))
    {
        if (vec[i] < vec[i + 1])
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

int main()
{
    cout << "1- alle prim zahlen bis zu N\n2-langste ansteigende Kette\n";
    int x;
    std::cin >> x;
    if (x == 2)
    {
        std::vector <int> vecti{ 1,2,3,4,4,4 };
        subseq(vecti);
    }
    else if (x == 1)
    {
        int nr = 20;
        primzahlen(nr);
    }
    else
    {
        cout << "Give 1 or 2. Nothing else. Bye";
    }


    return 0;
}