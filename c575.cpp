#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n,k;
vector<long long int> serving(n);
bool s(int mid){
    int next,cnt=0;
    for(int i = 0 ; i < n ;){
        next = serving[i] + mid;
        cnt++;
        if(cnt > k)
            return false;
        if( (serving[n - 1] <= next ) && ( cnt <= k ) )
            return true;
        do{
            i++;
        }while(serving[i]<=next);
    }
}
int main()
{
    cin>>n>>k;
    serving.resize(n);
    for(auto &x:serving)
        cin >> x;
    sort( serving.begin() , serving.end() );
    int r=( serving[n-1] - serving[0] ) / k + 1,l=1,mid;
    if(k==1)
        cout << serving[n-1] - serving[0] << endl;
    else{
         while(l < r){
            mid = ( r + l ) / 2;
            if( s(mid) )
                r = mid;
            else
                l = mid+1;
        }
        cout << r << endl;
    }


return 0;
}
