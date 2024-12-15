function maxProfit(prices) {
    // write code here
    if (prices.length < 2) {
        return 0;
    }

    let maks = 0;
    let minPrice = prices[0];
    // console.log(Math.min(0, -4));

    for (let i = 0; i < prices.length; i++) {
        minPrice = Math.min(minPrice, prices[0]);
        maks = Math.max(maks, prices[0] - minPrice);
        // const element = array[];
    }

    console.log(maks);

    // console.log(maks > 0 ? maks : 0);

    return maks > 0 ? maks : 0;
}

maxProfit([7, 1, 5, 3, 6, 4]);
// maxProfit([8, 4, 3, 2, 1]);
// maxProfit([7, 2, 4, 1, 6, 5]);
// maxProfit([3, 3, 3, 3, 3]);
