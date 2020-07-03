/*
Given two integers ‘a’ and ‘m’. The task is to find modular multiplicative inverse of ‘a’ under modulo ‘m’.
Note: Print the smallest modular multiplicative inverse.
*/

#include<iostream>
using namespace std;


int d, x, y;
void extendedEuclid(int A, int B) {
    if(B == 0) {
        d = A;               //d is GCD of(A,B)
        x = 1;
        y = 0;
    }
    else {
        extendedEuclid(B, A%B);
        int temp = x;
        x = y;
        y = temp - (A/B)*y;
    }
}

int GCD(int A, int B) {
    if(B==0)
        return A;
    else
        return GCD(B, A % B);
}


int modInverse(int a, int M)
{
    if(M==1)
        return -1;
    
    if(GCD(a,M)==1){
    extendedEuclid(a, M);
    return (x%M+M)%M;
    }else
        return -1;
}

int main()
{
	int T;
	cin>>T;
	while(T--){
		int a,m;
		cin>>a>>m;
		cout << modInverse(a, m)<<endl;
	}
    return 0;
}  