1.  [Easy](https://cses.fi/problemset/task/1142/)
    <details>
        <summary>Approach</summary>

        > The is basically based on the application of stack of finding nearest location on its left/right with smaller/larger value.

        > Now, here we need to find the rectange with maximum area and return that area. So imagine we have a rectangle with maximum area, what will it look like?
        It will consist of consecutive boards and length of one side will be the number of boards and lenght of other side will equal to the smallest height rectangle in it, right?
        Now, if it's the optimal rectangle which means taking one more board from left or right will result in smaller or equal area, which further means that the height of addtional board lesser than the already smallest height rectangle it contains, right?
        So, we just to find for each rectange the nearest location on its both side with smaller value, in that way we will have one rectange candidate with area equals to no. of boards * that rectangle height, and then take the maximum from all the values.

    </details>
