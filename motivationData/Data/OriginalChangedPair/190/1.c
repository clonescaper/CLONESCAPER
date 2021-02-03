int main () {
    int n;
    int i;
    int k;
    int a [6] = {100, 50, 20, 10, 5, 1}, b [6];
    scanf ("%d", &n);
    {
        i = 0;
        while (i < 6) {
            b[i] = 0;
            i++;
        };
    }
    {
        k = 0;
        while (k < 6) {
            {
                i = 0;
                while (a[k] <= n) {
                    i++;
                    n = n - a[k];
                    b[k] += 1;
                };
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
            printf ("%d\n", b[i]);
            i++;
        };
    }
    return 0;
}

