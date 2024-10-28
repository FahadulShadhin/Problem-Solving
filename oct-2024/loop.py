arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
s = "Hello world"
user = {
  'name': 'John Doe',
  'age': 77,
  'email': 'john@email.com'
}
users = [
  {
      'name': 'John Doe',
      'email': 'john@email.com'
  },
  {
      'name': 'Jane Doe',
      'email': 'jane@email.com'
  }, 
  {
      'name': 'Harry Potter',
      'email': 'harry@email.com'
  }
]

for num in arr:
  print(num)
print('___________________________')

for i in range(0, len(arr)):
  print(f'value: {arr[i]}, index: {i}')
print('___________________________')

for indx, val in enumerate(arr):
  print(f'value: {val}, index: {indx}')
print('___________________________')

for key in user:
  print(key)
print('___________________________')

for key in user.keys():
  print(key)
print('___________________________')

for value in user.values():
  print(value)
print('___________________________')

for key, value in user.items():
  print(f'value: {value}, key: {key}')
print('___________________________')

for user in users:
  for key, value in user.items():
    print(f'Value: {value}, Key: {key}')
  print('***********************')

for i in range(0, len(s)):
  print(s[i])

for i, c in enumerate(s):
  if (c != ' '):
    print(f'{i}: {c}')
