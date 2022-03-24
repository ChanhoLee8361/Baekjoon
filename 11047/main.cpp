#include <iostream>
#include <deque>
#include <algorithm>
#include <iomanip>

using namespace std;
#define MAX 10
int coin[MAX];

int main(void) {
    cin.tie(NULL);
    int coin_size, goal;
    cin >> coin_size >> goal;

    for(int i=coin_size;i>0;i--)
    {
        scanf("%d", &coin[i]);
    }
    int answer=0;
    for(int i=1;i<=coin_size;i++)
    {
        answer += (goal/coin[i]);
        goal = goal%coin[i];
        if(goal == 0)
            break;
    }
    cout<<answer<<endl;
}