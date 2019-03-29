class MyClass(object):
    x = 0
    y = 0

    def my_print(self):
        # xをインスタンス固有のオブジェクトとして+1するので，別のオブジェクトには反映されない
        self.x += 1
        # yをクラス固有のオブジェクトとして+1するので，別のオブジェクトにも反映される
        MyClass.y += 1
        print('(x, y) = ({}, {})'.format(self.x, self.y))

f = MyClass
a = MyClass()
b = f()

# (x, y)が「現在どういう状態か？」を考えよう
a.my_print()
b.my_print()
b.my_print()
a.my_print()
    