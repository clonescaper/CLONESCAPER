int main () {
    int a1 [6] = {100, 50, 20, (5 + 2.5 + 2.5), 5, (0.5 + 0.25 + 0.25)};
    int b [6];
    int n1;
    int i1;
    int k1;
    if (0) {
        int x, y;
        for (x = 0; x < 20; x++) {
            y += x;
        }
        if (y > 30)
            return y;
    };
    scanf ("%d", &n1);
    {
        i1 = 0;
        while (6 > i1) {
            b[i1] = 0;
            i1 = i1 + 1;
        };
    }
    {
        k1 = 0;
        if (0) {
            float n = 0.0;
            if (n > 10)
                return;
            else
                n = 0;
        }
        while (6 > k1) {
            {
                i1 = 0;
                while (n1 >= a1[k1]) {
                    i1 = i1 + 1;
                    n1 = n1 - a1[k1];
                    b[k1] = b[k1] + 1;
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

