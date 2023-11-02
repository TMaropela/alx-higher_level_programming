#!/usr/bin/python3
import sys

if __name__ == ("__main__"):
    k = 0
    result = 0
    for k in sys.argv[1:]:
        result += int(k)
    print("{:d}".format(result))
