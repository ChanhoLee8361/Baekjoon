#include <iostream>
#include <algorithm>

using namespace std;
int info[3];

void solution(int input, int position = 0)
{
    if(input == 0)
    {
        cout<<"0\n";
        return;
    }
    if(position == 0)
    {
        info[0] = 0;
        info[1] = 1;
        info[2] = info[0]+info[1];
        solution(input, 1);
    }
    else if(position > input - 1)
    {
        cout<<info[2]<<"\n";
        return;
    }
    else
    {
        info[2] = info[0] + info[1];
        info[0] = info[1];
        info[1] = info[2];
        solution(input, position + 1);
    }

}

int main(void) {
    cin.sync_with_stdio(false);
    int input;
    cin >> input;
    solution(input);
}