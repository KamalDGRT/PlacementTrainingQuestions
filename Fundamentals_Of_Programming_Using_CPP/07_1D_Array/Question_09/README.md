# Stock span

The stock span problem is a financial problem where we have a series of n daily price quotes for a stock and we need to calculate the span of stock’s price for all n days. The span Si of the stock’s price on a given day i is defined as the maximum number of consecutive days just before the given day, for which the price of the stock on the current day is less than or equal to its price on the given day. Now, you need to find out the span values for the given number of days and their daily prices. For example, if an array of 7 day's prices is given as {100, 80, 60, 70, 60, 75, 85}, then the span values for corresponding 7 days are {1, 1, 1, 2, 1, 4, 6} .

### Input Format:

Input consists of n+1 integers. The first integer corresponds to n, the number of days. The next n integers correspond to stock prices on days 1, 2...n.

### Output Format:

The output consists of n integers that correspond to the span values.

### Sample Input 1:

```
7
100
80
60
70
60
75
85
```

### Sample Output 1:

```
1
1
1
2
1
4
6
```

### Sample Input 2:

```
4
55
21
33
12
```

### Sample Output 2:

```
1
1
2
1
```

### Sample Input 3:

```
3
12
43
21
```

### Sample Output 3:

```
1
2
1
```
