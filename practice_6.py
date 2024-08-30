# 퀴즈 점수 계산하기

answer = list(input("퀴즈 결과를 입력해 주세요.(예: OOXOXXO): "))
total = 0
current = 1
for i in range:
    if i == 'O':
        total += current
        current += 1
    elif i == 'X':
        if current > 1:
            current = 1

print(total)


##########################################


answer = input("퀴즈 결과를 입력해 주세요.(예: OOXOXXO): ").split("X")
score = 0
for n in answer:
    for j in range(0, len(n) + 1):
        score += j
print(score)