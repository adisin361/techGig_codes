#include<bits/stdc++.h>
using namespace std;
int prec(char ch)
{
    if(ch == '^')
        return 3;
    else if(ch == '*' || ch == '/')
        return 2;
    else if(ch == '+' || ch == '-')
        return 1;
    else
        return -1;
}

string infix_to_prefix(string s)
{
    string res;
    stack<char>st;
    reverse(s.begin(), s.end());
    for(int i=0;i<s.length();i++)
    {
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
            res+=s[i];
        else if(s[i]==')')
            st.push(s[i]);
        else if(s[i]=='(')
        {
            while(!st.empty() && st.top()!=')')
            {
                res+=st.top();
                st.pop();
            }

            if(!st.empty())
                st.pop();
        }

        else
        {
            while(!st.empty() && prec(st.top())>prec(s[i]))
            {
                res+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty())
    {
        res+=st.top();
        st.pop();
    }

    reverse(res.begin(), res.end());
    return res;
}

int main()
{
    cout<<infix_to_prefix("(a-b/c)*(a/k-l)");
    return 0;
}