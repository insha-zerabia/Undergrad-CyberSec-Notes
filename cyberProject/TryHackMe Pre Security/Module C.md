
## Module 3: Operating Systems Basics — Student Summary Report


# 1. Module Overview

In the Operating Systems Basics module, I learned how an operating system (OS) works as the invisible manager between a computer's physical hardware and the everyday applications we use. Before we can secure a computer or investigate an attack, we need to understand how operating systems control processes, memory, files, and user accounts behind the scenes. Throughout this module, I explored both Windows and Linux, practicing how to navigate a graphical desktop (GUI) as well as how to use the text-based command-line interface (CLI) to search for hidden files, check system health, and inspect running programs.


For cybersecurity, understanding operating systems is super important because every attack—whether it is a virus, a stolen password, or a hacker trying to gain admin access—happens inside an OS environment. By learning how privilege levels separate normal apps from the core system, how file permissions work, and how basic security tools like Windows Security and user authentication protect a machine, I now have a much clearer picture of how attackers break into systems and how defenders lock them down.


# 2. Important Concepts (7 Concepts Covered)

1. Operating System (OS) & Its Core Duties:
An OS (like Windows, Linux, Android, or macOS) is the main software that manages all the hardware and runs our apps without letting them crash into each other. Its five main jobs are Process Management (sharing CPU time), Memory Management (giving RAM to apps), File System Management, User Management, and Device Management. Example: Just like an air traffic controller keeps airplanes from colliding at an airport, the OS lets me browse the web, play music, and download files at the same time smoothly.


2. Kernel Space vs. User Space:
Modern operating systems divide permissions into two layers for safety. Kernel space is the locked-down core of the OS that has full, direct access to hardware like the CPU and hard drive. User space is where everyday apps (like Chrome or games) run with restricted permissions; if an app needs to save a file, it has to ask the kernel through a system call. Example: Because of this separation, if a web browser crashes, the whole computer doesn't crash with it.


3. GUI vs. CLI (Graphical vs. Command-Line Interface):
A GUI lets users control the computer visually by clicking icons, folders, and menus (like Windows File Explorer). A CLI (like the Linux Terminal) lets users type exact text commands to control the system directly. Example: Using a GUI is like tapping a restaurant icon on Google Maps, while using the CLI is like typing in the exact GPS coordinates—it takes practice, but it is much faster and gives more control.


4. Essential Linux Navigation & System Commands:
In the Linux terminal, I learned core commands to move around and inspect the machine: pwd shows my current folder path, ls -al lists all files including hidden ones starting with a dot (.), cd changes folders, find searches for files across directories, cat reads text files, whoami shows the logged-in user, and df -h checks free disk space. Example: I used find ~ -name mission_brief.txt to locate a hidden file and cat to read the flag inside it.


5. The CIA Triad (Confidentiality, Integrity, Availability):
These are the three main goals of cybersecurity. Confidentiality keeps private data secret from unauthorized people, Integrity ensures nobody tampers with or alters files, and Availability makes sure systems and data are accessible whenever needed. Example: Putting a strong password on my laptop protects confidentiality, while backups ensure availability if my hard drive fails.


6. Privilege Levels & Superuser Accounts (Administrator vs. root):
Operating systems use different account levels to limit what users can change. A Standard account can only do daily tasks, whereas the superuser account has unrestricted control over the entire machine—called Administrator on Windows and root on Linux. Example: Hackers always try to escalate their privileges from a normal user to root so they can access every file on the system.


7. Built-in Windows Management & Security Tools:
Windows includes native tools to monitor and protect the system without needing extra software. Task Manager shows live CPU and RAM usage for running processes, Windows Security scans for malware and viruses, and Windows Defender Firewall blocks unauthorized network traffic across Domain, Private, and Public network profiles.



# 3. Practical Relevance (4 Real-World Examples)

1. Investigating Servers Quickly Using the Linux CLI:
In real-world IT and cybersecurity jobs, most cloud and web servers do not have a graphical desktop (they are "headless"). System administrators connect remotely using SSH and run commands like uname -a, df -h, and whoami to check the server's OS version, available storage, and active permissions within seconds.


2. Troubleshooting Slow Computers with Task Manager:
When an office computer freezes or slows down, IT support technicians open Task Manager to inspect the Processes and Performance tabs. This lets them spot which background program is eating up 100% of the CPU or RAM and end that specific task without restarting the entire PC.


3. Enforcing the Principle of Least Privilege in Companies:
Organizations apply User Management and File Permissions so employees only have access to the folders they actually need for their job. For instance, the accounting team can edit payroll spreadsheets, while interns only have standard accounts and cannot install unapproved software or view confidential HR folders.


4. Running Targeted Malware Scans on Suspicious Downloads:
When an employee downloads an unknown file or plugs in an external USB drive, security analysts use Windows Security's Custom Scan feature to scan that specific folder immediately, catching test signatures or threats before they spread to the rest of the network.



##

# Room 1 - Operating Systems: Introduction


<img width="1918" height="971" alt="image" src="https://github.com/user-attachments/assets/f83138ce-77f0-4d7d-a86d-c1996178ec07" />


# Room 2 - Windows Basics

<img width="1918" height="960" alt="image" src="https://github.com/user-attachments/assets/ca0f0598-fe7b-40a9-b988-9c6e6549e974" />

# Room 6 - Operating System Security

<img width="1918" height="977" alt="image" src="https://github.com/user-attachments/assets/f9415717-8292-48d4-8aca-a220d5ecfaeb" />
