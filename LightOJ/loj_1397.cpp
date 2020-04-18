#include<bits/stdc++.h>
#define N 9
#define UNASSIGNED 0
using namespace std;
 
bool FindUnassignedLocation(int grid[N][N], int &row, int &col);
bool isSafe(int grid[N][N], int row, int col, int num);
 
bool SolveSudoku(int grid[N][N]) {
    int row, col;
 
    if(!FindUnassignedLocation(grid, row, col)) return true;
 
    for(int num=1; num<=9; num++){
        if(isSafe(grid, row, col, num)){
            grid[row][col] = num;
 
            if(SolveSudoku(grid)) return true;
 
            grid[row][col] = UNASSIGNED;
        }
    }
 
    return false;
}
 
bool FindUnassignedLocation(int grid[N][N], int &row, int &col) {
    for(row=0; row<N; row++){
        for(col=0; col<N; col++){
            if(grid[row][col] == UNASSIGNED) return true;
        }
    }
    return false;
}
 
bool UsedInRow(int grid[N][N], int row, int num) {
    for(int col=0; col<N; col++){
        if(grid[row][col] == num) return true;
    }
    return false;
}
 
bool UsedInCol(int grid[N][N], int col, int num) {
    for(int row=0; row<N; row++){
        if(grid[row][col] == num) return true;
    }
    return false;
}
 
bool UsedInBox(int grid[N][N], int boxStartRow, int boxStartCol, int num) {
    for(int row=0; row<3; row++){
        for(int col=0; col<3; col++){
            if(grid[row+boxStartRow][col+boxStartCol] == num) return true;
        }
    }
    return false;
}
 
bool isSafe(int grid[N][N], int row, int col, int num)   {  
    return !UsedInRow(grid, row, num) &&  
           !UsedInCol(grid, col, num) &&  
           !UsedInBox(grid, row - row % 3 , col - col % 3, num) &&  
            grid[row][col] == UNASSIGNED;  
}
 
void printGrid(int grid[N][N]) {
    for (int row = 0; row < N; row++)  
    {  
    for (int col = 0; col < N; col++)  
            cout << grid[row][col];  
        cout << endl;
    }  
}
 
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    //freopen("inputs.txt", "r", stdin);
 
    int test; cin>>test;
    int ara[N][N];
 
    int k = 1;
    while(test--){
        char s;
        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                cin>>s;
                if(s == '.') ara[i][j] = 0;
                else ara[i][j] = s - '0';
            }
        }
        cout<<"Case "<< k <<":\n";
   
        /*for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                cout<<ara[i][j]<<" ";
            }
            cout<<endl;
        }*/
   
 
        if(SolveSudoku(ara) == true) printGrid(ara);
            k++;
    }
 
    return 0;
}