#include <bits/stdc++.h>
using namespace std;
int cnt, litter;
//cnt为需要计算的题数，litter为惩罚时间
struct pupil
{
    string name;
    int ac_t;
    //ac的题目数量
    int time;
    //题目的时间
} tmp;
int total_ac = 0, total_time = 0;
struct rule
{
    bool operator()(const pupil &s1, const pupil &s2)
    {
        if (s1.ac_t != s2.ac_t)
        {
            return s1.ac_t > s2.ac_t;
        }
        else if (s1.time != s2.time)
        {
            return s1.time < s2.time;
        }
        else
        {
            return s1.name < s2.name;
        }
    }
};
set<pupil, rule> s;
void process(string a)
{
    stringstream ssp(a);
    int num;
    ssp >> num;
    if (num > 0)
    {
        ++total_ac;
        int i = a.size() - 1;
        int cnt_n = 0;
        if (a[i] == ')')
        {
            --i;
            for (int p = 1; a[i] != '('; --i, p *= 10)
            {
                cnt_n += a[i] * p - '0';
            }
        }
        total_time += (cnt_n * litter + num);
    }
    return;
}
void input()
{
    string st;
    while (getline(cin, st))
    {
        if (st == "")
        {
            return;
        }
        stringstream ss(st);
        ss >> tmp.name;
        total_ac = 0;
        total_time = 0;
        for (int i = 1; i <= cnt; ++i)
        {
            string a;
            ss >> a;
            process(a);
        }
        tmp.time = total_time;
        tmp.ac_t = total_ac;
        s.insert(tmp);
    }
    return;
}
void output()
{
    set<pupil, rule>::iterator i = s.begin();
    for (; i != s.end(); ++i)
    {
        cout << std ::left << setw(10) << (*i).name << " " << std ::right << setw(2) << (*i).ac_t << " " << std ::right << setw(4) << (*i).time << endl;
    }
    return;
}
int main()
{
    string absorb; 
    cin >> cnt >> litter;
    getline(cin, absorb);
    input();     
    output();
    return 0;
}