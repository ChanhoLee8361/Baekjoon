#include <iostream>
#include <deque>

using namespace std;

void solution(int n, int info)
{
    if(n<=1)
    {
        cout<<info<<'\n';
        return;
    }
    else
    {
        info = info * n;
        solution(n-1, info);
    }

}


int main(void)
{
    cin.sync_with_stdio(false);
    int input;
    cin>>input;
    solution(input, 1);
}