s="dlrow olleh"
print(s)
l1=list(s)
l2=list(l1)
for i in range(0,len(s)):
    l2[i]=l1[len(s)-i-1]
   
s="".join(l2)
print(s)