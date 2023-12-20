class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(), prices.end());
        int sum=prices[0]+prices[1];
        if(sum>money) return money;
        money-=sum;
        return money;
    }
};