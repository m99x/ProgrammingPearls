// サンプルコード

for i = [0, gcd(rotdist, n))
    /* i番目の要素のグループを動かす */
    t = x[i]
    j = i
    loop
        k = j + rotdist
        if k >= n
            k -= n
        if k == i
            break
        x[j] = x[k]
        j = k
    x[j] = t
