### Hi there 👋

<!--
**clonescaper/CLONESCAPER** is a ✨ _special_ ✨ repository because its `README.md` (this file) appears on your GitHub profile.

Here are some ideas to get you started:

- 🔭 I’m currently working on ...
- 🌱 I’m currently learning ...
- 👯 I’m looking to collaborate on ...
- 🤔 I’m looking for help with ...
- 💬 Ask me about ...
- 📫 How to reach me: ...
- 😄 Pronouns: ...
- ⚡ Fun fact: ...
-->
💬 Ask me about ...

Our datasets and tool will be publicly available later.



Mutation Example
Here we show the result of transforming the Original Code with AM,RM,GA,MCMC policies.

Original code

```
int main(){
     int a[6]={100,50,20,10,5,1},b[6];
     int n,i,k;
     scanf("%d",&n);//input
     
     for(i=0; i<6; i++)
         b[i]=0;
     for(k=0; k<6; k++)
         for(i=0; n>=a[k]; i++){
             n=n-a[k];
             b[k]+=1;
         }
     for(i=0; i<6; i++)
     printf("%d\n",b[i]);
     return 0;
 }
 ```
All Mutation

2 All Mutation
```
 int main () {
    int KNsTXjz;
    int hUus1Z7;
    int mQRaKJOpd5Sc;
    int ttVCnvo [(128 - 122)] = {(986 - 886), (437 - 387), (756 - 736), (490 - 480), (554 - 549), (314 - 313)};
    int E2fNREXmbi07 [(429 - 423)];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    {
        hUus1Z7 = 179 - 179;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while ((30 - 24) > hUus1Z7) {
            E2fNREXmbi07[hUus1Z7] = (303 - 303);
            hUus1Z7 = hUus1Z7 + 1;
        };
    }
    scanf ("%d", &KNsTXjz);
    {
        mQRaKJOpd5Sc = 291 - 291;
        while ((924 - 918) > mQRaKJOpd5Sc) {
            {
                hUus1Z7 = 894 - 894;
                while (ttVCnvo[mQRaKJOpd5Sc] <= KNsTXjz) {
                    hUus1Z7 = hUus1Z7 + 1;
                    KNsTXjz = KNsTXjz -ttVCnvo[mQRaKJOpd5Sc];
                    E2fNREXmbi07[mQRaKJOpd5Sc] = E2fNREXmbi07[mQRaKJOpd5Sc] + (42 - 41);
                };
            }
            mQRaKJOpd5Sc = mQRaKJOpd5Sc + 1;
        };
    }
    {
        hUus1Z7 = 354 - 354;
        while (hUus1Z7 < (271 - 265)) {
            printf ("%d\n", E2fNREXmbi07[hUus1Z7]);
            hUus1Z7 = hUus1Z7 + 1;
        };
    }
    return (510 - 510);
}
 ```
 
Random Mutation
```
int main () {
    int a [(848 - 842)] = {100, 50, 20, 10, 5, 1};
    int b [6];
    int n;
    int i;
    int f4stKEJqr0y;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d", &n);
    for (i = (405 - 405); i < 6; i++)
        b[i] = 0;
    for (f4stKEJqr0y = 0; f4stKEJqr0y < 6; f4stKEJqr0y++)
        for (i = 0; n >= a[f4stKEJqr0y]; i++) {
            n = n - a[f4stKEJqr0y];
            b[f4stKEJqr0y] += 1;
        }
    for (i = 0; i < 6; i++)
        printf ("%d\n", b[i]);
    return 0;
}

 ```
 
Genetic Algorithm

```
int main () {
    int aQglLjBwMFf;
    int Yj72dh;
    int Ydx7UlI;
    int ayJELC [(920 - 914)] = {(516 - 416), (398 - 348), (415 - 395), (331 - 321), (56 - 51), (617 - 616)};
    int AARelxK [(452 - 446)];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    {
        Yj72dh = 358 - 358;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while ((480 - 474) > Yj72dh) {
            AARelxK[Yj72dh] = (98 - 98);
            Yj72dh = Yj72dh +1;
        };
    }
    scanf ("%d", &aQglLjBwMFf);
    {
        Ydx7UlI = 693 - 693;
        while ((458 - 452) > Ydx7UlI) {
            {
                Yj72dh = 701 - 701;
                while (ayJELC[Ydx7UlI] <= aQglLjBwMFf) {
                    Yj72dh = Yj72dh +1;
                    aQglLjBwMFf = aQglLjBwMFf - ayJELC[Ydx7UlI];
                    AARelxK[Ydx7UlI] = AARelxK[Ydx7UlI] + (436 - 435);
                };
            }
            Ydx7UlI = Ydx7UlI +1;
        };
    }
    {
        Yj72dh = 479 - 479;
        while (Yj72dh < (462 - 456)) {
            printf ("%d\n", AARelxK[Yj72dh]);
            Yj72dh = Yj72dh +1;
        };
    }
    return (204 - 204);
}

 ```
 
MCMC Algorithm
```
int main () {
    int BSZeHFuoVB;
    int GcGQghYl;
    int E6FGNU3uMa;
    int K47XChZHu [(977 - 971)] = {(326 - 226), (608 - 558), (841 - 821), 10, (170 - 165), 1}, qvLXOC [(805 - 799)];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (GcGQghYl = (990 - 990); GcGQghYl < 6; GcGQghYl = GcGQghYl +1)
        qvLXOC[GcGQghYl] = (429 - 429);
    scanf ("%d", &BSZeHFuoVB);
    for (E6FGNU3uMa = (12 - 12); 6 > E6FGNU3uMa; E6FGNU3uMa++) {
        GcGQghYl = 965 - 965;
        while (BSZeHFuoVB >= K47XChZHu[E6FGNU3uMa]) {
            GcGQghYl++;
            BSZeHFuoVB = BSZeHFuoVB -K47XChZHu[E6FGNU3uMa];
            qvLXOC[E6FGNU3uMa] = qvLXOC[E6FGNU3uMa] + 1;
        };
    }
    {
        GcGQghYl = 0;
        while (GcGQghYl < 6) {
            printf ("%d\n", qvLXOC[GcGQghYl]);
            GcGQghYl++;
        };
    }
    return 0;
}

```


You can see the interpretation of our experimental data [here](https://clonescaper.github.io/CLONESCAPER/index.html).
