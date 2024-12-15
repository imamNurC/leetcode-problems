var fizzBuzz = function (n) {
    let answer = [];
    for (let i = 1; i <= n; i++) {
        if (i % 3 === 0 && i % 5 === 0) {
            answer.push("FizzBuzz");
            // console.log("FizzBuzz");
        } else if (i % 3 === 0) {
            answer.push("Fizz");
        } else if (i % 5 === 0) {
            answer.push("Buzz");
        } else {
            answer.push(i);
            // console.log(i);
        }
    }
    console.log(answer);
    return answer;
};

fizzBuzz(5);
