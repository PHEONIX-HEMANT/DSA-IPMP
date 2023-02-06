#include<bits/stdc++.h>

using namespace std;

int getOdd(vector<int> a){
    for (int i = 0; i < a.size(); i++) {
        int count=0;
        for (int j = 0; j < a.size(); j++) {
            if(a[j]==a[i])
                count++;
        }
        
        if(count%2)
            return a[i];
    }
    
    return -1;
}

int main()
{
    vector<int> a;
    int size;
    cin>>size;

    for (int i = 0; i < size; i++)
    {
        cin>>a[i];
    }
    
    
    cout<<getOdd(a)<<endl;

    return 0;
}