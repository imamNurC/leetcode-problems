function getSmallestString(n, k) {
    let hasil = "";
    let alfabet = "abcdefghijklmnopqrstuvwxyz";

    console.log(n, k);

    k -= n;

    console.log(Math.min(k, 25), k);

    while (n > 0) {
        let nilaiMax = Math.min(k, 25);
        hasil = alfabet[nilaiMax] + hasil; // concat => alfabet[max]+"" = ay +""
        k -= nilaiMax; // dibersihkan atau selalu kembalikan ke minimum yakni indeks dari 0
        n--;
    }

    console.log(hasil);

    return hasil;
}

// n => length of string n=3, "aaa"
// k => jumlah n konversi dari huruf jadi angka: a:1, b:2, ..z:16
getSmallestString(3, 27);
