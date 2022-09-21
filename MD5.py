# Python 3 code to demonstrate the
# working of MD5 (byte - byte)

import hashlib

# encoding GeeksforGeeks using md5 hash
# function
result = hashlib.md5(b'GeeksforGeeks')

# printing the equivalent byte value.
print("The byte equivalent of hash is : ", end ="")
print(result.digest())
