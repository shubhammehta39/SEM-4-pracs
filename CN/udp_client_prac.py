import socket

sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

udp_port = socket.gethostname()
udp_host = 1234
 

msg = "Hello shubham!!"

print("UDP PORT :",udp_port)

print("UDP HOST :",udp_host)

sock.sendto(msg.encode('UTF-8'),(udp_port,udp_host))

 