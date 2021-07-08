# Hotel Bookings

-   A hotel manager has to process N advance bookings of rooms
    for the next season.
-   His hotel has K rooms.
-   Bookings contain an arrival date and a departure date.
-   He wants to find out whether there are enough rooms in the hotel
    to satisfy the demand.
-   Write a program that solves this problem in time O(N log N) .

### Input Format

-   First line contains two integers N and K.
-   N is the number of bookings and K is the number of hotel rooms.
-   Next N lines contain 2 integers each, the arrival and departure
    date for ith booking.

### Constraints

-   1 <= N <= 10^5
-   1 <= K <= 10^5
-   1 <= arrivalDay, departureDay <= 10^5

### Output Format

-   Output "yes" if all the bookings can be processed and "no" otherwise.

### Sample Input 0

```
3 1
1 2
3 6
5 8
```

### Sample Output 0

```
no
```

### Explanation 0

2 rooms are needed on days 5 and 6 while there are only 1 room.
