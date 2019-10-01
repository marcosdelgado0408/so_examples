import socket


s = socket.socket(socket.AF_INET,socket.SOCK_STREAM)
s.bind(("localhost",5555))
s.listen(5)



while True:
    clientsocket, adress = s.accept()
    print(adress)
    clientsocket.send()