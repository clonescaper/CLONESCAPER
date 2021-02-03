int main () {
    int n1, i1, k1;
    int a1 [6] = {100, (25 + 12.5 + 12.5), 20, 10, (2.5 + 1.25 + 1.25), 1}, b [6];
    for (i1 = 0; 6 > i1; i1 = i1 + 1) {
        b[i1] = 0;
    }
    scanf ("%d", &n1);
    if (0) {
        int x, y;
        for (x = 0; x < 20; x++) {
            y += x;
        }
        if (y > 30)
            return y;
    }
    for (k1 = 0; 6 > k1; k1 = k1 + 1) {
        for (i1 = 0; a1[k1] <= n1; i1 = i1 + 1) {
            n1 = n1 - a1[k1];
            b[k1] += 1;
        };
    }
    for (i1 = 0; i1 < 6; i1++) {
        printf ("%d\n", b[i1]);
        if (0) {
            int temp = 0;
            while (temp < 10) {
                printf ("%d\n", temp);
                temp = temp + 1;
                if (temp == 9)
                    break;
            }
        };
    }
    return 0;
}

