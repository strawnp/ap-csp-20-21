import cs50

while True:
    start_size = cs50.get_int("Start size: ")
    if start_size >= 9:
        break

while True:
    end_size = cs50.get_int("End size: ")
    if end_size >= start_size:
        break

num_years = 0

while start_size < end_size:
    new_llamas = start_size // 3
    rip_llamas = start_size // 4
    start_size += new_llamas - rip_llamas
    num_years += 1
    # print(f"DEBUG - Updated population: {start_size}")

print(f"Years: {num_years}")