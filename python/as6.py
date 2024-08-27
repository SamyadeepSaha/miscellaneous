import math
import random

k = float(input('Enter number: '))
print("Absolute value: {}".format(abs(k)))
print('Upward to its nearest integer: {}'.format(math.ceil(k)))
print('Downward to its nearest integer: {}'.format(math.floor(k)))
if k > 0:
    print('Logarithm (base 10): {}'.format(math.log(k, 10)))
print("Random number: {}".format(random.triangular(0.0, k)))
print('Sin value: {}'.format(math.sin(k)))
