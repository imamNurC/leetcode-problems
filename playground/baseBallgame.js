var calPoints = function (operations) {
    let stack = [];

    // console.log(operations);

    for (let op of operations) {
        if (op === "C") {
            stack.pop(); // Remove the last score
        } else if (op === "D") {
            stack.push(stack[stack.length - 1] * 2); // Double the last score
        } else if (op === "+") {
            let last = stack[stack.length - 1];
            let secondLast = stack[stack.length - 2];
            stack.push(last + secondLast); // Sum of the last two scores
        } else {
            stack.push(parseInt(op)); // Convert the string to an integer and add it
        }
    }

    // console.log(stack);
    // stack;
    // let summ = [];

    // for (let i = 0; i < stack.length; i++) {
    //     summ += parseInt(stack[i]);
    // }
    // console.log(summ);

    console.log(stack.reduce((sum, score) => sum + score, 0));

    // Sum up all the scores in the stack
    return stack.reduce((sum, score) => sum + score, 0);
};

// calPoints(["5", "2", "C", "D", "+"]);

// calPoints(["5", "-2", "4", "C", "D", "9", "+", "+"]);

// calPoints(["1", "C"]);
