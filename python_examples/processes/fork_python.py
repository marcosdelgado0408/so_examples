# -*- coding: utf-8 -*-
import time
import os

print ("sou o processo pai!, ainda nao tenho filhos")
pid1 = os.fork() #fork cria um processo a partir do processo pai
pid2 = os.fork()

print("PID:",os.getpid())

print("\n")

if pid1 == 0  or pid2 == 0:
    while True:
        print ('sou o filho ficarei esperando para sempre aqui')
        time.sleep(1)


else:  
    while True:
        print ('sou o processo pai ficarei esperando para sempre aqui')
        time.sleep(1)
