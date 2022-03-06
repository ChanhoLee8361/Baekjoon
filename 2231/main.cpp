#include <iostream>
#include <deque>
#include <algorithm>
#include <cmath>

#define SIZE 10
using namespace std;

int solution(int input) {
    int answer = 00000;
    for (int a = 0; a < 10; a++)
        for (int b = 0; b < 10; b++)
            for (int c = 0; c < 10; c++)
                for (int d = 0; d < 10; d++)
                    for (int e = 0; e < 10; e++)
                        for (int f = 0; f < 10; f++) {
                            int value = a * pow(10, 5) +
                                        b * pow(10, 4) +
                                        c * pow(10, 3) +
                                        d * pow(10, 2) +
                                        e * pow(10, 1) +
                                        f +
                                        a + b + c + d + e + f;
                            if (value == input)
                                return a * pow(10, 5) +
                                       b * pow(10, 4) +
                                       c * pow(10, 3) +
                                       d * pow(10, 2) +
                                       e * pow(10, 1) +
                                       f;
                        }
    return 0;
}

int main(void) {
    cin.sync_with_stdio(false);
    int info;
    cin >> info;
    cout << solution(info);
}