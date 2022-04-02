#include <iostream>
#include <cmath>
#include <deque>
#include <algorithm>

using namespace std;

int main(void) {
    cin.sync_with_stdio(false);
    long a, b, c;
    deque<long> info;
    deque<int> answer;
    while (true) {
        cin >> a >> b >> c;
        if((a==0)&&(b==0)&&(c==0))
            break;
        info.push_back(a);
        info.push_back(b);
        info.push_back(c);
        sort(info.begin(), info.end());
        a = info[0];
        b = info[1];
        c = info[2];
        long temp = sqrt(pow(a, 2)+pow(b,2));
        if(temp==c)
            answer.push_back(1);
        else
            answer.push_back(0);
        info.clear();
    }
    for(int i=0;i<answer.size();i++)
    {
        if(answer[i]==1)
            cout<<"right\n";
        else
            cout<<"wrong\n";
    }
}