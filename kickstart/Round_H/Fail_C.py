
# def romanToInt(s):
        # translations = {
        #     "I": 1,
        #     "V": 5,
        #     "X": 10,
        #     "L": 50,
        #     "C": 100,
        #     "D": 500,
        #     "M": 1000
        # }
        # number = 0
        # s = s.replace("IV", "IIII").replace("IX", "VIIII")
        # s = s.replace("XL", "XXXX").replace("XC", "LXXXX")
        # s = s.replace("CD", "CCCC").replace("CM", "DCCCC")
        # for char in s:
        #     number += translations[char]
        # print(number)
def make_change(s):
    # num = 0;
    # temp = s
    # s = s.replace("01","2");
    # s = s.replace("12","3");
    # s = s.replace("23","4");
    # s = s.replace("34","5");
    # s = s.replace("45","6");
    # s = s.replace("56","7");
    # s = s.replace("67","8");
    # s = s.replace("78","9");
    # s = s.replace("89","0");
    # s = s.replace("90","1");



    prev = s[0]
    d=len(s)
    i=1
    # for i in range(1,d):
    while(i<d):
        if(int(prev)+1 == int(s[i])):
            s.replace(s[i-1]+s[i],str(int(s[i])+1))
            # c = chr(int(s[i])+1)
            # s=s[:i-1]+c+s[i+1:] 
            i-=1;
            d=len(s)
        i+=1
        if(i>=d):
            break;
        prev = s[i]
    return s;
    # if(temp == s):
    #     # return num;
    #     return s;
    # else:
    #     return make_change(s);



t=int(input())
tt=1
while(tt<=t):
    n=int(input())
    s=input()
    # temp = s
    while(True):
        temp = s
        s = make_change(s)
        if(temp == s):
            break;
    # ans = make_change(s)
    print("Case #",tt,": ",s,sep='')
    tt+=1
