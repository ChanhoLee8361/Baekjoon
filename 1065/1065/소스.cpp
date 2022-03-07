#include <iostream>
using namespace std;


bool compare(int first, int second, int third)
{
	int diff1 = (first - second);
	int diff2 = (second - third);
	if ((diff1 == diff2))
		return true;
	else
		return false;
}
void solution(int input)
{
	int answer = input;
	int cnt = 0;
	if (answer < 100)
	{
		cout << answer;
		return;
	}
	else
	{
		while (answer > 99)
		{
			int first = answer / 1000;
			int second = (answer % 1000) / 100;
			int third = (answer % 100) / 10;
			int fourth = answer % 10;
			if (compare(second, third, fourth))
			{
				cnt++;
			}
			answer--;
		}
		cnt += 99;
	}
	if (input == 1000)
	{
		cout << cnt - 1;
		return;
	}
	cout << cnt;
}
int main(void)
{
	cin.sync_with_stdio(false);
	int input;
	cin >> input; 
	solution(input);
}