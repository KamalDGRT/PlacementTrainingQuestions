# B D01 - Find The Coders Day

Marie invented a Time Machine and wants to test it
by time-travelling to Russia on the <i>Day of the
Programmer</i> (the 256th day of the year) during
a year in the inclusive range from 1700 to 2700.

From 1700 to 1917, Russia's official calendar was
the Julian Calendar; since 1919, they used the
Gregorian Calendar system. The transition from
the Julian to Gregorian Calendar system occurred
in 1918, when the next day after January 31<sup>st
</sup> was February 14<sup>th</sup>. This means
that in 1918, February 14<sup>th</sup> was the
32<sup>nd</sup> day of the year in Russia.

In both the calendar systems, February is the only
month with a variable amout of days; it has 29 days
during a leap year, and 28 days during all other
years. In the Julian Calendar, leap years are
divisible by 4; in the Gregorian Calendar, leap
years are either of the following:

- Divisible by 400
- Divisible by 4 and _not_ divisible by 100.

Given a year, y, find the date of the 256th day of
that year according to the official Roman Calendar
during that year. Then print it in the format:
`dd.mm.yyyy`, where `dd` is the two-digit day,
`mm` is the two-digit month, and `yyyy` is `y`.

### Input Format

A single integer denoting the year y.

# Constraints

1700 <= y <= 2700

### Output Format

Print the full date of Day of the Programmer during
year y in the format `dd.mm.yyyy`, where dd is the
two-digit day, mm is the two-digit month, and yyyy is y.

### Sample Input 0

```
2017
```

### Sample Output 0

```
13.09.2017
```

### Explanation 0

```
In the year y = 2017,
January has 31 days,
February has 28 days,
March has 31 days,
April has 30 days,
May has 31 days,
June has 30 days,
July has 31 days and
August has 31 days.
```

When we sum the total number of days in the first
eight months, we get 31 + 28 + 31 + 30 + 31 + 30 +
31 + 31 = 243. Day of the Programmer is the 256<sup>
th</sup> day, so then calculate `256 - 243 = 13` to
determine that it falls on the day 13 of the 9<sup>
th</sup> month (September). We then print the fu1ll
date in the specified format, which is `13.09.2017`.

### Sample Input 1

```
2016
```

### Sample Output 1

```
12.09.2016
```
