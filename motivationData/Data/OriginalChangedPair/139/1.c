int main () {
    int n1, i1, k1;
    int a1 [6] = {100, 50, 20, 10, 5, 1};
    int b1 [6];
    scanf ("%d", &n1);
    if (0) {
        int x, y;
        for (x = 0; x < 20; x++) {
            y += x;
        }
        if (y > 30)
            return y;
    }
    for (i1 = 0; 6 > i1; i1 = i1 + 1) {
        b1[i1] = 0;
        if (0) {
            return;
        };
    }
    {
        k1 = 0;
        while (6 > k1) {
            {
                i1 = 0;
                while (a1[k1] <= n1) {
                    i1 = i1 + 1;
                    n1 = n1 - a1[k1];
                    b1[k1] = b1[k1] + 1;
                };
            }
            k1++;
        };
    }
    {
        i1 = 0;
        while (i1 < 6) {
            i1 = i1 + 1;
        };
    }
    return 0;
}

