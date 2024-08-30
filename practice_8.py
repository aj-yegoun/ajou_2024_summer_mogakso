# 전자레인지 시간 설정하기

print("1. 10초\t2. 30초\t3. 1분\t4. 10분\t5. 시작")
time = 0
while (1):
    menu = int(input("원하는 버튼의 숫자를 입력해 주세요.: "))
    if menu == 1:
        time += 10
    elif menu == 2:
        time += 30
    elif menu == 3:
        time += 60
    elif menu == 4:
        time += 600
    elif menu == 5:
        print("\n전자레인지를 작동합니다.")
        break
    else:
        print("잘못된 입력입니다.")

    sec = time
    if sec >= 60:
        min = sec // 60
        sec -= min * 60
        print(min, end = ":")
    if time < 60:
        print("00:", end = "")
    if sec != 0:
        print(str(sec))
    if sec == 0:
        print("00")