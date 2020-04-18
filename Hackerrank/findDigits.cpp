#include<bits/stdc++.h>
using namespace std;

int main()
{
	//freopen("input.txt", "r", stdin);

	int t; cin>>t;
		while(t--){
		int num;
		cin>>num;

		int n = num;

		vector<int> ara;

		while(n > 0){
			int x = n % 10;
			ara.push_back(x);

			if(x == 0) ara.pop_back();

			n /= 10;
		}

		int size = ara.size();
		//for(int i=0; i<size; i++) cout<<ara[i]<<" "; cout<<endl;

		int cnt = 0;
		for(int i=0; i<size; i++){
			if(num % ara[i] == 0) cnt++;
		}

		cout<<cnt<<endl;
	}

	return 0;
}