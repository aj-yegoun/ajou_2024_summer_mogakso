## Chapter 2 출력과 문자열
# print("python")
# print("a" "b", "c" + "d")

# print("""
# <temp>
# asdfghjkl
# asdfghjkl
# """)

# print("abc")
# print("efg", end = "")
# print("hijk")
# print("abc\negf\n")

# print("010","1234","5678", sep = "-")


## Chapter 3 변수와 자료형
# name = "Bob"
# print(name)
# a = 10
# b = a
# print(b)

# print(type("문자열"))
# print(type(10))
# print(type(2.5))
# print(type(True))
# print(type([1,2,3]))
# print(type((1,2,3)))
# print(type({'name' : 'Bob'}))

# print(2000 + 23)
# print("2000" + "3")

# print(2 > 3)
# print(2 < 9)


## Chapter 4 산술 연산자
# print(200 + 10 - 3)
# print(10 * 10, 100 / 8)

# print(55/3, 55//3, 55%3)
# print(2 ** 4)

# a = 5
# print(a, "* 1 =", a * 1)
# print(a, "* 2 =", a * 2)


## Chapter 5 입력과 자료형 변환
# name = input("이름을 입력하세요: ")
# print("입력한 닉네임은", name, "입니다.")

# a = input("숫자 1을 입력하세요: ")
# print(a)
# print(type(a))

# print(int(3.6))
# print(float(3))
# my_age = 32
# print("안녕 나는 " + str(my_age) + "살이고 파이썬 공부 중이야!")


## Chapter 6 조건문
# a = 10
# b = 7
# print(a > b)
# print(a >= b)
# print(a < b)
# print(a <= b)
# print(a == b)
# print(a != b)

# x = 10
# y = False
# print(x >= 10 and y == False)
# print(x < 10 or y == True)
# print(not y)

# money = 3000
# if money >= 5000:
#     print("결제가 가능합니다.")
# else:
#     print("결제가 불가능합니다.")
#     print("다른 카드를 준비해주세요.")

# button = int(input("1~3 중에서 입력하세요. "))
# if button == 1:
#     print("한식")
# elif button == 2:
#     print("중식")
# elif button == 3:
#     print("일식")
# else:
#     print("잘못된 번호 입력")


## Chapter 7 반복문
# for i in range(10):
#     print(i)

# for i in range(1,11):
#     print(i)

# for i in range(0, 11, 2):
#     print(i)

# for i in range(10, 0, -1):
#     print(i)

# x = 3
# for i in range(1,x+1):
#     print(i)

# for i in range(2, 10):
#     for j in range(1, 10):
#         print(i*j, end = "")
#     print()

# for i in range(1,6):
#     for j in range(1, i+1):
#         print()
#     print()

# x = 1
# while x <= 3:
#     print(x)
#     x += 1

# hit = 0
# while hit < 5:
#     hit += 1
#     print("나무를",hit,"번 찍었습니다.")
#     if hit == 5:
#         print("쓰러집니다.")

# number = 0
# while True:
#     number = int(input("문을 여시겠습니까? (1:Yes / 2:No)"))
#     if number == 1:
#         print("문이 열렸습니다.")
#         break
#     elif number == 2:
#         print("문을 열 수 없습니다.")
#     else:
#         print("잘못된 입력입니다.")


## Chapter 8 함수
# def printHello():
#     print("hello world")
# printHello()

# def printSum(a,b):
#     print(a+b)
# printSum(3,5)

# def printSum(a,b):
#     print(a+b)
# x = int(input("숫자 x를 입력하세요: "))
# y = int(input("숫자 y를 입력하세요: "))
# printSum(x,y)

# def getSum(a,b):
#     sum = a + b
#     return sum
# result = getSum(6,5)
# print(result)

# number = -10
# abs_number = abs(number)
# printSum(abs_number)


## Chapter 9 문자열 파헤치기
# hi = "abcdefghijklmnopqrstuvwxyz"
# print(hi[2])
# print(hi[6])
# print(hi[-1])
# print(hi[-8])
# print(hi[4:7])
# print(hi[4:-1])
# print(hi[9:])
# print(hi[:14])

