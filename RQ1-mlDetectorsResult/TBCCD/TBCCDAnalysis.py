import os
import argparse

parser = argparse.ArgumentParser()
parser.add_argument("file",type=str,help="analysis file name")
args=parser.parse_args()

def analysis_five(filename):
    count=set()
    success=0
    with open(filename, 'r') as fp:
        lines=fp.readline()
        while lines:
            if(lines.startswith("correct")):  
                line=lines.split(" ")
                # print(line)
                # print(line[1])
                pred=line[4]
                num=int(line[6][line[6].rindex("/")+1:line[6].rindex(".")])//10
                if(pred=="-1" and num not in count):
                    success+=1
                count.add(num)
            lines=fp.readline()
    print("success:",success)
    print("total:",len(count))

def analysis_one(filename):
    count=set()
    success=0
    with open(filename, 'r') as fp:
        lines=fp.readline()
        while lines:
            if(lines.startswith("correct")):  
                line=lines.split(" ")
                # print(line)
                # print(line[1])
                pred=line[4]
                num=int(line[6][line[6].rindex("/")+1:line[6].rindex(".")])
                if(pred=="-1" and num not in count):
                    success+=1
                count.add(num)
            lines=fp.readline()
    print("success:",success)
    print("total:",len(count))

if __name__ == '__main__':
    analysis_five(args.file)  
