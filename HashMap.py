import hashlib

class HashMap():

    def __init__(self, size):
        self.table = [[] for _ in range(size)]
        self.table_size = size

    def hash(self, key):
        return hash(key) % self.table_size

    def insert(self, key, value):
        index = self.hash(key)
        self.remove(key)
        self.table[index].append((key, value))

    def get(self, key):
        index = self.hash(key)
        for (k, v) in self.table[index]:
            if k == key:
                return v
        else:
            return None

    def remove(self, key):
        index = self.hash(key)
        for i, element in enumerate(self.table[index]):
            if element[0] == key:
                return self.table[index].pop(i)
        return None


def test_insert(HashMap):
    HashMap.insert('hello', 25)
    print(HashMap.table)


h = HashMap(20)
test_insert(h)
