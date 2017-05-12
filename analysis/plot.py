import matplotlib.pyplot as plt
import re
import serial

# pattern = re.compile(r'\d+\.\d')

# ser = serial.Serial("/dev/tty.usbserial",115200)
ser = serial.Serial("/dev/tty.usbmodem1411",115200)
i = 0
ii = []
res = []
fout = open('out.txt','w')

while i<1000:
    line = ser.readline().rstrip()
    print i,line
    fout.write(line+"\n")
    i = i+1
    # snw = pattern.findall(line)
    # if snw:
    #     snw = float(snw[0])
    #     print snw
        # plt.plot(ii,res)
        # plt.show()

        # i = i+1 

ser.close()
fout.close()

