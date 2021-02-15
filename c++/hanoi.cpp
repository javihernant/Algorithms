#include <iostream>
#include <math.h>
#include <bits/stdc++.h>

using namespace std;

int solveHenoi(int n, int src, int dest){
    if (n < 2){
        cout<<src<<" >>> " << dest << "\n";
        return 1;

    }else{
        int moves = 0;
        int dest_aux = -1;
        for (int i=1; i<=3; i++){
            if (i!=src && i!=dest){
                dest_aux = i;
                break;
            }
        }


        moves = solveHenoi(n-1,src,dest_aux);

        cout<<src<<" >>> " << dest << "\n";
        moves ++;
        moves += solveHenoi(n-1,dest_aux,dest);

        return moves;
    }

}


int main()
{
    int moves = solveHenoi(4,1, 3);
    cout << "total moves: " << moves;


    return 0;

}
