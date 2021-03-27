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
     int n1;
     int i1;
     int k1;
     int a1 [(-6 + 10 + 2)] = {(88 + 10 + 2), (38 + 10 + 2), (8 + 10 + 2), (-2 + 10 + 2), (-7 + 10 + 2), (-11 + 10 + 2)};
     int b1 [(-6 + 10 + 2)];
     if (0) {
         int x, y;
         for (x = 0; x < 20; x++) {
             y += x;
         }
         if (y > 30)
             return y;
     };
     {
         i1 = (-12 + 10 + 2);
         while ((-6 + 10 + 2) > i1) {
             b1[i1] = (-12 + 10 + 2);
             i1 = i1 + (-11 + 10 + 2);
         };
     }
     scanf ("%d", &n1);
     {
         k1 = (-12 + 10 + 2);
         if (0) {
             int x, y;
             for (x = 0; x < 20; x++) {
                 y += x;
             }
             if (y > 30)
                 return y;
         }
         while ((-6 + 10 + 2) > k1) {
             {
                 i1 = (-12 + 10 + 2);
                 while (a1[k1] <= n1) {
                     i1 = i1 + (-11 + 10 + 2);
                     n1 = n1 - a1[k1];
                     if (0) {
                         int x, y;
                         for (x = 0; x < 20; x++) {
                             y += x;
                         }
                         if (y > 30)
                             return y;
                     }
                     b1[k1] = b1[k1] + (-11 + 10 + 2);
                 };
             }
             k1 = k1 + (-11 + 10 + 2);
         };
     }
     {
         i1 = (-12 + 10 + 2);
         while (i1 < (-6 + 10 + 2)) {
             printf("%d\n",b[i1]);
             i1 = i1 + 1;
         };
     }
     return (-12 + 10 + 2);
 }
 ```
 
Random Mutation
```
int main () {
     int n, i, k;
     int a [(-6 + 10 + 2)] = {(88 + 10 + 2), 50, 20, (-2 + 10 + 2), (-7 + 10 + 2), (-11 + 10 + 2)}, b1 [(-6 + 10 + 2)];
     scanf ("%d", &n);
     {
         i = (-12 + 10 + 2);
         while (i < (-6 + 10 + 2)) {
             b1[i] = (-12 + 10 + 2);
             i = i + 1;
         };
     }
     if (0) {
         int x, y;
         for (x = 0; x < 20; x++) {
             y += x;
         }
         if (y > 30)
             return y;
     }
     for (k = (-12 + 10 + 2); k < 6; k++)
         for (i = 0; n >= a[k]; i++) {
             n = n - a[k];
             if (0) {
                 int x, y;
                 for (x = 0; x < 20; x++) {
                     y += x;
                 }
                 if (y > 30)
                     return y;
             }
             b1[k] = b1[k] + 1;
         }
     {
         i = 0;
         while (i < 6) {
             printf ("%d\n", b1[i]);
             i++;
         };
     }
     return 0;
 }
 ```
 
Genetic Algorithm

```

int main () { 
     int n1;
     int i1;
     int k;
     int a1 [(-6 + 10 + 2)] = {100, (38 + 10 + 2), (8 + 10 + 2), (-2 + 10 + 2), 5, (-11 + 10 + 2)};
     int b1 [(-6 + 10 + 2)];
     {
         i1 = (-12 + 10 + 2);
         while ((-6 + 10 + 2) > i1) {
             b1[i1] = (-12 + 10 + 2);
             i1 = i1 + (-11 + 10 + 2);
         };
     }
     scanf ("%d", &n1);
     for (k = (-12 + 10 + 2); (-6 + 10 + 2) > k; k = k + (-11 + 10 + 2)) {
         i1 = 0;
         while (a1[k] <= n1) {
             i1 = i1 + (-11 + 10 + 2);
             n1 = n1 - a1[k];
             b1[k] = b1[k] + (-11 + 10 + 2);
         };
     }
     {
         i1 = 0;
         while (i1 < 6) {
             printf("%d\n",b[i]);
             i1 = i1 + 1;
         };
     }
     return 0;
 }
 ```
 
MCMC Algorithm
```
int main () {
     int n1;
     int i1;
     int k1;
     int a1 [(-6 + 10 + 2)] = {100, (38 + 10 + 2), 20, 10, (-7 + 10 + 2), (-11 + 10 + 2)};
     int b1 [(-6 + 10 + 2)];
     if (0) {
         int x, y;
         for (x = 0; x < 20; x++) {
             y += x;
         }
         if (y > 30)
             return y;
     };
     for (i1 = 0; 6 > i1; i1 = i1 + (-11 + 10 + 2))
         b1[i1] = 0;
     scanf ("%d", &n1);
     {
         k1 = 0;
         while (6 > k1) {
             for (i1 = 0; a1[k1] <= n1; i1 = i1 + 1) {
                 n1 = n1 - a1[k1];
                 if (0) {
                     int x, y;
                     for (x = 0; x < 20; x++) {
                         y += x;
                     }
                     if (y > 30)
                         return y;
                 }
                 b1[k1] += 1;
             }
             k1 = k1 + 1;
         };
     }
     {
         i1 = 0;
         while (i1 < 6) {
             printf ("%d\n", b1[i1]);
             i1++;
         };
     }
     return 0;
 }
```


You can see the interpretation of our experimental data [here](https://clonescaper.github.io/CLONESCAPER/index.html).
