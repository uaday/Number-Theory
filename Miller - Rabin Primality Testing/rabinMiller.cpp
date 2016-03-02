#include <iostream>
#include <map>
#include <cmath>
#include <windows.h>
#include <conio.h>
#include <cstdio>
#include <cstdlib>
using namespace std;
void MillerRabinPrimalityTesting(int );
int main();
unsigned long long arr[99999999];
void seive(){
    cout<<"Loading please wait...";

    arr[0]=arr[1]=1;

    for(unsigned long long i=4; i<=99999999; i+=2)
        arr[i]=1;

    for(unsigned long long i=3; i<sqrt(99999999); i+=2)
        if(arr[i]==0)
            for(unsigned long long j=i*i; j<9999999; j+=i+i)
                arr[j]=1;



}

int main()
{
    //system("cls");
    freopen("in.txt","r",stdin);
    int x;
    while(cin>>x){
            if(x==0)break;
   MillerRabinPrimalityTesting(x);
    }
/*    seive();

      system("cls");
    freopen("in.txt","r", stdin);

    while(1){
      long long n;
    cout<<"Enter a Number: ";
        cin>>n;
        if(n==0)break;
        if(arr[n]==0)
            cout<<"the number "<<n<<" is prime.\n";
        else{

            cout<<"the number "<<n<<" isn't a prime.\n";
        }
    }
*/

    return 0;
}



void MillerRabinPrimalityTesting(int n){

    //long long n;cin>>n;
    cout<<"-----------------------------\nInput: "<<n<<endl;
    if(n%2==0 && n!=2){
        cout<<"not prime\n";
       // MillerRabinPrimalityTesting();
    }

    int flag=1,chk;
    long int k=-1,m=0,kk;
    double m2=0;
    while(flag){

        kk=k;

        m2 = (n-1)/pow(2,++k);
        cout<<m2<<endl;
        chk=m2;
        if(chk<m2){
            break;
        }
        else
            m=m2;
    }
    cout<<" m = "<<m<<endl;

    cout<<"the value of k = "<<kk<<endl;
    /*if(k==1){
        cout<<"I'm sorry there! the value of a variable k is 1, thats a lack of this algorithm\n";
        main();
                }*/
    int a =2;
   int  res;

   long long b=pow(2,m);
   int prevRes = b;
   cout<<b<<" === "<<endl;
    res = b%n;

    prevRes=prevRes+1;
        if(prevRes%n==0)
            res=-1;

    if(res==1)
        res=-1;
    //if(b<n)res=1;
    while(flag){cout<<"^res = "<<res<<endl;
        if(res==-1){
            cout<<"prime"<<endl;
            break;
        }
        else if(res==1){
            cout<<"Not prime"<<endl;
            getch();
            break;
        }
        else{
            a++;

            res*=res;
            cout<<" res*=res "<<res<<endl;
            prevRes=res;
            res=res%n;
            cout<<" res=res%n "<<res<<endl;
            if(res==0 ){cout<<"not prime\n";getch();break;}
    if((res+1)==n)
        res=-1;
    if(prevRes==res){ ///if res=res%n;  ex: -> 2=2%5; tit will be equal to prevRes
            prevRes=prevRes+1;
        if(prevRes%n==0)
            res=-1;
        else
             prevRes=prevRes-1;
        }
     if(((prevRes*prevRes)+1)==n)
            res=-1;
     if(prevRes==res && res!=-1){
                res =1;
       }
    if(a>100)res=1;
 }

}


}

