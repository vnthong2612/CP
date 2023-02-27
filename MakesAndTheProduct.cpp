#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n;
	cin >> n;
	int a[n+10];
	map<int, int> mp;

	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin >> a[i];
		mp[a[i]]++;
	}
	
	long long ans, k;
	auto itr = mp.begin();
	if(itr->second  > 2){
		k = (int)(itr->second);
		ans = 1ll*(k*(k-1)*(k-2)) / 6;

		//return 0;
	}else if(itr->second == 1){
		itr++;
		if(itr->second == 1){
			itr++;
			ans=(itr->second);
			
		}else{
			k = (int)(itr->second);
			ans =(k*(k-1))/4;
		}
	}else{
		itr++;
		ans=(itr->second);
		
	}
	cout << ans;
	return 0;


	
	
	return 0;
	

}