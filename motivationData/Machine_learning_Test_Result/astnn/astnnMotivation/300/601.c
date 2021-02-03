int main () {
    int n, i, k1;
    int a [(3 + 2 + 1)] = {100, 50, 20, (5 + 2.5 + 2.5), (2.5 + 1.25 + 1.25), (0.5 + 0.25 + 0.25)};
    int b [6]; scanf("%d", &n);
    {  i = (0 + 0 + 0);
        while (i < 6) {
            b[i] = (0 + 0 + 0); 
            i = i + 1; }; }
    {   k1 = 0;
        while (k1 < 6) {{   i = 0;
            while (a[k1] <= n) {
            i++;n = n - a[k1];
             b[k1] += 1;};}
            k1 = k1 + 1;};
    }{i = 0;
     while (i < 6) {
        printf ("%d\n", b[i]);i++;};
    } return 0;}
