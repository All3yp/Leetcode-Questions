#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, MAX = 0;
	cin >> n;
	vector<int> arr(n);
	for(int i = 0; i < n; i++) cin >> arr[i];
	for(int i = 0; i < n; i++){
		if(arr[i] > MAX) MAX = arr[i];
	}
	cout << max;
	return 0;
}