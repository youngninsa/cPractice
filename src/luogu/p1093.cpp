#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

class stu   //定义学生
{
    public:
        int num;
        int score[3];
        int total;
};

bool cmp(const stu &a,const stu &b) //定义比较函数
{
    if(a.total > b.total)
        return true;
    else if (a.total < b.total)
        return false;
    else if(a.score[0] > b.score[0])
        return true;
    else if (a.score[0] < b.score[0])
        return false;
    else if(a.num < b.num)
        return true;
    else
        return false;
}

int main()
{
    stu s[305]={0};
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)   //输入数据
    {
        s[i].num=i;
        for(int j=0;j<3;j++)
        {
            cin >> s[i].score[j];
            s[i].total += s[i].score[j];
        }
    }
    sort(s+1,s+n+1, cmp);   //通过cmp函数规则进行排序
    for(int i=1;i<=5;i++)
        cout << s[i].num << " " << s[i].total << endl;
    return 0;
}
