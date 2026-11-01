n = int(input())

s = input()

for i in range(len(s)):

  if s[i]=='1':

    break

if (i+1)%2==0:

  print('Aoki')

else:

  print('Takahashi')