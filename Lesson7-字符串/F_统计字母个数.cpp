#include<bits/stdc++.h>
using namespace std;
int main()
{
    char r[1000],s[1000],c;
    int a[1000];
    int n,i,j,t=0;
    for(i='a',j=0; i<='z'; i++)
      {
        a[j]=0;
        s[j++]=i;
      }
    int flag=1;
    while(flag!=0&&gets(r)){
    for(j=0; j<strlen(r); j++)
    {
 
        if(r[j]=='#')
             {
            flag=0;
             break;
             }
        for(i=0; i<26; i++)
        {
 
            if(s[i]==r[j]||(r[j]+32)==s[i])
                a[i]++;
        }
    }
    }
    for(i=0; i<26; i++)
    {
        cout<<s[i]<<" "<<a[i]<<endl;
    }
 
    return 0;
}