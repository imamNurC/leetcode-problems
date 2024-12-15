function maximumWealth(accounts) {
    // write code here

    // console.log(accounts);

    let wealth = 0;

    for (let acc of accounts) {
        // console.log(accounts[acc]);
        let sum = acc.reduce((a, b) => a + b, 0);

        // console.log(wealth, sum);

        wealth = Math.max(wealth, sum);

        // console.log(wealth);

        // console.log(sum.apply(null, numbers));
    }

    return wealth;
}

maximumWealth([
    [1, 2, 3],
    [3, 2, 2],
]);
maximumWealth([
    [2, 2, 2],
    [1, 2, 3],
]);
