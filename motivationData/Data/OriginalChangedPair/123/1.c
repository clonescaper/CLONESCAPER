int main () {
    int n, i1, k1;
    int a1 [6] = {100, 50, 20, 10, 5, 1}, b [6];
    scanf ("%d", &n);
    for (i1 = 0; 6 > i1; i1 = i1 + 1) {
        b[i1] = 0;
    }
    for (k1 = 0; 6 > k1; k1 = k1 + 1) {
        if (0) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
        for (i1 = 0; a1[k1] <= n; i1 = i1 + 1) {
            n = n - a1[k1];
            b[k1] = b[k1] + 1;
        };
    }
    for (i1 = 0; i1 < 6; i1 = i1 + 1) {
        printf ("%d\n", b[i1]);
    }
    return 0;
}

