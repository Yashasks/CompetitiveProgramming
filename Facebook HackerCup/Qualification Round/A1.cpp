    
/*
    *********************
    * author : Yashas K S
    * created: 29:08:2021
*/

#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

#define pb push_back
#define sclf(t) scanf("%lf",&t)
#define rep(i,n) for(int i=0;i<n;i++)
#define repk(i,k,n) for(int i=k;i<n;i++)
#define range(c) for(auto& it : c)
#define odd(a)  ((a) & 1)
#define all(cont) cont.begin(), cont.end()


typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<pii> vpii;
typedef vector<vi> vii;
typedef map<int,int> mpii;
typedef set<int> seii;
typedef multiset<int> mseti;


template<typename T>
bool isVowel(T ch){
    if(ch=='A' or ch=='E' or ch =='I' or ch== 'O' or ch=='U'){
        return true;
    }
    else{
        return false;
    }
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    int z=1;
    while(t--){
        //each test case
        int cc=0, vc=0;
        string s;

        //take the input from the user
        cin>>s;
        //map the frequencies of character from string s
        map<char, int> vo;
        map<char, int> co;

        vi v;
        for(char c: s){
            if(isVowel(c)){
                vc++;
                vo[c]++;
            }
            else{
                cc++;
                co[c]++;
            }
        }
        //set to hold the frequencies in descending order
        set<int , greater<int>> s1_constant;
        set<int , greater<int>> s2_vowel;

        for(auto i:co){
            s1_constant.insert(i.second);
        }
        for(auto i:vo){
            s2_vowel.insert(i.second);
        }


        int cost=0;
        //if string is consistent 
        if((vo.size()==1 and co.size()==0) or( vo.size()==0 and co.size()==1) ){
            cout<<"Case #"<<z<<": 0"<<endl;
            z++;
            continue;
        }
        if(vo.size()==0)
        {
            cout<<"Case #"<<z<<": "<<cc<<endl; 
        }
        else if(co.size()==0)
        {
            cout<<"Case #"<<z<<": "<<vc<<endl; 
        }
        else{
            auto max1=s1_constant.begin();
            auto max2=s2_vowel.begin();
            v.pb(2*(cc-(*max1))+vc);
            v.pb(2*(vc-(*max2))+cc);
            int cost=*min_element(all(v));
            cout<<"Case #"<<z<<": "<<cost<<endl;
        }
        z+=1;
    }
    return 0;
}