		
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
		
		
			int n;
			cin>>n;
			
			if(n%4 ==0)
				n++;
			else
				n--;
			cout<<n<<"\n";

		
		return 0;
	}