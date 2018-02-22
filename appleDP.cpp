#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int Min(int a,int b)
{
    return (a<b)?a:b;
}
int main()
{
    int t,n,k,temp;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int price[k+1],ans[k+1];
        for(int i = 0; i<k; i++)
        {
            cin>>price[i];
        }
        ans[0] = 0;

//        cout<<"Now we will begin the for loop"<<endl;
        for(int i = 1; i<=k; i++)
        {
            temp = 10000;
            for(int j = 0; j<i; j++)
            {   
                //cout<<"i is: "<<i<<" "<<"and j is: "<<j<<endl;
                if((ans[i-1-j] == -1 || price[j] == -1) != true)
                {
 //                   cout<<"temp: "<<temp<<" "<<"price[j]: "<<price[j]<<" "<<"ans[i-1-j]: "<<ans[i-1-j]<<endl;
 //                   cout<<"temp becomes the min of: "<<temp<<" and "<<price[j]<<" + "<<ans[i-1-j]<<endl; 
                    temp = Min(temp, price[j] + ans[i-1-j]);
                }
            }
            ans[i] = temp;
        }
        if(ans[k] > 1000)
        {
            ans[k] = -1;
        }
        if(k == 0)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<ans[k]<<endl;
        }
    }
    return 0;
}