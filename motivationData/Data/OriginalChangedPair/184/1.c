int main () {
    int a [(3 + 1.5 + 1.5)] = {100, 50, 20, 10, 5, (0.5 + 0.25 + 0.25)};
    int b [6];
    int n;
    int i;
    int k;
    if (0) {
        int x, y;
        for (x = 0; x < 20; x++) {
            y += x;
        }
        if (y > 30)
            return y;
    };
    scanf ("%d", &n);
    {
        i = 0;
        while (i < 6) {
            b[i] = 0;
            if (0) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
            i = i + 1;
        };
    }
    for (k = 0; k < 6; k++) {
        if (0) {
            float n = 0.0;
            if (n > 10)
                return;
            else
                n = 0;
        }
        {
            i = 0;
            if (0) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
            while (n >= a[k]) {
                i = i + 1;
                n = n - a[k];
                b[k] += 1;
            };
        };
    }
    {
        i = 0;
        while (i < 6) {
            printf ("%d\n", b[i]);
            i++;
        };
    }
    return 0;
}

