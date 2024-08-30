# 팩토리얼

num = int(input("숫자를 입력해주세요.: "))
factorial = 1
for i in range(1, num+1):
    factorial *= i
print("%d!은 %d입니다." %(num, factorial))
