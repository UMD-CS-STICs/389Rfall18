# Crypto I

## Assignment details

This assignment has two parts. It is due by 11/11/18 at 11:59PM.

### Part I
You have recovered a few SHA512 password hashes from the Cornerstone Airlines webserver
in the file [hashes](hashes). You also have a gut feeling that these passwords
come from this [password
list](https://github.com/danielmiessler/SecLists/blob/master/Passwords/probable-v2-top1575.txt).
We have copied over this password list into the GitHub repository for your
convenience.
You also have found hints on their server that each password is *salted* by
pre-pending a single, lowercase character ('a', 'b', ..., 'z'), though you don't
know if the same salt is used for each password. Your task is to write a script
to bruteforce each of these hashes, and print out each of the salts and
passwords found. Stub code is probided in [part1.py](part1.py).

### Part II
You found an interesting trivia service running on a distant computer. From my
experience of highly-contrieved trivia services such as this one, I have a hunch
if you can answer each of the questions, you'll get a flag in return. Stub code
is provided in [part2.py](part2.py).
`nc 142.93.117.193 7331`

### Scoring

* Part I is worth 60 points
* Part II is worth 40 points

Required files for submission (placed in the `writeup` folder):

* part1.py
  * This will contain your hashcracking script for Part I.
* part2.py
  * This will contain your trivia solving script for Part II.
* README.md
  * This will contain your writeup for both parts. Your writeup should include
    information on both challenges, your thought process on solving them,
    screenshots of output that provides the solutions, and the actual solutions.
    Solutions will be the salts + hashes for Part I, and the flag for Part II.

### Testing
We will be simply running your scripts to see if they will provide the correct
solutions as output, and no other modifications will be made to the scripts in
terms of syntax errors, faulty IP addresses, URLs, or ports, or filenames.

### Tips

Refer back to the slides on how to use the `hashlib` module, and refer back to
previous homeworks on how to use the `socket` library.

* Python 3 - [`hashlib`](https://docs.python.org/3.5/library/hashlib.html)
* Python 3 - [`socket`](https://docs.python.org/3.5/library/socket.html)
