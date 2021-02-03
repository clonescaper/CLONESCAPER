int main () {
    int a1 [6] = {100, 50, 20, 10, 5, (0.5 + 0.25 + 0.25)};
    int b [6];
    int n;
    int i1;
    int k1;
    scanf ("%d", &n);
    {
        i1 = (0 + 0 + 0);
        while (6 > i1) {
            b[i1] = 0;
            i1++;
        };
    }
    {
        k1 = 0;
        while (6 > k1) {
            {
                i1 = 0;
                while (a1[k1] <= n) {
                    i1++;
                    n = n - a1[k1];
                    b[k1] = b[k1] + 1;
                };
            }
            k1 = k1 + 1;
        };
    }
    {
        i1 = 0;
        while (i1 < 6) {
            printf ("%d\n", b[i1]);
            i1++;
        };
    }
    return 0;
}

