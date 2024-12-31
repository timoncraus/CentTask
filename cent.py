import time
start_time = time.time()

n1 = 1
min_count = 470
for n2 in range(n1, 100-2):
    for n3 in range(n2, 100-1):
        for n4 in range(n3, 100):
            coins = [n1, n2, n3, n4]
            general_count = 0
            for cost in range(1, 100):
                rest = cost
                count = 0
                for i in range(len(coins) - 1, -1, -1):
                    while rest - coins[i] >= 0:
                        rest -= coins[i]
                        count += 1
                general_count += count
            if general_count < min_count:
                min_count = general_count
            if general_count <= 415:
                print(general_count, n1, n2, n3, n4)
    


end_time = time.time()
elapsed_time = end_time - start_time
print(f"Время выполнения: {elapsed_time:.2f} секунд.")