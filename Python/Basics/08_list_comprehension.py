temp = [91,24,83,55,33]

# new_temp = []

# for temps in temp:
#     new_temp.append(temps/10)

new_temp = [temps / 10 for temps in temp]

print(new_temp)


t2 = [222,111,-999,230]

new_t2 = [temps2 / 10 for temps2 in t2 if temps2 != -999]

print(new_t2)

t2 = [222,111,-999,230]

new_t2 = [temps2 / 10 if temps2 != -999 else 0 for temps2 in t2 ]

print(new_t2)


