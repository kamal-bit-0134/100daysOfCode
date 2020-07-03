//Program for number of digits in a factorial

#include<bits/stdc++.h>
using namespace std;


double digitsInFactorial(int N)
{
   
    double res = 0;
    for(int i=1;i<=N;i++){
        res+= log10(i);
    }
    return (floor(res)+1);
}


int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        cout<<digitsInFactorial(N)<<endl;
    }
    return 0;
}
