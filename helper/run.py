def get_bit_string(num) -> str:
    bit_string = ""
    while num != 0:
       bit_string = str(num&1) + bit_string
       num = num >> 1
    return bit_string
