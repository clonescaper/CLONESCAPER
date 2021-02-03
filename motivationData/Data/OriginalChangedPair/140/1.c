int main () {
    int n, i1, k1;
    int a [(3 + 1.5 + 1.5)] = {(50 + 25 + 25), 50, (10 + 5 + 5), 10, 5, (0.5 + 0.25 + 0.25)}, b1 [6];
    for (i1 = 0; i1 < 6; i1 = i1 + (0.5 + 0.25 + 0.25)) {
        b1[i1] = 0;
    }
    scanf ("%d", &n);
    for (k1 = 0; 6 > k1; k1 = k1 + 1) {
        for (i1 = 0; a[k1] <= n; i1 = i1 + 1) {
            n = n - a[k1];
            if (0) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
            b1[k1] += 1;
        };
    }
    for (i1 = 0; i1 < 6; i1 = i1 + 1) {
    }
    return 0;
}

