# Crypto II

## Assignment details

This assignment has two parts. It is due by 11/20/18 at 11:59PM. To submit your
work, push your scripts and other related files to your GitHub repository.

**There will be a late penalty of 5% per day late!**

### Part 1

You have come across a digital notary who is using MD5 hashing to sign messages.
The notary can either generate a signature for you by prepending your message
with a random secret, or test a signature against a new message. Each time you
request a new signature, he will generate a new secret for your data, but will
keep the same secret for every signature test.

Your task is to show the notary that this signature scheme is vulnerable to a
hash length extension attack. You don't know how long of a secret he uses for
signing, except that it is between 6 and 15 bytes long. You can figure this out
by trying out padding and encoded lengths appropriate for different sized
secrets. Use the [stub.py](challenges/stub.py) code to help you craft a valid
signature on a custom payload. The notary lives on `nc 142.93.118.186 1234`.
Thus, you may connect to the challenge over nc using:
`$ nc 142.93.118.186 1234`. Make sure to include the hash from which you based
your crafted hash, your crafted hash, and the payload sent to the notary.

### Part 2

Encrypt a message to us using this [PGP public key](pgpassignment.key) and drop
in your `writeup` folder, naming the file `message.private`. We will be running
scripts to automatically decrypt everyone's `message.private` file, so make sure
to correctly name it to avoid losing points.

In your writeup, list the commands one could type in the terminal to go about
doing this. Specifically:

* generating keys
* importing someone else's public key
* encrypting a message for that someone else and dumping it to a file

If you're worried that we will be unable to decrypt your message, you can create
an encrypted message for yourself using your own public key, and likewise
decrypting it with your own private. If it works for you on your end,
then there shouldn't be any issues on our end.

#### Important notes

Make sure to submit **all** of the code you write, even if based on the stub
code! You will need to submit your code for Part 1.

### Scoring

* Part 1 is worth 70 points
* Part 2 is worth 30 points

### Tips

Remember to document your thought process for maximum credit!

Review the slides for help with using any of the tools or libraries discussed in
class.
