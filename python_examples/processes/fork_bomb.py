import os

while True:
    pid = os.fork()
    print("new fork was crated")
