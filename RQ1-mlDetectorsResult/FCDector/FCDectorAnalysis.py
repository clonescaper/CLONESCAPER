import os
import sys




def get_result(filename):
    result=[]
    epoch_result=[]
    deal=set()
    total=set()
    F1=0
    all=[]
    with open(filename) as fp:
        line=fp.readline()
        while line:
            if("checkpoint.pth" in line):
                # print("success:",len(deal))
                # print("total:",len(total))
                # print("E-R(%):",len(deal)/len(total))
                # if(len(all)>=100):
                #     break
                if(len(total)!=0):
                #if(len(total)!=0 and F1>=0.97):
                    all.append(len(deal)/len(total))
                deal=set()
                total=set()

            elif("pred_cur" in line):
                line=line.split()
                number=int(line[3][line[3].rfind("/")+1:])//100   
                total.add(number)
                if('pred_cur:0'==line[0]):
                    deal.add(number)
            elif("train: epoch" in line):
                line=line.split()
                F1=float(line[8])
            else:
                pass
            line=fp.readline()
    print(all)
    all.sort()
    print(all)
    print(len(all))
    print(sum(all)/len(all))
        


if __name__ == '__main__':
    get_result(sys.argv[1])
