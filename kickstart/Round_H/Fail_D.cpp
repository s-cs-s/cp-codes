
#include<bits/stdc++.h>
using namespace std;

const unsigned int mod = 1e9+7;

// To find GCD of a and b
int gcd(int a, int b);

// To compute x raised to power y under modulo m
int power(int x, unsigned int y, unsigned int m);

// Function to find modular inverse of a under modulo m
// Assumption: m is prime
int modInverse(int a,int m)
{
	// int g = gcd(a, m);
	// if (g != 1)
	// 	cout << "Inverse doesn't exist";
	// else
	// {
	// 	// If a and m are relatively prime, then modulo
	// 	// inverse is a^(m-2) mode m
	// 	// cout << "Modular multiplicative inverse is "
	// 	// 	<< power(a, m - 2, m);
    //     return power(a, m - 2, m);
	// }
    return power(a, m - 2, m);
}

// To compute x^y under modulo m
int power(int x, unsigned int y, unsigned int m)
{
	if (y == 0)
		return 1;
	int p = power(x, y / 2, m) % m;
	p = (p * p) % m;

	return (y % 2 == 0) ? p : (x * p) % m;
}

// Function to return gcd of a and b
int gcd(int a, int b)
{
	if (a == 0)
		return b;
	return gcd(b % a, a);
}

// Driver code
// int main()
// {
// 	int a = 3, m = 11;

// 	// Function call
// 	modInverse(a, m);
// 	return 0;
// }





int main(){
    int T;cin>>T;
    for(int t=1;t<=T;t++){
        int ans = 0;
        int n,q;
        cin>>n>>q;
        long long pa[n+1],a[n+1],b[n+1];
        long long r[q];
        int k;
        cin>>k;

        for(int i=2;i<n+1;i++){
            cin>>pa[i]>>a[i]>>b[i];
        }
        for(int i=0;i<q;i++){
            int uj,vj;
            cin>>uj>>vj;
            r[i]=1;
            
        }
        cout<<"Case #"<<t<<": ";
        for(int i=0;i<q;i++){
            cout<<r[i]<<" ";
        }
        cout<<"\n";
        cout<<modInverse(5, mod)<<endl;
    }
}

