1. [B. Kayaking](https://codeforces.com/contest/863/problem/B)
> Few observation, if there were no single single kayaks, there the minimum instability will always be sum of difference of the consecutive numbers. Swapping any two elements will always going to increase the sum.  
>   
> So what we can do is, for every unodered pair of indices, we gonna calculate the instability of the remaining elements(removing that unodered pair). And the minimum of all the calculation going to be our answer.

2. [USACO 2016 January Contest, Bronze Problem 2. Angry Cows](http://www.usaco.org/index.php?page=viewproblem2&cpid=592)
> As n is small, we can simulate the prcoess for every i (0 <= i <= n-1).  
>   
> Also, as explosion radius increases by 1 everytime, we can seperately check in both dirction for every i, also if we checking in right of i, we only need to check in the right of subsequent explsions.