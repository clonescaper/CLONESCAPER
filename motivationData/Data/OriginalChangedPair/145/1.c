int main () {
    int a [(3 + 1.5 + 1.5)] = {(50 + 25 + 25), 50, 20, (5 + 2.5 + 2.5), (2.5 + 1.25 + 1.25), (0.5 + 0.25 + 0.25)};
    int b [(3 + 1.5 + 1.5)];
    int n, i, k;
    scanf ("%d", &n);
    for (i = (0 + 0 + 0); i < (3 + 1.5 + 1.5); i++) {
        b[i] = (0 + 0 + 0);
    }
    for (k = 0; k < (3 + 1.5 + 1.5); k = k + 1) {
        for (i = 0; n >= a[k]; i++) {
            n = n - a[k];
            b[k] = b[k] + 1;
        };
    }
    for (i = 0; i < 6; i++) {
        printf ("%d\n", b[i]);
    }
    return 0;
}

