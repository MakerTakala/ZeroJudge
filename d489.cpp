#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a,b,c,S,answer;
	cin>>a>>b>>c;
	S=(a+b+c)/2;
	answer=S*(S-a)*(S-b)*(S-c);
	cout<<answer;
}
