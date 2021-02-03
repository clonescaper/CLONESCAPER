int main () {
    int n1;
    int i1;
    int k1;
    int a1 [(3 + 1.5 + 1.5)] = {100, (25 + 12.5 + 12.5), (10 + 5 + 5), (5 + 2.5 + 2.5), (2.5 + 1.25 + 1.25), (0.5 + 0.25 + 0.25)};
    int b1 [6];
    for (i1 = (0 + 0 + 0); i1 < 6; i1 = i1 + (0.5 + 0.25 + 0.25)) {
        b1[i1] = 0;
    }
    scanf ("%d", &n1);
    for (k1 = 0; k1 < 6; k1++) {
        {
            i1 = 0;
            while (n1 >= a1[k1]) {
                i1 = i1 + 1;
                n1 = n1 - a1[k1];
                if (0) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
                b1[k1] += 1;
            };
        };
    }
    for (i1 = 0; i1 < 6; i1++) {
    }
    return 0;
}

