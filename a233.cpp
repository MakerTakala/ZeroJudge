#include <iostream>
#include <vector>
#define MAX 1e11
using namespace std;
void merges(vector<int> &arr,int fnt,int mid,int bak){
    vector<int> left(arr.begin()+fnt,arr.begin()+mid+1),right(arr.begin()+mid+1,arr.begin()+bak+1);
    left.push_back(MAX);
    right.push_back(MAX);
    int l=0,r=0;
    for(int i=fnt;i<=bak;i++){
        if(left[l]<=right[r])
            arr[i]=left[l++];
        else
            arr[i]=right[r++];
    }
}
void mergesort(vector<int> &arr,int fnt,int bak){
    if(fnt<bak){
        int mid=(fnt+bak)/2;
        mergesort(arr,fnt,mid);
        mergesort(arr,mid+1,bak);
        merges(arr,fnt,mid,bak);
    }
}
int main()
{
    int n;
    while(cin>>n){
        vector<int> a(n);
        for(int &x:a)
            cin>>x;
        mergesort(a,0,n-1);
        for(int x:a)
            cout<<x<<" ";
        cout<<endl;
    }

return 0;
}
