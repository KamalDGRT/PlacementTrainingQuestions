# Stick games I

After winning gold and silver in Indian Computing Olympiad 2016, Tyrion Lannister and Jaime Lannister want to have some fun. Now they are playing a game on a grid made of n horizontal and m vertical sticks. Let us assume a grid where, n = 3 and m = 3. There are n + m = 6 sticks in total. There are n*m = 9 intersection points, numbered from 1 to 9. The rules of the game are very simple. The players move in turns. Tyrion won gold, so he makes the first move. During his/her move, a player must choose any remaining intersection point and remove from the grid all sticks which pass through this point. A player will lose the game if he cannot make a move (i.e. there are no intersection points remaining on the grid at his move). Assume that both players play optimally. Who will win the game?

### Input Format:

The first line of input contains two space-separated integers, n, and m (1 ≤ n, m ≤ 100).

### Output Format:

Print a single line containing "Tyrion Lannister" or "Jaime Lannister" (without the quotes), depending on the winner of the game.

### SAMPLE INPUT 1:

```
2 2
```

### SAMPLE OUTPUT 1:

```
Jaime Lannister
```

### SAMPLE INPUT 2:

```
2 4
```

### SAMPLE OUTPUT 2:

```
Jaime Lannister
```

### SAMPLE INPUT 3:

```
1 4
```

### SAMPLE OUTPUT 3:

```
Tyrion Lannister
```
