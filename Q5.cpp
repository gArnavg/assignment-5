/*Display this GP - 3,12,48,.. upto ‘n’ terms.*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
    cout<<"Enter The Number ";
	cin >> n;
	int start = 3, r = 4;
	while (n--) {
		cout << start << " "<<endl;
		start *= r;
	}
}