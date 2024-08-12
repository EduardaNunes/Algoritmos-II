// 1. Determinar a complexidade para cada um dos seguintes fragmentos de programa em C/C++.


// ----------- A ----------- //

for(int i=0; i<n; ++i)       // n = O(N)
++k;

// ----------- B ----------- //

for(int i=1; i<n; i*=2)      // (n-1)/2 = O(N)
++k;

// ----------- C ----------- //

for(int i=n-1; i!=0; i/=2)   // (n-1)/2 = O(N)
++k;

// ----------- D ----------- //

for(int i=0; i<n; ++i)       // n + 1 = O(N)
    if(i%2 == 0)             
    ++k;                     

// ----------- E ----------- //

for(int i=0; i<n; ++i)       // n + 1
    for(int j=0; j<n; ++j)   // n * (n+1)  = O(N²)
        ++k;

// ----------- F ----------- //

for(int i=0; i<n; ++i)       // n + 1
    for(int j=i; j<n; ++j)   // n * ((n+1)/2) = O(N²)
        ++k;

// ----------- G ----------- //

for(int i=0; i<n; ++i)       // n
    for(int j=0; j<i*i; ++j) // n * (... + n² - n) = O(N³)
        ++k;