# n = 3
# m = "가나다"
# print("%d %s" %(n, m))
# print("{0} {1}".format(n,m))
# print(f"{n} {m}")

# a = "asdfasdfasdf"
# print(len(a))
# print(a.count('f'))
# print(a.find('d'))
# print(a.replace("asdf", "qwer"))
# print(a.split('d'))


## Chapter 10 리스트
# value = [10, 9, 8, 9, 9]
# print(value[0])
# print(value[-1])
# example = [1, "python", 3]
# print(example[1])

# a = [10,9,8,7,6]
# for x in a:
#     print(x)
# for i in range(len(a)):
#     print("인덱스 ",i,"값: ", a[i])
# for i in range(len(a)):
#     a[i] = 'a'

# print(a)

# a = [1,2,3,4,5,6,7,8,9,10]
# print(a)
# print(a[0:5])
# print(a[:5])
# print(a[-5:])

# a = []
# a.append(0) # 데이터 삽입
# a.insert(3,6) # 원하는 인덱스에 데이터 삽입
# del a[1] # 인덱스로 데이터 삭제
# a.remove(1) # 원하는 값 삭제
# a.sort() # 리스트 정렬
# a.reverse() # 리스트 순서 뒤바꾸기

# array_2d = [[1,2,3], [4,5,6]]
# for array in array_2d:
#     print(array)


## Chapter 11. 튜플
# a = (1,2)
# b = [1,2]
# print(a)
# print(b)

# a = 1,2,3
# print(type(a))
# print(a[0])
# print(a[0:2])
# del a[0]

# a = 10
# b = 20
# c, d = a, b
# print(a,b,c,d)

# def min_max(ex_list):
#     return min(ex_list), max(ex_list)
# a=[1,2,3,4,5]
# result = min_max(a)
# print(result)
# print(type(result))


## Chapter 12. 집합
# a = set([5,3,2,5,2,1,4])
# b = set("apple")
# c = {1,4,2,5,7,3,6}
# print(a, type(a))
# print(b, type(b))
# print(c, type(c))

# a = set([1,2,3])
# b = set([2,3,4])
# print(a|b) # 합집합
# print(a.union(b)) 
# print(b.union(a))

# print(a&b) # 교집합
# print(a.intersection(b))
# print(b.intersection(a))

# print(a - b) # 차집합
# print(b-a)
# print(a.difference(b))

# a = set([1,2,3])
# a.add(-1)
# a.add(2)
# print(a)

# a= set([3,4,5])
# a.update([3,5,7,8])
# print(a)
# a.remove(3)
# print(a)


## CHapter 13. 딕셔너리
# dic = {'python': '파이썬', 'c': 'c언어'}
# print(dic["python"])
# print(dic["c"])

# dic = {"int": 1, "str": "문자", "ist": [1, 2], "tuple": (1, 2), "dict": {"python":"파이썬"}}
# print(dic["int"])
# print(dic["st="])
# print(dic["list"])
# print(dic["tuple"])
# print(dic["dict"])

# dic = {'python': '파이썬', 'c': 'c언어'}
# dic["d"] = "dictionary"
# print(dic)

# dic = {'python': '파이썬', 'c': 'c언어'}
# dic.update({"c" : "c++", "d" : "dictionary"})
# print(dic)
# del dic["c"]
# print(dic)

# dic = {'python': '파이썬', 'c': 'c언어'}
# for i in dic.keys():
#     print(i, end = "")
#     print(dic[i], end = "")


# # Chapter 14. 클래스
# class Waffle:
#     name = "waffle"

# choco = Waffle()
# print(choco.name)
# Waffle.name = "choco waffle"
# print(choco.name)

# class Waffle:
#     def setName(self, n):
#         self.name = n
# choco = Waffle()
# choco.setName("choco waffle")
# print(choco.name)

# class Avatar:
#     def setAvatar(self, name, hp):
#         self.name = name
#         self.hp = hp

#     def increaseHp(self):
#         self.hp += 10

#     def decreaseHp(self):
#         self.hp -= 10

#     def printHp(self):
#         print("현재", self.name, "의 hp는", self.hp, "입니다.")

# byunsoo = Avatar()
# byunsoo.setAvatar("byunsoo", 0)
# byunsoo.printHp

