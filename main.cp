#include<iostream>
using namespace std;
void subset(string s,string curr=" ",int i=0)
{
    if(i==s.length())
    {
        cout<<s<<endl;
        return;
    }
    subset(s,curr,i+1);
    subset(s,curr+s[i],i+1);
}
int main()
{
    subset("ABCD");
    return 0;
}
