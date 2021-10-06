pointer = 1
index = 0

def new_sort_gen(lst):
  global index
  global pointer
  head = lst[0]
  tail = lst[1:]
  if len(lst) == 1:
    index += 1
    if index >= pointer:
      index = 0
      pointer += 1
      return head
  less = [v for v in tail if v < head]
  greater = [v for v in tail if v >= head]
  if index + len(less) + 1 == pointer:
    index = 0
    pointer += 1
    return head
  elif index + len(less) < pointer:
    index += len(less) + 1
    return new_sort_gen(greater)
  else:
    return new_sort_gen(less)


data = [3,1,-5,7,-4,2,6,200,9,-2,4,3,0,-2] + [100]*100000

# Enumerate first 20 elements of the sorted list
for _ in range(20):
  print(new_sort_gen(data), end=" ")

# Add a line break for below problem answer printing
print()
# sort_gen reset
pointer = 1
# Enumerate until sum of squares of sorted elements becomes >50
sum = 0
while True:
  val = new_sort_gen(data)
  sum += val*val
  if sum > 50:
    print('Sum =', sum)
    break