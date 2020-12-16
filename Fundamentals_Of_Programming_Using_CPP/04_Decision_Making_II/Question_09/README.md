# Traffic Signal

Driving down the street, we see a green traffic light ahead. As we precisely know the pattern of this traffic light, we know exactly how long we have before it will turn red. We wish to compute whether we will pass the traffic light before it turns red at our current speed. Now, write a program to check whether we will cross the light or not with the current speed before it turns red.

### INPUT FORMAT:

The first input is a floating point number which denotes the current speed in miles per hour. <br>
The second input is a floating point number which denotes the distance of the point of light in miles.  <br>
The third input is a floating point number which denotes the time till which the traffic light remains green.

### OUTPUT FORMAT:

Print "Yes", if we will be able to cross the light at the current speed.  <br>
Print "No", if we won't be able to cross light at the current speed.

### SAMPLE INPUT 1:

```
59.99
1.00
60.00
```

### SAMPLE OUTPUT 1:

```
No
```

### SAMPLE INPUT 2:

```
82.89
1.00
60.00
```

### SAMPLE OUTPUT 2:

```
Yes
```

### SAMPLE INPUT 3:

```
100.89
2.00
60.00
```

### SAMPLE OUTPUT 3:

```
No
```
