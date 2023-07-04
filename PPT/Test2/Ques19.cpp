def calculate_mean(num):
    s=0
    for x in num:
        s=s+x
    mean=s/len(num)
    print(mean)

data = [10, 15, 20, 25, 30]
calculate_mean(data)
