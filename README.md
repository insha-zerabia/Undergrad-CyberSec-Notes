
# Lab 03 – Python Programming for Cyber Security

**Student Roll Number:** 25L-2042  
**Section:** BCY-3A  
**Course:** CY-2004 – Intro to Cyber Security  
**Institution:** FAST NUCES Lahore  

---

## How to Run Each Exercise

Activate the virtual environment first (if used):
```bash
source labenv/bin/activate
```

### Exercise 1 – XOR Cipher (`ex1_xor_cipher.py`)
```bash
python3 ex1_xor_cipher.py
```
Encrypts a sample string using a single-byte XOR key, then decrypts it back.  
Output ends with `Reversible: True`.

### Exercise 2 – Port Scanner + Banner Grabbing + CSV (`ex2_port_scanner.py`)
```bash
python3 ex2_port_scanner.py scanme.nmap.org -p 1-1000 -t 150 --output results.csv
```
- Multithreaded TCP connect scan on the authorized target
- Banner grabbing on every open port
- Results saved to `results.csv` (columns: target, port, banner, timestamp)

Compare with official Nmap:
```bash
nmap -sT -p 1-1000 scanme.nmap.org
```

### Exercise 3 – Bulk HTTP Title Grabber (`ex3_title_grabber.py`)
```bash
python3 ex3_title_grabber.py urls.txt
```
Reads URLs from `urls.txt`, fetches them concurrently using ThreadPoolExecutor, and prints HTTP status, page title, and response time. Unreachable URLs are reported without crashing the program.

### Exercise 4 – SSH Auth Log Analyzer (`ex4_log_analyzer.py`)
```bash
python3 ex4_log_analyzer.py
```
Parses `sample_auth.log`, extracts IPs and usernames from “Failed password” lines, ranks IPs by frequency, and reports the most targeted username.  
Expected top IP: `203.0.113.5` (4 attempts). Most targeted username: `root`.

### Exercise 5 – File Integrity Checker (`ex5_integrity_checker.py`)
```bash
# Create baseline
python3 ex5_integrity_checker.py --baseline test_integrity

# Later check for changes
python3 ex5_integrity_checker.py --check test_integrity
```
`--baseline` walks the folder, computes SHA-256 of every file, and writes `baseline.json`.  
`--check` recomputes hashes and reports MODIFIED, NEW, and MISSING files.

---

## Supporting Files
- `urls.txt` – test URLs for Exercise 3
- `sample_auth.log` – sample SSH log for Exercise 4
- `results.csv` – sample output from Exercise 2
- `baseline.json` – sample baseline from Exercise 5

---

## Conceptual Questions

**1. Why is Python’s lack of a compilation step an advantage for security tool development, and what is the corresponding disadvantage?**  
Advantage: A security professional can write a short script, run it immediately, observe the result, and iterate within minutes. This rapid write-run-observe loop is essential when testing hypotheses against a live target.  
Disadvantage: Errors are only discovered at runtime, and pure Python is generally slower than compiled C/C++ for CPU-intensive tasks.

**2. Explain the difference between `==` and `is` in Python, and describe a scenario where confusing the two could produce a subtle bug in a security script.**  
`==` compares values; `is` compares object identity (whether two names point to the exact same object in memory).  
A common bug is writing `if status is "open"` instead of `if status == "open"`. The identity check can fail even when the strings look identical, causing a scanner or log parser to miss detections.

**3. What does `connect_ex()` return that makes it more suitable than `connect()` for writing a port scanner?**  
`connect_ex()` returns an integer error code (0 = success / port open) instead of raising an exception. This allows thousands of ports to be tested without a try/except around every attempt, keeping the scanner both fast and clean.

**4. In the TCP three-way handshake, what specifically distinguishes an OPEN port’s response from a CLOSED port’s response, and from a FILTERED port’s (non-)response?**  
- OPEN: Target returns SYN-ACK.  
- CLOSED: Target returns RST.  
- FILTERED: No response arrives within the timeout (usually blocked by a firewall).

**5. Why does the port scanner in Part H use threads rather than running each port check sequentially, and why are threads (rather than separate processes) an appropriate tool for this specific job?**  
Sequential scanning would wait for each timeout one after another and become extremely slow. Threads allow many connection attempts to run at the same time. Because the work is I/O-bound (waiting on the network), Python threads are efficient; the Global Interpreter Lock is not a major bottleneck for this type of task.

**6. What is the practical security value of banner grabbing beyond simply knowing a port is open?**  
A banner often reveals the exact service name and version (for example “OpenSSH 6.6.1p1”). This information can be checked directly against known CVEs, allowing an attacker or defender to determine whether a specific vulnerability is present.

**7. Give one example (not from this manual) of a legitimate, authorized use for a Python packet-crafting or sniffing script.**  
In an authorized penetration test, a Python script using Scapy can craft TCP packets with unusual flag combinations to test how a firewall or IDS responds. The results help the organization improve its detection rules.

**8. Why does this manual decline to provide working keylogger or credential-harvesting code, even though such tools exist in real security work?**  
These tools can be easily misused for illegal purposes. The manual deliberately restricts itself to defensive and authorized reconnaissance techniques. Any higher-risk capability must be developed only inside an isolated lab under explicit written authorization and faculty supervision.

---

## Self-Evaluation
All five exercises were completed and tested against the authorized targets and sample data provided in the lab manual. Outputs match the expected results described in the Self-Grading Guide of the lab document.

