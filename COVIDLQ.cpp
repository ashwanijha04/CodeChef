#include<iostream>
#include<vector>

using namespace std;

int main(){

	int T;
	cin >> T;

	while(T--){
		int n;
		cin >> n;
		int a[n];
		vector<int> spots;
		vector<int>::iterator it;

		for(int i=0; i<n; i++){
			cin >> a[i];
			if(a[i]){
				spots.push_back(i);
			}
		}

		int flag=0;

		for(int i=0; i<spots.size()-1; i++){
			if(spots[i+1] - spots[i] < 6){
				flag = 1;
			}
		}

		if(flag){
			cout << "NO" << endl;
		}else{
			cout << "YES" << endl;
		}
	}
}


// https://www.codechef.com/viewsolution/31246285
