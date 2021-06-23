    
/*
    author : Yashas K S
    created : 13:05:2021
    
*/

#include <stdio.h>
#include<stdlib.h>

#define ll long long

int gcd(int a, int b)
{

    if (a == 0)
       return b;
    if (b == 0)
       return a;
 

    if (a == b)
        return a;
 

    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

int main()
{
    
    
    ll t;
    scanf("%ld",&t);
    while (t--)
    {
        ll k;
        scanf("%ld",&k);
        ll sum=0;
        
        
        for(ll i=1;i<=2*k;i++)
        {
            sum+=gcd(k+i*i,k+(i+1)*(i+1));
        
        }
        printf("%ld\n",sum);


    }
    return 0;
}