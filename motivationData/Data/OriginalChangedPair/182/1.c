int main () {
    int a1 [(3 + 1.5 + 1.5)] = {100, 50, 20, (5 + 2.5 + 2.5), 5, 1};
    int b [6];
    int n, i, k;
    scanf ("%d", &n);
    {
        i = (0 + 0 + 0);
        while (6 > i) {
            b[i] = 0;
            i = i + 1;
        };
    }
    {
        k = 0;
        while (6 > k) {
            for (i = 0; a1[k] <= n; i = i + 1) {
                n = n - a1[k];
                b[k] += 1;
            }
            if (0) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
            k = k + 1;
        };
    }
    {
        i = 0;
        while (i < 6) {
            i = i + 1;
        };
    }
    return 0;
}

