#include <iostream>
#include <algorithm>
#include <deque>
#include <vector>
#include <string>
using namespace std;

int main(void)
{
    cin.sync_with_stdio(false);
    deque<pair<int, string>> info;
    deque<pair<int, string>> check;
    int n, m, ans = 0;
    cin >> n >> m;
    bool error = false;
    for(int i=0;i<n;i++)
    {
        string temp;
        cin>>temp;
        info.push_back(make_pair(temp.size(), temp));
    }
    for(int i=0;i<m;i++)
    {
        string temp;
        cin>>temp;
        check.push_back(make_pair(temp.size(), temp));
    }
    sort(info.begin(), info.end());
    sort(check.begin(), check.end());
    //cout<<"====================================="<<endl;
    for(int i=0;i<info.size();i++)
    {
        for(int j=0;j<check.size();j++)
        {
            error = false;
            if(info[i].first == check[j].first)
            {
                for(int k=0;k<info[i].first / 2 + 2;k++)
                {
                    int r = info[i].first - k - 1;
                    // if((info[i].second[k] == check[j].second[k]) && (info[i].second[r] == check[j].second[r]))
                    // {
                    //     //cout<<info[i].second<<endl;
                    //     //cout<<k<<":"<<info[i].first - k - 1<<endl;
                    //     //continue;
                    // }
                    //else
                    if((info[i].second[k] != check[j].second[k]) || (info[i].second[r] != check[j].second[r]))
                    {
                        error = true;
                        break;
                    }
                }
                if(!error)
                    ans++;

            }
        }
    }
    cout<<ans;
}