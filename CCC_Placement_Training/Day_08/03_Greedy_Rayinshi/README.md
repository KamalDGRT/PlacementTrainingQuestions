# Greedy Rayinshi

-   Rayinshi and Neechea play a game.
-   The rules of the game are very simple.
-   The players have n cards in a row.
-   Each card contains a number, all numbers on the cards are distinct.
-   The players take turns, Rayinshi moves first.
-   During his turn a player can take one card: either the leftmost
    card in a row, or the rightmost one.
-   The game ends when there is no more cards.
-   The player who has the maximum sum of numbers on his cards by the
    end of the game, wins.

-   Rayinshi and Neechea are being greedy.
-   Each of them chooses the card with the larger number during his move.

-   Inna is a friend of Rayinshi and Neechea.
-   She knows which strategy the guys are using, so she wants to determine
    the final score, given the initial state of the game.
-   Help her.

### Input Format

-   The first line contains, integer n, the number of cards on the table.
-   The second line contains space-separated numbers on the cards from left to right.

### Constraints

-   1 <= n <= 1000.
-   The numbers on the cards are all guaranteed to be distinct.

### Output Format

On a single line, print two integers:

-   The first number is the number of Rayinshi's points at the end of the game
-   the second number is the number of Neechea's points at the end of the game.

### Sample Input 0

```
4
4 1 2 10
```

### Sample Output 0

```
12 5
```
