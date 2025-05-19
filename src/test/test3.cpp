#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool cmp(int a,int b)
{
    return a<b;
}

template<typename T>
void quick_sort(T* start,T* end,bool (*compare)(int , int))
{
    if(start >= end)
        return;
    T* left = start;
    T* right = end;
    T pivot = *left;
    while(left < right)
    {
        while(compare(pivot,*right) && left < right)
            right--;
        if(left < right)
            *left = *right,left++;
        while(compare(*left,pivot) && left < right)
            left++;
        if(left < right)
           *right = *left,right--;
    }
    *left = pivot;
    quick_sort(start,left-1,cmp);
    quick_sort(right+1,end,cmp);
}
template<typename T>
auto sum(T* start,T* end,T step)
{
    ll sum=0;
    for(T* i=start;i<end;i+=step)
        sum += *i;
    return sum;
}

int main()
{
    int a[10]={3,6,7,9,2,5,4,1,8,5};
    quick_sort(a,a+9,cmp);
    for(auto i:a)
        cout << setw(2) << i;
    cout << endl << "sum:" << sum(a,a+9,1);
    return 0;
}
