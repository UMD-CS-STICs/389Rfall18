Writeup 3 - OSINT II, OpSec and RE
======

Name: *Hamid Aina*
Section: *0101*

I pledge on my honor that I have not given or received any unauthorized assistance on this assignment or examination.

Digital acknowledgement of honor pledge: *Hamid Aina*

## Assignment 3 Writeup

### Part 1 (100 pts)

1. Vulnerability: Easily accessible IP addresses with open ports

   Why: The IP address is visible in the search bar, so an attacker could effortlessly utilize it. Additionally, Fred didn't close his server ports, on top of not having the correct firewall settings. Based on the settings, he is allowing all network traffic into his open ports.
   
   Suggestions: I recommend that Fred installs and Intrusion detection/prevention system to determine if malicious activity is taking place on his network. He should also hide port information so attackers aren't able to simply conduct nmaps and exploit his servers. He should also strengthen his firewall settings to be more pedantic on who it allows onto the network.
   
   Evidence: http://www.rroij.com/open-access/importance-of-intrusion-detection-system-withits-different-approaches.php?aid=41367
   

2. Vulnerability: Weak server passwords

   Why: The password was 'pokemon' and that would be too easy for a potential hacker. Attackers would easiily be able to access company information and it could have been easily determined from his social media accounts.
   
   Suggestions: I recommend that he follows standard password criteria, meaning that the password should be at least 8 characters, and contain letters, numbers, and symbols. By doing this, a brute force attack would take longer and would be less likely. Fred could also make use of multi-factor authentication for his server, as well as using a password manager to store complex passwords.
   
   Evidence: https://www.securedatarecovery.com/resources/the-importance-of-strong-secure-passwords
   https://it.uottawa.ca/accounts/password-tips
   
   
3. Vulnerability: Unauthorized server/network traffic

   Why: By not securing his ports, Fred gives attackers an easy access point into his servers. Attackers can easily access the network and steal vital information if the necessary security measures aren't in place.
   
   Suggestions: This security risk could easily be avoided by finding a way to only allow authorized users to connect to the network. This could be done via a server-wide whitelist on a firewall. Furthermore, having a strong authentication system in place to verify users will also help mitigate this risk.
   
   Evidence: https://www.symantec.com/connect/blogs/importance-using-firewall-threat-protection
   https://ws680.nist.gov/publication/get_pdf.cfm?pub_id=901083



