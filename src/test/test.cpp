#include<bits/stdc++.h>
using namespace std;

int sum(const int *a,int step)
{
    int ans=0;
    for (int i=0; i < sizeof(a)/sizeof(int); i+=step)
        ans += *(a+i);
}

double sum(const double *a,int step)
{
    double ans=0;
    for (int i=0; i < sizeof(a)/sizeof(int); i+=step)
        ans += *(a+i);
}

//void solve3()
//{
//#define c2(n) n*(n-1)/2
//    cout << c2(5);
//}

//void solve4()
//{
//    srand(static_cast<unsigned long long> (time(nullptr)) * 38646925674 % 12345);
//    int num = rand()%100+1;
//    int guess;
//    cout << num;
//    /*while(guess != num)
//    {
//        cout << "please enter your guess number:";
//        cin >> guess;
//        if(guess > num)
//            cout << "bigger" << endl;
//        if(guess < num)
//            cout << "smaller" << endl;
//    }*/
//    do
//    {
//        cout << "please enter your guess number:";
//        cin >> guess;
//        if(guess > num)
//            cout << "bigger" << endl;
//        if(guess < num)
//            cout << "smaller" << endl;
//    }while(guess != num);
//    cout << "congratulations!";
//}

void solve5()
{
    int num1[]={1,2,3,4,5,6,7,8,9};
    double num2[]={1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9};
    cout << sum(num1,1) << endl;
    cout << sum(num2,1);
}

int main()
{
    solve5();
    return 0;
}
