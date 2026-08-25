

class Solution {
public:
    const int M = 1e9+7;
    int findpower(long long a,long long n){
        if(n==0) return 1;
        if(n==1) return a%M;
        if(n%2==0){
            return findpower((a*a)%M,n/2);
        }
        return (a*findpower(a,n-1))%M; 
    }
    int countGoodNumbers(long long n) {
        return (long long)findpower(5,(n+1)/2) * findpower(4,n/2) % M;
    }
};