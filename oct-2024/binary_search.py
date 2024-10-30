def binary_search(arr: list[int], target: int) -> str:
  left = 0
  right = len(arr) - 1

  while(left <= right):
    mid = (left + right) // 2

    if (target == arr[mid]):
      return f'{target} found at index: {mid}'
    elif (target > arr[mid]):
      left = mid + 1
    else:
      right = mid - 1

  return f'{target} not found'


def binary_search_recursive(arr: list[int], target: int, start: int, end: int) -> str:
  if (start > end):
    return -1

  mid  = start + (end - start) // 2

  if (arr[mid] == target):
    return mid
  if (arr[mid] < target):
    return binary_search_recursive(arr, target, mid + 1, end)
  else:
    return binary_search_recursive(arr, target, start, mid - 1)


def binary_search_first_occurance(arr: list[int], target: int) -> str:
  left = 0
  right = len(arr) - 1
  first_occurance = None

  while (left <= right):
    mid = (left + right) // 2

    if (target == arr[mid]):
      first_occurance = mid
      right = mid - 1
    elif (target > arr[mid]):
      left = mid + 1
    else:
      right = mid - 1

  if first_occurance is not None:
    return first_occurance

  return f'{target} not found'


def binary_search_last_occurance(arr: list[int], target: int) -> str:
  left = 0
  right = len(arr) - 1
  last_occurance = None

  while (left <= right):
    mid = (left + right) // 2

    if (target == arr[mid]):
      last_occurance = mid
      left = mid + 1
    elif (target > arr[mid]):
      left = mid + 1
    else:
      right = mid - 1

  if last_occurance is not None:
    return last_occurance

  return f'{target} not found'


if __name__=="__main__":
  arr = [-3, -2, -2, -2, -1, 0, 1, 2, 3, 4]
  # print(binary_search(arr, -2))
  print(binary_search_recursive(arr, 1, 0, len(arr) - 1))
  # print(binary_search_first_occurance(arr, -2))
  # print(binary_search_last_occurance(arr, -2))
