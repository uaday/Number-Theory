#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

 int main(){
    vector<int>v1;
    input:
    cout<<"input an even integer (>4) : ";
    int l;cin>>l;

    if(l<=4 || l%2!=0)
        goto input;

    for(int i=3; i<l; i=i+2){int flag=1;
        for(int j=2;j<i; j++)
            if(i%j==0){
                flag=0; break;}
        if(flag)
            v1.push_back(i);
    }

   for(vector<int>::iterator i=v1.begin();i<v1.end(); i++)
        cout<<*i<<" ";
        cout<<endl;

    for(int i=0; i!=v1.size(); i++)
         for(int j=v1.size(); j!=-1; j--)
            if(v1[i]+v1[j]==l ){
                cout<<v1[i]<<" + "<<v1[j]<<" = "<<l<<endl;
                v1[j]=-1;
                //vector<int>::iterator it = find(v1.begin(),v1.end(),v1[j]);
                //v1.erase(it);
            }
    return 0;
 }
