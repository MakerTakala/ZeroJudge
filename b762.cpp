#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    string command;
    int t,continuous_kill=0,kill=0,assist=0,die=0;
    cin>>t;
    while(t--){
        cin>>command;
        if(command=="Get_Kill"){
            kill++;
            continuous_kill++;
            if(continuous_kill<3)
                cout<<"You have slain an enemie.";
            else if(continuous_kill==3)
                cout<<"KILLING SPREE!";
            else if(continuous_kill==4)
                cout<<"RAMPAGE~";
            else if(continuous_kill==5)
                cout<<"UNSTOPPABLE!";
            else if(continuous_kill==6)
                cout<<"DOMINATING!";
            else if(continuous_kill==7)
                cout<<"GUALIKE!";
            else
                cout<<"LEGENDARY!";
        }
        else if(command=="Get_Assist")
            assist++;
        else{
            die++;
            if(continuous_kill<3)
                cout<<"You have been slained.";
            else
                cout<<"SHUTDOWN.";
            continuous_kill=0;
        }
        cout<<endl;
    }
    printf("%d/%d/%d",kill,die,assist);
return 0;
}
