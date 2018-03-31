    t=int(input())
    for i in range(t):
      n=input()
      x=n[::-1]
      if x==n:        
        print('wins')
      else:
        print('losses')  