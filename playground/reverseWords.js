function reverseWords(words) {
    // write code here

    wor = words.trim().split(/\s+/);

    return wor.reverse().join(" ");
}

reverseWords("is good");
reverseWords("good        morning");
