#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;

char s1[7] = {'M','D','C','L','X','V','I'};
int n1[7] = {1000,500,100,50,10,5,1};
char s2[6][2] = {{'C','M'},{'C','D'},{'X','C'},{'X','L'},{'I','X'},{'I','V'}};
int n2[6] = {900,400,90,40,9,4};
string s3[13]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
int n3[13]={1000,900,500,400,100,90,50,40,10,9,5,4,1};


int change(string str){
    int address = 0, ans = 0;
    while(address < str.size()){
        bool tag = false;
        for(int i = 0; i < 6; i++){
            if(str[address] == s2[i][0] && str[address + 1] == s2[i][1]){
                ans += n2[i];
                address += 2;
                tag = true;
                break;
            }
        }
        if(tag) continue;
        for(int i = 0; i < 7; i++){
            if(str[address] == s1[i]){
                ans += n1[i];
                address++;
                break;
            }
        }
    }
    return ans;
}
void changen(int num){
    string ans;
    if(num == 0)
        cout << "ZERO" << endl;
    while(num != 0){
        for(int i = 0; i < 13; i++){
            if(num >= n3[i]){;
                ans += s3[i];
                num -= n3[i];
                break;
            }
        }
    }
    cout << ans << endl;
}
int main()
{
    string a,b;
    while(cin >> a){
        if(a == "#") break;
        cin >> b;
        int ans = abs(change(a) - change(b));
        changen(ans);
    }
    return 0;
}
