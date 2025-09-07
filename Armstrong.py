# Take input from user
num = int(input("Enter a number: "))

# Store original number
original = num

# Find number of digits
n = len(str(num))

# Calculate sum of powers of digits
sum_of_powers = 0
temp = num
while temp > 0:
    digit = temp % 10
    sum_of_powers += digit ** n
    temp //= 10

# Check if the number is an Armstrong number
if sum_of_powers == original:
    print(f"{original} is an Armstrong number.")
else:
    print(f"{original} is not an Armstrong number.")
