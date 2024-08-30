# 8월 달력 출력하기

print("\t\t<8월 달력>\t\t")
print("일\t월\t화\t수\t목\t금\t토\t")
day = 1
while day < 32:
    if day == 1:
        print(f"\t{day}", end = '\t')
        day += 1
    print(f"{day}", end = '\t')
    day += 1
    if(day % 7 == 0):
        print()