#include<iostream>
using namespace std;

int main(){

	int T;
	cin >> T;

	while(T--){
		int n;
		cin >> n;

		char s[n];
		cin >> s;

		// Initial standing position = (0,0)
		// => Current cell -> (0,0)

		// 'L' means to go left, i.e. to the cell (x−1,y)
		// 'R' means to go right, i.e. to the cell (x+1,y)
		// 'U' means to go up, i.e. to the cell (x,y+1)
		// 'D' means to go down, i.e. to the cell (x,y−1)

		// For each character in the string, 
		// Check if it is L, R, U or D


		// In addition, Chef should never perform multiple consecutive moves along the same axis of the grid.
		// If there are multiple consecutive instructions to move along 
		// the same axis (left/right or up/down),
		// he should perform only the first of these moves.

		int x = 0;
		int y = 0;

		int current_char = s[0];

		if(current_char == 'L') x = x-1;
		else if(current_char == 'R') x = x+1;
		else if(current_char =='U') y = y+1;
		else if(current_char == 'D') y = y-1;

		for(int i=1; i<n; i++){

			if(s[i] == 'L'){
				if(current_char == 'U' || current_char =='D'){
					current_char = 'L';
					x = x-1;
				}
			}

			else if(s[i] == 'R'){
				if(current_char == 'U' || current_char == 'D'){
					x = x+1;
					current_char = 'R';
				}
			}

			else if(s[i] == 'U'){
				if(current_char == 'L' || current_char =='R'){
					current_char = 'U';
					y = y+1;
				}
			}

			else if(s[i] == 'D'){
				if(current_char == 'L' || current_char =='R'){
					current_char = 'D';
					y = y-1;
				}
			}
		}

		cout << endl << x << " " << y << endl;

	}

	return 0;
}