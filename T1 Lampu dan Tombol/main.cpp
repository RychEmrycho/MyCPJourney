#include <iostream>

using namespace std;

void methodOneNaive(long long N);
void methodTwoBetter(long long N);
void methodThreeBest(long long N);

int main()
{
    long long N;
    cin >> N;

    methodOneNaive(N);

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
        cout << "Lampu mati";
    } else {
        cout << "Lampu menyala";
    }
}

void methodTwoBetter(long long N) {
}

void methodThreeBest(long long N) {
}
