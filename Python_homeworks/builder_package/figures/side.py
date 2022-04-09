class Side:

    def __init__(self, length: int):
        self.length = length

    def __new__(cls, *args, **kwargs):
        if args.__getitem__(0) >= 0:
            return super().__new__(cls)
        else:
            print("The side length can't be a negative number!")
            return None

    def __str__(self):
        return f"Side length: {self.length}."


# side = Side(4)
# print(side)
