pointer = 0
index = 0

def new_flatten(lst):
  global index
  global pointer
  for e in lst:
    if type(e) == int:
      index += 1
      if index > pointer:
        index = 0
        pointer += 1
        return e
    elif type(e) == list:
      if index + len(e) > pointer:
        return new_flatten(e)
      else:
        index += len(e)


# Add up numbers until the sum becomes greater than 10
data = [1, [-2, [[[4]]], [0, 5], [], 3], [4], 2, 7]
sum = 0
while True:
  e = new_flatten(data)
  if e == None:
    break
  print(e, end=' ')
  sum += e
  if sum > 10:
    print()
    break
print('Result:', sum)