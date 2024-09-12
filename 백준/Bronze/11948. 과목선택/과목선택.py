import sys
input = sys.stdin.readline

sc_sci = []
sc_rem = []

for _ in range(4):
    sc_sci.append(int(input()))

for _ in range(2):
    sc_rem.append(int(input()))

sc_sci.sort()
sc_rem.sort()

print(sc_sci[-3] + sc_sci[-2] + sc_sci[-1] + sc_rem[-1])