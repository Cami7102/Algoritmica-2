#include <bits/stdc++.h>
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std;

int esValido([][] tablero){
    // true es valido
    // false no es valido
}

solve4Queen(int total, [][]tablero){
    if(!esValido(tablero)){
        return;
    }
    if (total == 4){
        printf(tablero);
    }
    for(row = 0; row < 4; row++){
        for(colum = 0; colum < 4; colum++){
            if(tablero[row][colum] == 0){
                tablero[row][colum] == 1;
                if(esValido(tablero)){
                    solve4Queen (total + 1, tablero);
                    else{
                        tablero[row][colum] == 0;
                    }
                }
            }
        }
    }
}
