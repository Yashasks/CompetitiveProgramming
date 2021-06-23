	
/*
	author : Yashas K S
	created :
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		char str;
		cin>>str;
		if(str=='B' || str=='b')
			cout<<"BattleShip\n";
		else if(str=='C' || str=='c')
			cout<<"Cruiser\n";
		else if(str=='D' || str=='d')
			cout<<"Destroyer\n";
		else if(str=='F' || str=='f')
			cout<<"Frigate\n";


	}
	
	return 0;
}