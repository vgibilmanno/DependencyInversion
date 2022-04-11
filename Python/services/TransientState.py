from random import randint

class TransientState():
    def __init__(self) -> None:
        self.value = randint(0, 100)
        pass

    def get_value(self) -> int:
        return self.value