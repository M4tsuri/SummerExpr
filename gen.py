from IPython import embed

def gen(**args): 
     inp = args['i'](**args['ia']) 
     with open(args['f'] + '.in', 'w') as inf: 
         inf.write(inp) 
     out = args['o'](inp) 
     with open(args['f'] + '.out', 'w') as outf: 
         outf.write(out)

def output(src): 
     tmp = src.split() 
     tmp = sorted(tmp) 
     res = '' 
     for i in tmp: 
         res += i 
         res += '\x0a' 
     return res[:-1] 

def input(l=1, u=1): 
     from string import ascii_letters 
     from random import randint 
     res = '' 
     for i in range(0, 10): 
         out = '' 
         leng = randint(l, u) 
         if leng == 0: 
             leng = 1 
         for j in range(0, leng): 
             out += ascii_letters[randint(0, 51)] 
         res += out 
         res += '\x0a' 
     print(res) 
     return res

embed()