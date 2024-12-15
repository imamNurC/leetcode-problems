var diffWaysToCompute = function (expression) {
    // console.log(expression);

    // memoize
    const mem = new Map();

    function dfs(expr) {
        console.log(expr);

        // this active when recurrsion started
        if (!isNaN(expr)) {
            return [Number(expr)];
        }

        if (mem.has(expr)) {
            return mem.get(expr);
        }
    }
    return dfs(expression);
};

diffWaysToCompute("2-1-1");
