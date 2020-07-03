/*
Given a positive integer value N. 
The task is to find how many numbers less than 
or equal to N have numbers of divisors exactly equal to 3.
*/

#include <bits/stdc++.h>
using namespace std;


bool isPrime(int n)
{
    if(n<=1)
    return false;
    
    for(int i=2;i<=sqrt(n);i++)
    if(n%i==0)
    return false;
    
    return true ;
}

int exactly3Divisors(int N)
{
    int counter=0; //Initializing counter to zero
    N = sqrt(N);
        
    for(int i=1;i<=N;i++) //running a loop from 1 to N
    {
        
        if(isPrime(i)) 
        counter++;
    }
    return counter;
}

int main()
 {
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        cout<<exactly3Divisors(N)<<endl;
    }
	return 0;
} 