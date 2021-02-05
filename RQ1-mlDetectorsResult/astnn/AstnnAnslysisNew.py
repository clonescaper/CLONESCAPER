import os
import argparse
import re
parser = argparse.ArgumentParser()
parser.add_argument('files', type=str,help='result files')
args=parser.parse_args()

def result_analysis(filename):
    counts=set()
    total=set()
    success=0    
    lines="test"
    div=100
    with open(filename) as fp:
        lines=fp.readline()
        while lines:
            lines=lines.split()
            # print(lines)
            if(len(lines)<2):
                lines=fp.readline()
                continue
            if(lines[0]=='error'):
                id1=int(lines[4])
                id2=int(lines[6])
                id_1=int(id1//div)
                id_2=int(id2//div)
                if(id_1> 5200000 and id_1 not in counts and id_1==id_2):
                    success+=1
                    counts.add(id_1)
                    total.add(id_1)
            if(lines[0]=="correct:"):
                # print(lines)
                id1=int(lines[3])
                id2=int(lines[5])
                id_1=id1//div
                id_2=id2//div
                if(id_1> 520000 and id_1 not in total):
                    # print(id_1)
                    total.add(id_1)

            lines=fp.readline()
    print("success:",success)
    print("total:",len(total))
    print(success/len(total))
if __name__=='__main__':
    result_analysis(args.files)
