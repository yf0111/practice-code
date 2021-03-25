import random

石頭 = '''
    _______
---'   ____)
      (_____)
      (_____)
      (____)
---.__(___)
'''

布 = '''
    _______
---'   ____)____
          ______)
          _______)
         _______)
---.__________)
'''

剪刀 = '''
    _______
---'   ____)____
          ______)
       __________)
      (____)
---.__(___)
'''
game_images = [石頭, 布, 剪刀]

sys = random.randint(1, 3) # 1 石頭 , 2 布 , 3 剪刀
userint = 0

while True :
  user = input("請輸入你想出的（剪刀、石頭、布）：")

  if user == "剪刀" :
    userint = 3
    print("你出的是：（剪刀） \n ",game_images[2])
    break

  elif user == "石頭" : 
    userint = 1
    print("你出的是：（石頭） \n ",game_images[0])
    break

  elif user == "布":
    userint = 2
    print("你出的是：（布） \n ",game_images[1])
    break

  else :
    print("***請輸入[剪刀]、[石頭]或[布]歐***")
    continue


if sys == 1 : #石頭
  print("電腦出的是：（石頭） \n ",game_images[0])

elif sys == 2: #布
    print("電腦出的是：（布） \n ",game_images[1])

elif sys == 3: #剪刀
    print("電腦出的是：（剪刀） \n ",game_images[2])


if (userint == 3 and sys == 1) or (userint == 2 and sys == 3) or (userint == 1 and sys == 2) :
  print(" 你輸惹 ;_; ")
elif (userint == 3 and sys == 2) or (userint == 2 and sys == 1) or (userint == 1 and sys == 3) :
  print(" 你贏惹 ^O^ ")
elif (userint == 3 and sys == 3) or (userint == 2 and sys == 2) or (userint == 1 and sys == 1) :
  print(" 你們平手 \_/ ")