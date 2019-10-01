#reference: https://realpython.com/python-sockets/

import socket

HOST = "localhost"  # The server's hostname or IP address
PORT = 5555        # The port used by the server

with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
    s.connect((HOST, PORT))
    s.sendall(b"ola")
    data = s.recv(1024)

print('Received', repr(data))
