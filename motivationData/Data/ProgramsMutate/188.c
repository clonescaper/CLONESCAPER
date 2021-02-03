int main () {
    int a [(3 + 1.5 + 1.5)] = {100, 50, 20, 10, 5, (0.5 + 0.25 + 0.25)};
    int b [(3 + 1.5 + 1.5)];
    int n1;
    int i1;
    int k1;
    scanf ("%d", &n1);
    for (i1 = 0; 6 > i1; i1 = i1 + 1) {
        b[i1] = 0;
    }
    for (k1 = 0; k1 < 6; k1++) {
        for (i1 = 0; n1 >= a[k1]; i1 = i1 + 1) {
            n1 = n1 - a[k1];
            b[k1] += 1;
        };
    }
    {
        i1 = 0;
        while (i1 < 6) {
            i1++;
        };
    }
    return 0;
}

