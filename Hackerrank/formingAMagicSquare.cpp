#include<bits/stdc++.h>
using namespace std; 

int formingaMagicSquare(vector<vector<int>>ara) {
    // all posible combinations of magic square.
    int magic[8][3][3] = {          
            {{8,1,6},{3,5,7},{4,9,2}},
	    {{6,1,8},{7,5,3},{2,9,4}},
	    {{4,9,2},{3,5,7},{8,1,6}},
	    {{2,9,4},{7,5,3},{6,1,8}},
	    {{8,3,4},{1,5,9},{6,7,2}},
	    {{4,3,8},{9,5,1},{2,7,6}},
	    {{6,7,2},{1,5,9},{8,3,4}},
	    {{2,7,6},{9,5,1},{4,3,8}}
	}; 

    int a[8];
    for(int k=0; k<8; k++){
        a[k] = 0;
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                a[k] += abs(ara[i][j] - magic[k][i][j]);
            }
        }
    }
    
    int min_val = a[0];
    for(int i=0; i<8; i++){
        if(a[i] < min_val) min_val = a[i];
    }

    return min_val;
}

int main() {
    //freopen("input.txt", "r", stdin);

    vector<vector<int>> ara(3, vector<int>(3));

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>ara[i][j];
        }
    }
    int ans = formingaMagicSquare(ara);
    cout<<ans<<endl;
   
    return 0;
}
















