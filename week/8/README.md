# Forensics II

## Assignment details

This assignment has two parts. It is due by 11/1/18 at 11:59PM.

**There will be a late penalty of 5% per day late!**

### Part 1 (45 Pts)

One of our network engineers recently discovered that hackers have been using an insecure channel on our server to communicate. We need to know what they're up to!

The hackers don't know that our network engineer saved all network traffic from the last time they were online. Can you analyze it for us and answer the following questions?

[netlog.pcap](netlog.pcap)

1. Did the hackers use the **traceroute** command on any websites? If so, list one.

2. What are the names used by the hackers?

3. What are the hackers' IP addresses, and where are they connecting from? 

4. What port are they using to communicate on our server?

5. Did they mention their plans? When are they happening?

6. Did they send any files to each other? List any links or related information you found.

7. When do the hackers expect to see each other next?

### Part 2 (55 Pts)

After looking at the file that you discovered in #6 above, we were unable to identify its file type or any program that can open it. Fortunately, we found a specification sheet for this file type! Can you write a parser for us and tell us what their file contains?

We've uploaded the file's spec sheet [here](fpff-spec.md). Once you write the parser, report back with what you've found!

Perform the following tasks:

1. Develop the parser, using both the
[specification](fpff-spec.md) and
`update.fpff` for reference. [stub.py](stub.py) contains the beginnings of a Python parser, if
you'd like to develop in Python.

2. Parse `update.fpff`, and report the following information:
    1. When was `update.fpff` generated?
    2. Who authored `update.fpff`?
    3. How many sections does `update.fpff` *say* it has? How many sections are there *really*?
    4. List each section, giving us the data in it *and* its type.
    5. Report *at least* one flag hidden in `update.fpff`. Any other flag found will count as bonus points towards the *competition* portion of the syllabus. 

#### Important notes

Make sure to submit **all** of the code you write, even if based on `stub.py`!

### Scoring

This assignment is worth 100 points, broken down between the pcap findings (25 points), and fpff parser (50 points) and question answering/analysis (25 points).

### Tips

Remember to document your steps for maximum credit. We want to know how you approached and solved this challenge!

Look at the Forensics I and II slides for guidance.

If you're using Python, Ruby, or another scripting language, check out the `pack` and `unpack`
methods:

* Python 2 - [`struct`](https://docs.python.org/2/library/struct.html)
* Python 3 - [`struct`](https://docs.python.org/3.5/library/struct.html)
* Ruby - [`Array#pack`](https://ruby-doc.org/core-2.5.0/Array.html#method-i-pack) and
[`String#unpack`](https://ruby-doc.org/core-2.5.0/String.html#method-i-unpack)
