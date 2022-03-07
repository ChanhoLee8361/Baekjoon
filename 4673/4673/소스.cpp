#pragma warning(disable:4996)
#include <iostream>
#include <string>
#include <deque>
#include <stdlib.h>
using namespace std;


#define SIZE 10001
bool info[SIZE];
int solution()
{
	for (int i = 1; i < SIZE ; i++)
	{
		int first = (i % 10000) / 1000;
		int second = (i % 1000) / 100;
		int third = (i % 100) / 10;
		int fourth = i % 10;
		int index = i + first + second + third + fourth;
		info[index] = true;
	}
	for (int i = 1; i < SIZE; i++)
		if (info[i] == false)
			printf("%d\n", i);
	return 0;
}

int main(void)
{
	cin.sync_with_stdio(false);
	solution();
}