# echo-server.py

import socket

HOST = "127.0.0.1"  # Standard loopback interface address (localhost)
PORT = 65432  # Port to listen on (non-privileged ports are > 1023)

with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
    s.bind((HOST, PORT))
    s.listen()
    conn, addr = s.accept()
    with conn:
        print(f"Connected by {addr}")
        while True:
            data = conn.recv(1024)
            if not data:
                break
            conn.sendall(data)

# import socket
# host = "127.0.0.1"
# port = 1234
# sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
# with sock:
#     sock.bind((host, port))
#     sock.listen()
#     print("Server on....")
#     conn, addr = sock.accept()
#     with conn:
#         while True:
#             data = conn.recv(1024)
#             if not data:
#                 break
#             conn.sendall(data)
