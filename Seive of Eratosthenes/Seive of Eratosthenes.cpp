#include <iostream>
#include <cmath>
using namespace std;

void Seive(int *arr, int n){

    for(int i=0; i<n; i++)                                        /// set the values,
        arr[i]=i;                                                       /// some prefers to use 0 or 1 instead

///lets assume all elements are prime. we will replace not prime numbers with zeros

    arr[0]=arr[1]=0; ///0 and 1 isn't prime

    for(int i=4; i<n; i+=2)                        ///expect 2, no even number can be prime
        arr[i]=0;                                        ///lets replace all the multiples of 2 with zero

    ///we don't have to worry about any even numbers now
    ///now we will start from 3 and put 0 to all is multiples and keep doing the same step
    ///till the square root of our n. why "square root"?? find the answer below this code

for(int i=3; i<=sqrt(n); i+=2)              ///for the next odd numbers, we are incrementing i with 2;
        if(arr[i]!=0)                               ///checking if it was previously declared "not prime"
            for(int j=i*i; j<n; j+=i+i)      ///if i=3 then j=3*3=9 and 9 (multiple of 3) isn't prime.
                    arr[j]=0;                     ///adding j=9 with i+i=3+3=6, so j=15, (multiple of 3)


}

int main()
{
   int n;
   cin>>n;
   int arr[n];

   Seive(arr, n);

   for(int i=0; i<n; i++)
      cout<<arr[i]<<" ";
    return 0;
}
