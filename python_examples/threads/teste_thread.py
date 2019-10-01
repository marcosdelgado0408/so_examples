import threading



def funcao_da_thread():
    print("Thread working")




if __name__ == "__main__":
    
    thread1 = threading.Thread(target = funcao_da_thread, args = ())
    
    thread1.start()
