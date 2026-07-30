class Solution {
public:
int nextnumber(int n){
    int sum=0;
    int digit;
    while(n>0){
      digit=n%10;
        sum+=digit*digit;
        n=n/10;
    }
    return sum;
}
    bool isHappy(int n) {
    int slow=n;
    int fast=n;
    
    do{
        slow=nextnumber(slow);
    fast=nextnumber(nextnumber(fast));
    }
    while(slow!=fast);
    return fast==1;
    }
};