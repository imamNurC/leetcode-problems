function partition(s) {
    // console.log(s);

    result = [];

    // abba => a -> b , b , a
    //      => a -> bb, a
    //      => ab -> X,
    //      => abb -> X
    //      => abba -> abba
    // result => [ [a, b,b, a ], [a, bb, a], [abba] ]

    // return true or false to check whether is palindrome or not
    function isPaindrome(str) {
        // console.log(str);

        return str == str.split("").reverse().join(""); // => a a , a a, aa
    }

    function bactrack(start, path) {
        // console.log(start, path);

        if (s.length === start) {
            result.push([...path]);
            return;
        }
        for (let end = start + 1; end <= s.length; end++) {
            // console.log(end); // 1, 2, 3
            // console.log(s);

            // console.log(substring);

            let substring = s.slice(start, end);
            if (isPaindrome(substring)) {
                path.push(substring);
                // console.log(path);
                bactrack(end, path);
                path.pop(end);
            }
        }
    }

    bactrack(0, []);
    return result;
}

const inp2 = "abba";
partition(inp2);
