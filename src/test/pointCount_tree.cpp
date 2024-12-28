#include<iostream>
#include<cstring>
using namespace std;
int a,b,c;//a、b、c分别表示度为0、1、2的结点个数
typedef struct BiTNode
{
    char data;
    struct BiTNode *lchild,*rchild;
}BiTNode,*BiTree;
void CreateBiTree(BiTree &T,char S[],int &i)
{
    if(S[i]=='0')
        T=nullptr;
    else
    {
        T=new BiTNode;
        T->data=S[i];
        CreateBiTree(T->lchild,S,++i);
        CreateBiTree(T->rchild,S,++i);
    }
}
void Count(BiTree T)
{
    if(T != nullptr)
    {
        if(T->lchild && T->rchild)
            c++;
        else if(T->lchild || T->rchild)
            b++;
        else
            a++;
        Count(T->lchild);
        Count(T->rchild);
    }

}
int main()
{
    char S[100];
    while(cin>>S)
    {
        if(strcmp(S,"0")==0) break;
        a=b=c=0;
        int i=-1;
        BiTree T;
        CreateBiTree(T,S,++i);
        Count(T);
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    return 0;
}


