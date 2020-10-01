#include <bits/stdc++.h>
#define int long long int
#define mod 1000000007
#define f(i,a,b) for(int i=a;i<b;i++)
#define rf(i,a,b) for(int i=a;i>=b;i--)
#define rep(i,n) f(i,0,n)
#define rrep(i,n) rf(i,n-1,0)
#define w(t) int t; cin>>t; while(t--)
#define vi vector<int>
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define mii map<int,int>
#define mci map<char,int>
using namespace std;

void fast_IO_file()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int32_t main()
{
	fast_IO_file();
	string s;
	cin >> s;

	string a = "0000000", b = "1111111";

	if (s.find(a) != string::npos || s.find(b) != string::npos)
		cout << "YES" << "\n";
	else
		cout << "NO" << "\n";


	return 0;
}