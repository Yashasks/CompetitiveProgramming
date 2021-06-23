	
/*
	author : Yashas K S
	created : 13:05:2021
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int countx,counto,count_,winx,wino;
char a[3][3];

//for condition 1
void countwin(char a[][3])
{
	for(int i=0;i<3;i++)
		{
			if(a[i][0]=='X' && a[i][1]=='X' && a[i][2]=='X' && a[i][1]=='X') 
			{
			 	winx+=1;
			 }
			else if(a[i][0]=='O' && a[i][1]=='O' && a[i][2]=='O' && a[i][1]=='O') 
		 	{
		 		wino+=1;
		 	}

			
		}
		for(int i=0;i<3;i++)
		{
			if(a[0][i]=='X' && a[1][i]=='X' && a[2][i]=='X' && a[1][i]=='X') 
				{
					winx+=1;
				} 
			if(a[0][i]=='O' && a[1][i]=='O' && a[2][i]=='O' && a[1][i]=='O') 	
				{ 
					wino+=1;
				}
				
		
		}
		if(a[0][0]=='X' && a[1][1]=='X' && a[2][2]=='X') 
		

		 { 
		 	winx+=1;
		 }
		else if(a[0][0]=='O' && a[1][1]=='O' && a[2][2]=='O') 
		 
		 { 
		 	wino+=1;
		 } 
		
		if(a[0][2]=='X' && a[1][1]=='X' && a[2][0]=='X' && a[1][1]=='X') 
		
			{ 
				winx+=1;
			} 
		else if(a[0][2]=='O' && a[1][1]=='O' && a[2][0]=='O' && a[1][1]=='O') 
			{
				wino+=1;
			}
}



//main function
int main()
{
	
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	//test cases
	while (t--)
	{
		//assign 0 for each iteration
		countx=0,counto=0,count_=0;
		winx=0,wino=0;
		
		//take input and count frequency of characters
		for(int i=0;i<3;i++)
			for(int j=0;j<3;j++)
			{
				cin>>a[i][j];
				if('X' == a[i][j])
           			++countx;
       			else if('O' == a[i][j])
       				++counto;
       			else
       				++count_;
			}

			//call countwin to assign values for winx and wino
		countwin(a);
		
		
		//main logic
		if(counto>countx)
		{
			cout<<3<<"\n";
		}
		else if(countx-counto>1 || countx-counto<0)
		{
			cout<<3<<"\n";
		}
		else if(countx>counto && winx==1 && wino==0)
			{
				cout<<1<<"\n";
			}
			
		
		else if(countx==counto && winx==0 && wino==1)
		{
			
		
				cout<<1<<"\n";
			
		}
		else if(count_==0 && winx+wino==0)
		{
			
				cout<<1<<"\n";
			
		}
		else if(count_==0 && winx==2)
		{
			cout<<1<<"\n";
			
		}
		else if(count_>0 && winx+wino==0)
		{
			
				cout<<2<<"\n";
			
		}
		else
		{
			cout<<3<<"\n";
		}



	}
	return 0;
}