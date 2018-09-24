Pentesting I
======

## Assignment details

This assignment has two parts. It is due by 9/27 at 11:59 PM.
To submit your homework, please follow the guidelines on the front page to edit the README in the /writeup folder and push your completed work to GitHub.


**There will be a late penalty of 5% off per day late!**

### Part 1

Fred Krueger has implemented a new uptime system for Cornerstone Airlines! He plans to use this system as a means to test the uptime of Internet-connected devices behind the company's network. Without a doubt, Fred claims that his new solution is inherently secure because it utilizes the Linux ping command to do the uptime checking instead of using a web-based OSINT solution.

However, there are rumors that Freds's new service is vulnerable to a Command Injection attack. Can you prove to Fred that his new uptime system isn't as secure as he claims? If so, go and get the flag!

`nc cornerstoneairlines.co 45`

For full credit, write up (step-by-step) how you got the flag and what Fred should do to protect from this vulnerability.

You will earn full credit for answering these questions:

* The right flag
* Showing what input you used to obtain the flag.
* Describing your thought process.
* Any suggested precautions Fred could implement to prevent this vulnerability (hint: can you find the script that Fred uses to check the uptime?)

### Part 2

Using the provided stub code, implement an interactive shell that leverages the above vulnerability.

You want to be able to conduct the following actions (by calling their respective commands) in this shell:

1) `shell`                               Drop into an interactive shell and allow users to gracefully `exit`
2) `pull <remote-path> <local-path>`     Download files
3) `help`                                Shows this help menu
4) `quit`                                Quit the shell

If any malformed input occurs, be sure to show this usage function.

Note: If you choose to write your own program in another language, please include instructions on how to execute your program including what version of the language you are using. Please add this detail to a README.txt or README.md file. You will NOT receive credit if the TAs cannot run your program.

Note: If you are stuck on this part of the assignment, please let us know. The facilitator staff is open to releasing hints, though we reserve the right to deny releasing specific hints if we deem it appropriate.

Note: Here's a [screenshot](shellimg.png) of what we roughly expect. I'll post a simple "public test" for which you will be graded on. Kindly bear with us here, we're trying something new :)


### Format

Both parts should be written in the same blog post, clearly separated. Full, grammatical sentences
should be used. Part 1 should be at least 300 words, and part 2 should be at least 200. There
is no penalty for going over these numbers, but there *is* a penalty for padding your work to meet
the minimums.

### Scoring

Part 1 is worth 45 points, and part 2 is worth 55.

### Tips

Reference the slides from lecture 2 on how to make a good ethical argument.

Observe that part 2 is the same as the second part of part 1: doing it first might stimulate your
thoughts.

Good luck!
