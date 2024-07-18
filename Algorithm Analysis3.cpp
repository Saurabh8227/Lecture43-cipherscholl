INSERTION SORT(A)
for j= 2 to A.length
key=A[i]
// Insert A[j] into the sorted sequence A[1.. j-1]
i=j-1
while i>0 and A[i] > key
A[i+1] = A[i]
A[i+1] = A[i]
i=i-1
A[i+1] = key.

Let, Now we have the best case scenario.
1 2 3 4 5 
key, A[2]= 3
i=0
A[0] = 1<key(2)
where the while loop ghets false.

Now we have the tweo scenario
1 2 3 4 5              5 4 3 2 1
best case scenario       worst case scenario
      "Efficiency of an algorithm"

c1n
c2(n-1)
c4(n-1)
(1+2+3......+n-1)
(c5+c6+c7)
c8(n-1)
These all are the time complexity of an algorithm.

(c1+c2+c4+c8)n + (c5+c6+c7)(n-1)(n)/2
this is the amount of time to run the insertion sort.
          OR
k1.n+k2(n-1)n/2
this is the amount of time to run the insertion sort.


