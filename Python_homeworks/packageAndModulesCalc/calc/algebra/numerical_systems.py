def from_binary_to_octal(binary_number):
    return oct(from_binary_to_decimal(binary_number))


def from_binary_to_decimal(binary_number):
    return int(binary_number, 2)


def from_binary_to_hex(binary_number):
    return hex(from_binary_to_decimal(binary_number))


def from_octal_to_binary(octal_number):
    return bin(int(octal_number, 8))


def from_octal_to_decimal(octal_number):
    return int(octal_number, 8)


def from_octal_to_hex(octal_number):
    return hex(int(octal_number, 8))


def from_decimal_to_binary(decimal_number):
    return bin(int(decimal_number, 10))


def from_decimal_to_octal(decimal_number):
    return oct(int(decimal_number, 10))


def from_decimal_to_hex(decimal_number):
    return hex(int(decimal_number, 10))


def from_hex_to_binary(hex_number):
    return bin(int(hex_number, 16))


def from_hex_to_octal(hex_number):
    return oct(int(hex_number, 16))


def from_hex_to_decimal(hex_number):
    return int(hex_number, 16)