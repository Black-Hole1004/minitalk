# Minitalk
Minitalk is a simple client-server communication program developed in C. It uses signals to communicate between the client and server, and supports reliable message transmission.

# Features
- Client-server communication using signals
- Supports reliable message transmission
- Lightweight and efficient
- Getting Started
# Prerequisites
- A C compiler (e.g. GCC)
- make command installed

# Installation
- Clone the repository:

```git clone https://github.com/Black-Hole1004/minitalk.git```
- Navigate to the project directory:

```cd minitalk```
- Compile the program using the Makefile:  

```make```
# Usage
Once you have Minitalk up and running, you can use it to send messages between the client and server.

- Start the server:

```./server```
- Note the process ID (PID) of the server, which will be printed to the console.

- Start the client and specify the server PID and the message to send:

```./client <server_pid> <message>```
The message will be sent to the server and displayed on the console.

# Contributing
Contributions are always welcome! If you'd like to contribute to Minitalk, please feel free to submit a pull request.
