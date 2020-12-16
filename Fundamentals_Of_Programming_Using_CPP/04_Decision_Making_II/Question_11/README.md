# Sece Dining

The catering staff in the Dothraki Sece Hostel, in Kingdom of Essos are known for their good cooking skills as well as hospitality. We all know that the dining table arrangement needs to be different for left handed and right handed persons. So whenever any VIP guest visits Dothraki, they would make the table arrangements based on whether he/she is left handed or right handed. The mess is situated on the 15th floor of the hostel building. Dothraki hostel building has super fast elevators to help travel from one floor to another. Each elevator has 2 doors, the front one and the rear one. If a person enters the elevator through the front door, he goes out through the rear door and vice-versa. The elevator has 2 rails numbered as 1 and 2. Rail 1 is located to the left of the entrance of the front door (or correspondingly, to the right of the entrance of the rear door). Rail 2 is located opposite it, to the right of the entrance of the front door and to the left of the entrance of the rear door. We know that each person holds on the rail with his/her strongest hand. There is an IP camera in the elevator and based on the camera output, the catering staff will be easily able to identify whether a guest is left handed or right handed. They have decided to automate this task and they asked the help of Image Processing Group. The Image Processing Group has written a program to perform this task and the program will output the door through which the person entered and the rail number which the person held. Based on this input, write a C++ program to determine whether a person is left handed or right handed.

### INPUT FORMAT:

The first input is a string to denote the door as "front" or "rear" or "FRONT" or "REAR". <br>
The second input is an integer to denote the rail as 1 or 2.

### OUTPUT FORMAT:

Print the string "Left Handed" or "Right Handed".

### SAMPLE INPUT 1:

```
front
1
```

### SAMPLE OUTPUT 1:

```
Left Handed
```

### SAMPLE INPUT 2:

```
REAR
1
```

### SAMPLE OUTPUT 2:

```
Right Handed
```
