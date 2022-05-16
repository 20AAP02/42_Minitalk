<h1 align="center"> Minitalk | 42 School Project </h1>
<h4>The purpose of this project was to code a small data exchange program using UNIX signals. It was an introductory project for the bigger UNIX projects that will appear later on in the cursus.</h4>
<p>We could only use two unix signal, which in this case represented 1 & 0</p>
<p>Makefile had to produce two executable files</p>
<br>
<p>The server executable file had to print the respective pid</p>

```
$>./server
1541
|
$>
```

<br>
<p>The client executable file received the server pid and a string to send to the server</p>

```
$>./client 1541 "hello world"
$>
```

<p>And once the server received the string it prints the string to the terminal</p>

```
$>./server
1541
hello world
|
$>
```

-----

<h4>What I learned with this project?</h4>
<p>- Learned hoe to use unix signals</p>
<p>- Improved my understading of bitwise operations</p>

-----

<h4>Subject</h4>
https://github.com/20AAP02/42_Minitalk/blob/main/en.subject.pdf

-----

<h4>Grade : 100%</h4>
<h6>Mandatory : 100/100</h6>
<h6>Bonus : 0/25</h6>


<h5>This project was done according to the norminette form</h5>
