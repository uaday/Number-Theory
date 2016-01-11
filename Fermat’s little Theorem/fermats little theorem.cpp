#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int);
bool coPrimes(int, int);
int main(){
    cout<<"Fermats Little Theorem"<<endl;
    cout<<"the law: a^(p-1) is congruent to 1 (mod p)\nwhere p is a prime\n a and p are co primes\n";
    cout <<"input a: ";int a;cin>>a;
    cout<<"\ninput power of a: ";int po; cin>>po;
    cout<<"input p "; int p; cin>>p;

    if(isPrime(p) && coPrimes(a,p)){
        int rest = po%(p-1);
        rest=pow(a,rest);
        rest%=p;
        cout<<a<<'^'<<po<<" is congruent to "<<rest<<" (mod "<<p<<")"<<endl;
    }

    else
        cout<<"check the inputs";

    return 0;
}
bool isPrime(int p){
    for(int i=2; i<p/2; i++)
        if(p%i==0)
            return false;

    return true;
}

bool coPrimes(int a, int p){
    for(int i=2; i<=a; i++)
        if(a%i==0&&p%i==0)
            return false;

    return true;
}
