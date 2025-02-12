## =========================================================================
## @author Adrian Eduardo Ruiz Cerquera (adrianrrruiz@gmail.com)
## =========================================================================

import random

'''
Auxiliary function to sort a sequence of comparable (<) elements
@input    S a reference to a secuence of comparable elements.
@optional p first index
@optional r last index
@output   S an ordered permutation of the input.
@complexity Th(|S|.log2(|S|)), O(|S|^2)
'''
def quick_aux(S, p, r):
  if p < r:
    q = randomized_partition(S, p, r)
    quick_aux(S, p, q-1)
    quick_aux(S, q+1, r)

'''
Sorts a sequence of comparable (<) elements
@input    S a reference to a secuence of comparable elements.
@output   S an ordered permutation of the input.
@complexity Th(|S|.log2(|S|)), O(|S|^2)
'''
def quick(S):
  quick_aux(S, 0, len(S)-1)

'''
Finds a pivot and put the appropriate value in its position
@input    S a reference to a secuence of comparable elements.
@optional p first index
@optional r last index
@output   a pivot value with the appropriate value in its position
@complexity O(|S|)
'''
def randomized_partition(S, p, r):
  i = random.randint(p, r)
  S[i], S[r] = S[r], S[i]
  return partition(S, p, r)

'''
Uses the last value as pivot and put the appropriate value in its position
@input    S a reference to a secuence of comparable elements.
@optional p first index
@optional r last index
@output   a pivot value with the appropriate value in its position
@complexity O(|S|)
'''
def partition(S, p, r):
  x = S[r]
  i = p - 1
  for j in range(p, r):
    if S[j] <= x:
      i += 1
      S[i], S[j] = S[j], S[i]
  S[i+1], S[r] = S[r], S[i+1]
  return i+1
