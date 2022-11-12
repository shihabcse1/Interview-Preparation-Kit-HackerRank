/*
 * Complete the 'maximumToys' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY prices
 *  2. INTEGER k
 */

int maximumToys(vector<int> prices, int k) {
    
    int price_arr_lengh = prices.size();
    int temp_price = 0, count = 0;
    
    
    sort(prices.begin(), prices.begin() + price_arr_lengh);
    
    temp_price = prices[0];
    
    for(int i = 0; i < price_arr_lengh; i++) {
        if(temp_price + prices[i] <= k) {
            temp_price += prices[i];
            count++;
        }
    }
    return count;
}