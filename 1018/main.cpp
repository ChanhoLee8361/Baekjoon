#include <iostream>
#include <string>
#include <deque>
#include <algorithm>
#include <iomanip>

using namespace std;

#define SIZE 52
int chess[SIZE][SIZE];

void solution(int rows, int columns) {
    deque<int> answer;

    for (int a = 0; a <= rows - 8; a++) {
        for (int b = 0; b <= columns - 8; b++) {
            int answer1=0;
            int answer2=0;
            for (int row = a; row < a + 8; row++) {
                for (int col = b; col < b + 8; col++) {
                    int check_row_index = row - a;
                    int check_col_index = col - b;
                    if(check_row_index%2==0)
                    {
                        if(check_col_index%2==0)
                        {
                            if(chess[row][col]!=0)
                                answer1++;
                            else
                                answer2++;
                        }
                        else if(check_col_index%2==1)
                        {
                            if(chess[row][col]!=1)
                                answer1++;
                            else
                                answer2++;
                        }
                    }
                    else if(check_row_index%2==1)
                    {
                        if(check_col_index%2==0)
                        {
                            if(chess[row][col]!=1)
                                answer1++;
                            else
                                answer2++;
                        }
                        else if(check_col_index%2==1)
                        {
                            if(chess[row][col]!=0)
                                answer1++;
                            else
                                answer2++;
                        }
                    }
                }
            }
            answer.push_back(answer1);
            answer.push_back(answer2);
        }

    }
    sort(answer.begin(), answer.end());
    cout<<answer[0];
}

int main(void) {
    cin.sync_with_stdio(false);
    int rows, columns;
    cin >> rows >> columns;
    for (int i = 0; i < rows; i++) {
        string info;
        cin >> info;
        for (int j = 0; j < info.size(); j++) {
            if (info[j] == 'W')
                chess[i][j] = 0;
            else if (info[j] == 'B')
                chess[i][j] = 1;
        }
    }
    solution(rows, columns);
}