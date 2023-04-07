#include<iostream>

using namespace std;

const int N = 10;

void printSequence(int x)
{
    cout << x << " ";
    if (x < N)
    {
        printSequence(x + 1);
    }
}

int main()
{
    printSequence(1);
    return 0;
}
