import os
import sys
x=5
i=0
if(len(sys.argv[0])>8 and sys.argv[0][5] == "_"):i=1
s="Sully_"+str(x-i)+".py";a='import os%cimport sys%cx=%d%ci=%d%cif(len(sys.argv[0])>8 and sys.argv[0][5] == "_"):i=1%cs="Sully_"+str(x-i)+".py";a=%c%s%c%cif (x):FT=open(s,"w");FT.write(a%c(10,10,x-i,10,0,10,10,39,a,39,10,37));FT.close();os.system("python "+s)'
if (x):FT=open(s,"w");FT.write(a%(10,10,x-i,10,0,10,10,39,a,39,10,37));FT.close();os.system("python "+s)