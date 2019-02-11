#include <iostream>
#include <cmath>

using namespace std;

void methodOneNaive(long long N);
void methodTwoBetter(long long N);
void methodThreeBest(long long N);

int main()
{
    long long N;
    cin >> N;

    //methodOneNaive(N);
    //methodTwoBetter(N);
    methodThreeBest(N);

    return 0;
}

void methodOneNaive(long long N) {
    int divisorCount = 0;
    for (long long i = 1; i <= N; i++) {
        if (N % i == 0) {
            divisorCount++;
        }
    }

    if (divisorCount % 2 == 0) {
        cout << "Lampu mati" << endl;
    } else {
        cout << "Lampu menyala" << endl;
    }
}

void methodTwoBetter(long long N) {
    long long num = N;

    int divisorCount = 1;
    for (long long i = 2; i * i <= num; i++) {
        int factorCount = 0;
        while (num % i == 0) {
            factorCount++;
            num /= i;
        }

        divisorCount *= (1 + factorCount);
    }

    if (num > 1) {
        divisorCount *= 2;
    }

    if (divisorCount % 2 == 0) {
        cout << "Lampu mati" << endl;
    } else {
        cout << "Lampu menyala" << endl;
    }
}

void methodThreeBest(long long N) {
    long long s = round(sqrt(N));

    if (s * s != N) {
        cout << "Lampu mati" << endl;
    } else {
        cout << "Lampu menyala" << endl;
    }
}
