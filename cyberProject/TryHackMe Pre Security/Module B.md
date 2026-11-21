
## Module 2: Computer Fundamentals — Student Summary Report


# 1. Module Overview

In the Computer Fundamentals module, I learned how a computer actually works on the inside, what different types of computers exist around us, and how they talk to each other over a network. Before jumping straight into hacking or defending systems, it is super important to understand the basics of the machine you are trying to protect. Through this module, I explored what happens the second we press the power button, how hardware parts like the power supply, motherboard firmware, and RAM work together, and why we have specialized machines like servers and smart devices instead of just laptops. I also learned how the internet works behind the scenes using the client-server model, IP addresses, DNS, and ports.


For cybersecurity, learning these basics is essential because hackers don't just attack websites—they attack every part of a computer system. From sneaking malware into the startup process to hacking poorly protected smart home devices or spying on unencrypted web traffic, attackers look for weak spots at every level. Understanding how a normal computer boots up and communicates helps me spot when something looks suspicious and teaches me what parts of a system actually need protection.

##

# 2. Important Concepts (7 Concepts Covered)

1. The Boot Process & Firmware (UEFI/BIOS):
The boot process is the step-by-step wake-up routine a computer goes through when you press the power button. First, the power supply sends electricity to the parts. Then, built-in software on the motherboard called UEFI (which replaced the older BIOS) wakes up the hardware and runs a quick health check called POST to make sure nothing is broken. Finally, a bootloader loads the Operating System (like Windows) into the RAM so we can use it. Example: If your RAM stick is loose, the computer catches it during POST and beeps instead of starting up.


3. Client-Server Model:
This is how two computers share services. The Client is the device or app that asks for something, and the Server is the powerful computer that stores the data and sends it back. Example: When I open Chrome on my laptop and go to YouTube, my browser is the client asking for a video, and YouTube's computer is the server sending that video to my screen.


5. IP Addresses & DNS:
Every computer on a network gets a unique number address called an IP Address (like 192.168.1.10). Since people can't memorize long numbers for every website, we use DNS (Domain Name System). DNS works just like a phone's contact list—when I type tryhackme.com, DNS looks up the matching IP address in the background so my browser knows where to go.


7. Network Ports:
A single server can do many jobs at once, like hosting a website and sending emails. Ports act like numbered doors on that server so incoming traffic goes to the right program. Example: When visiting a normal website, my browser connects through Port 80 (HTTP) or Port 443 (HTTPS).


9. Embedded Computers vs. IoT Devices:
An Embedded Computer is a tiny chip hidden inside an everyday machine to do one specific job without internet, like the sensor that opens a mall's automatic sliding door or controls a coffee maker. An IoT (Internet of Things) device is also a small hidden computer, except it connects to Wi-Fi or the internet so you can control it from your phone, like a smart fridge or smart bulb.


11. Hardware Trade-offs (Why Computers Look Different):
There is no single "best" computer because every design has to give up something to gain something else. A laptop is easy to carry around, so it has to sacrifice heavy cooling and battery power. A server, on the other hand, doesn't even have a screen or keyboard because it sits in a room 24/7 just serving data to thousands of users.


13. HTTP(S) & Stateless Communication:
HTTP is the set of rules web browsers and servers use to talk to each other, and HTTPS is the encrypted, safer version of it. HTTP is "stateless," meaning the server forgets who you are right after sending you a page. To fix this so you don't have to type your password on every single click, websites give your browser a small digital pass called a cookie to remember your login.

##

# Room 1 - Inside a Computer System 
<img width="1918" height="970" alt="image" src="https://github.com/user-attachments/assets/a70c332c-4142-4ac4-9a56-7d88ada00260" />

# Room 2 - Computer Types
<img width="1918" height="972" alt="image" src="https://github.com/user-attachments/assets/96bf9cfb-c14b-41c6-a46b-cc10fbcfdb01" />
i am using tryHackMe basic plan w no premium so i completed this room from the site MEDIUM 

# Room 3 - Client-Server Basics
<img width="1918" height="975" alt="image" src="https://github.com/user-attachments/assets/32878ec3-b1f9-4788-9189-8671310abfb4" />
from medium again

