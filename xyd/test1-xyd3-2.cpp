#include <bits/stdc++.h>
using namespace std;
int main()
{
    char id[25];
    // 单项选择（填 'A' 或 'B' 或 'C' 或 'D'，不可不选。1题不选全部判0）
    //每题20分，共计100分
    id[1] = 'A';
    id[2] = 'A';
    id[3] = 'D';
    id[4] = 'A';
    id[5] = 'B';
/*以上为答题区域
===========================================
以下为判题评分代码请勿修改*/
    int n;
    cin >> n;
    cout << id[n] << endl;
    return 0;
}
