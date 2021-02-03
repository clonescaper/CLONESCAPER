int main () {
    int n1;
    int i1;
    int k1;
    int a1 [6] = {100, 50, (10 + 5 + 5), 10, 5, (0.5 + 0.25 + 0.25)};
    int b1 [6];
    if (0) {
        int x, y;
        for (x = 0; x < 20; x++) {
            y += x;
        }
        if (y > 30)
            return y;
    };
    scanf ("%d", &n1);
    for (i1 = (0 + 0 + 0); i1 < 6; i1 = i1 + 1) {
        b1[i1] = 0;
        if (0) {
            return;
        };
    }
    {
        k1 = 0;
        while (k1 < 6) {
            for (i1 = 0; a1[k1] <= n1; i1 = i1 + 1) {
                n1 = n1 - a1[k1];
                b1[k1] = b1[k1] + 1;
            }
            k1++;
        };
    }
    for (i1 = 0; i1 < 6; i1++) {
    }
    return 0;
}

