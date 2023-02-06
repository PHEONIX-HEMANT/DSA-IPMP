#include<bits/stdc++.h>
using namespace std;

vector<int> leftRotate(vector<int> a,int d){
    //reversing the first d elements
    d=d%a.size();
    
    int end=d-1;
    for(int i=0;i<end;i++,end--){
        swap(a[i],a[end]);
    }

    //reversing last a.size()-d elements
    end=a.size()-1;
    for(int i=d;i<end;i++,end--){
        swap(a[i],a[end]);
    }

    //reversing the complete array
    end=a.size()-1;
    for(int i=0;i<end;i++,end--){
        swap(a[i],a[end]);
    }

    return a;
}
int main()
{
    vector<int> a={1,2,6,4,8,9,3,6};
    int d;
    cin>>d;

    for(auto it : leftRotate(a,d)){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}
