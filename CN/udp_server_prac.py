import socket
sock = socket.socket(socket.AF_INET,socket.SOCK_DGRAM)

udp_host = socket.gethostname()
udp_port = 1234

sock.bind((udp_host,udp_port))

while True:
    print ("Connecting....")
    data,addr = sock.recvfrom(1024)
    print("received data",data,"from",addr)