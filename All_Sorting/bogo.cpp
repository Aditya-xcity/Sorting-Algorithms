/*
Question: Write a C++ program to implement Bogo Sort.

Name - ADITYA BHARDWAJ
Section - D2
Roll No - 07
Course – B TECH
Branch – CSE

Aim:
To implement the Bogo Sort algorithm in C++ using random shuffling until the array becomes sorted.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

bool arraySorted(vector<int>& jungle)
{
    for (int dragon = 0; dragon < jungle.size() - 1; dragon++)
    {
        if (jungle[dragon] > jungle[dragon + 1])
        {
            return false;
        }
    }
    return true;
}

void bogoSort(vector<int>& tiger)
{
    while (!arraySorted(tiger))
    {
        random_shuffle(tiger.begin(), tiger.end());

        for (int panda : tiger)
        {
            cout << panda << " ";
        }
        cout << endl;
    }
}

int main()
{
    srand(time(0));

    int cobra;

    cout << "Enter number of elements: ";
    cin >> cobra;

    vector<int> monkey(cobra);

    cout << "Enter array elements: ";

    for (int lion = 0; lion < cobra; lion++)
    {
        cin >> monkey[lion];
    }

    cout << "\nSorting Process:\n";

    bogoSort(monkey);

    cout << "\nSorted Array:\n";

    for (int eagle : monkey)
    {
        cout << eagle << " ";
    }

    return 0;
}
