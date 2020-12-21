#include <bits/stdc++.h>
using namespace std;
typedef struct
{
    double xs;
    double zs;
} Term;
typedef struct ploy
{
    Term term;
    ploy *next;
} ploy, *numline;
void Li(numline &L)
{
    L = (ploy *)malloc(sizeof(ploy));
    L->term.xs = 0.0;
    L->term.zs = -1;
    L->next = NULL;
}
int cmp(Term a, Term b)
{
    if (a.zs < b.zs)
        return 1;
    else if (a.zs == b.zs)
        return 0;
    else
        return -1;
}
void in(numline &L, Term e)
{
    ploy *q = L;
    while (q->next != NULL)
    {
        if (cmp(q->next->term, e) < 0)
            q = q->next;
        else
            break;
    }
    if (q->next != NULL && cmp(q->next->term, e) == 0)
    {
        q->next->term.xs += e.xs;
    }
    else
    {
        ploy *node = (ploy *)malloc(sizeof(ploy));
        node->term.xs = e.xs;
        node->term.zs = e.zs;
        if (q->next == NULL)
            node->next = NULL;
        else
            node->next = q->next;
        q->next = node;
    }
}
void CP(numline &L, int m)
{

    Term e;
    Li(L);
    for (int i = 1; i <= m; i++)
    {
        cin >> e.xs >> e.zs;
        in(L, e);
    }
}
void add(numline &L1, numline &L2)
{
    ploy *q;
    for (q = L2->next; q != NULL; q = q->next)
    {
        in(L1, q->term);
    }
    free(L2);
}
void SubtracatPolyn(numline &L1, numline &L2)
{
    ploy *q;
    for (q = L2->next; q != NULL; q = q->next)
    {
        q->term.xs = -(q->term.xs);
        in(L1, q->term);
    }
    free(L2);
}
void printIt(numline L)
{
    ploy *q = L;
    while (q->next != NULL)
    {
        q = q->next;
        if (q->term.xs != 0)
        {
            cout << q->term.xs << " " << q->term.zs << endl;
        }
    }
}
int main()
{
    numline L1, L2;
    int n1, n2;
    cin >> n1 >> n2;
    CP(L1, n1);
    CP(L2, n2);
    add(L1, L2);
    printIt(L1);
    return 0;
}