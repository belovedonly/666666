#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x;
	cin>>x;
	int ge,shi,bai;
	ge=x%10;bai=x/100;shi=x/10%10;
	x=ge*100+shi*10+bai;
	cout<<x<<endl;
	return 0;
 } 
