## =========================================================================
## @author Adrian Eduardo Ruiz Cerquera (adrianrrruiz@gmail.com)
## =========================================================================

'''
Sorts a sequence of comparable (<) elements
@input    S a reference to a secuence of comparable elements.
@output   S an ordered permutation of the input.
@complexity O(|S|^2)
'''

def bubble(S):
  for i in range(len(S)):
    for j in range(i+1, len(S)):
      if S[j] < S[i]:
        S[i], S[j] = S[j], S[i]
