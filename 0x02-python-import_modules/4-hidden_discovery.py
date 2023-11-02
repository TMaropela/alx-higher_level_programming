#!/usr/bin/python3
import hidden_4

#Printing sorted names from dir

if __name__ == "__main__":
    for k in dir(hidden_4):
        if ("__" not in k):
            print(k)
