#include<vector>
#include <bits/stdc++.h>
int countPrimes(int n) {
    int cnt = 0;
    std::vector<bool> prime(n+1, true);
    prime[0]= prime[1] = false;

    for(int i=2; i<n; i++) {
        if(prime[i]){
            cnt++;
            for(int j=2*i;j<n;j++){
                prime[j] =0;
            }
        }
    }
return cnt;

}