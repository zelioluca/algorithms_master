#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Search.h"
#include "Recursive.h"
#include "Distance.h"
#include "Interesting.h"

using namespace std;

int main(int argc, char**argv)
{
    //let s prepare the arrays that we need to run our algos
    srand((unsigned) time(NULL));
    const int N = 1000;

    int *RandomInput = (int*)malloc(N * sizeof(int));
    int SequentialInput[N];

    for(int i = 0; i < N; i++)
    {
        *(RandomInput + i) = rand() % N;
        SequentialInput[i] = i;
    }

    int numberToSearch = 38;

    int rndSearchBinary = BinarySearch(RandomInput, numberToSearch, 0, N-1);
    cout << "Rand array => the number  " << numberToSearch << " is at position " << rndSearchBinary << endl;
    int rndSearchSeq = SequentialSearch(RandomInput, numberToSearch, 0, N-1);
    cout << "Seq array => the number  " << numberToSearch << " is at position " << rndSearchSeq << endl;

    int seqSearchBinary = BinarySearch(SequentialInput, numberToSearch, 0, N-1);
    cout << "Rand array => the number  " << numberToSearch << " is at position " << seqSearchBinary << endl;
    int seqSearchSeq = SequentialSearch(SequentialInput, numberToSearch, 0, N-1);
    cout << "Seq array => the number  " << numberToSearch << " is at position " << seqSearchSeq << endl;

    //factorial
    cout << "The factorial of 12 is " << Factorial(12) << endl;

    //point test
    point a;
    point b;
    a.x = 20;
    a.y = 10;
    b.x = 50;
    b.y = 70;

    cout << "The distance between a and b is " << GetDistance(a, b) << endl;
    cout << "Primes numbers: " << std::endl;
    Eratosthenes();

    return 0;
}

