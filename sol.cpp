#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);                                                              
	int n;
	cin >> n;
	string s;
	cin >> s;
	string ans = "";
	for (int i = 0; i < n; i++) {
		if (s[i] == 'o') {           
			// check the substrings that start with 'o'
			// create a pointer that points to the pattern "gogo..."
			int j = i + 1;
			int x = 1;
			while (s[j] == (x & 1 ? 'g' : 'o')) {								
				x++;
				j++;				
			}      
			// if the pointer stopped at "g", then decrement it (it must stop at 'o')
			if (x % 2 == 0) {
				j--;
			}
			// the substring formed must have a length that is greater than or equal to 3
			// otherwise, simply add the current character
			if (x >= 3) { 
     		ans += "***";
     		i = j - 1;
     	} else {
     		ans += string(1, s[i]);
     	}
		} else {
			// simply append the current the character
			ans += string(1, s[i]);
		}
	}
	cout << ans << '\n';
	return 0;
}