# echo-client.py

import socket

HOST = "127.0.0.1"  # The server's hostname or IP address
PORT = 65432  # The port used by the server

with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
    s.connect((HOST, PORT))
    s.sendall(b"Hello, world")
    data = s.recv(1024)

print(f"Received {data!r}")

# import socket
# host="127.0.0.1"
# port=1234
# sock=socket.socket(socket.AF_INET,socket.SOCK_STREAM)
# with sock:
# 	sock.connect((host,port))
# 	sock.sendall(bytes(input("Enter message "),"utf-8"))
# 	print("message from server=>"+(sock.recv(1024)).decode("utf-8"))