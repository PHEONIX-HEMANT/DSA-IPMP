#include <iostream>

using namespace std;

int getOdd(int *a,int n){
    for (int i = 0; i < n; i++) {
        int count=0;
        for (int j = 0; j < n; j++) {
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
    int a[]={1, 2, 3, 2, 3, 1,3};
    int size = sizeof(a)/sizeof(a[0]);
    
    cout<<getOdd(a,size)<<endl;

    return 0;
}
