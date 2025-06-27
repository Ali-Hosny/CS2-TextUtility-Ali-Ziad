#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void SOLVE() {

    string input;
    int upper=0, lower=0;

    cin >> input;

    for(int i=0; i<input.length(); i++){
        if(isupper(input[i])) upper++;
        else lower++;
    }

    if(upper>lower){

        for(int i=0; i<input.length(); i++){

            if(!isupper(input[i])) (toupper(input[i]));
        }
    }
    else{
        for(int i=0; i<input.length(); i++){

            if(isupper(input[i])) (tolower(input[i]));
        }
    }    
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
    while(t--) {
        SOLVE();
    }
    return 0;
}