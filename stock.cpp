//make three variables
//buy_price     only update if new price is lower
//current_profit            try to seel if new price>buy price
//max_profit            update max profit when current> max


class Solution {
public:
    int maxProfit(vector<int>& prices) {

        //at teh beginning the min price is the first price,hence 0th term
        int buy_price= prices[0];
        int profit=0;   //beginning , the min profit is 0

        for(int i<1;i<=prices.size();i++){

            //if the current price is less ,update the buy_price
            if(prices[i]<buy_price){
                buy_price= prices[i];


            }else{
                //check if we can get a better profit
                int current_profit= prices[i]-buy_price;
                profit=max(current_profit,profit);
            }
        }
        return profit;
    }
};