#include<iostream>
using namespace std;

int main(){
	int x;
	double y;

	cin >> x >> y;


	if(x%5==0 && x<y){
		y = y-x-0.5;
	}

	printf("%.2lf",y);
}