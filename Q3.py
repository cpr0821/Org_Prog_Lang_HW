a = 1
b = 2

print("Global variables: a=1, b=2")
print("Variables declared in fun1: c=3, d=4")
print("Variables declared in fun2: e=5, f=6")
print("Variables declared in fun3: g=7, h=8")
print()

def fun1():
    c = 3
    d = 4
    global a

    print("Print statements from fun1:")
    print("This is global a: ")
    print(a)
    print("This is local c: ")
    print(c)
    print()

    def fun2():
        e = 5
        f = 6
        global b
        nonlocal d

        print("Print statements from fun2:")
        print("This is global b (should be 2): ")
        print(b)
        print("This is nonlocal d: ")
        print(d)
        print("This is local e: ")
        print(e)
        print()

        def fun3():
            g = 7
            h = 8
            global a
            nonlocal c
            nonlocal f

            print("Print statements from fun3:")
            print("This is global a: ")
            print(a)
            print("This is nonlocal c: ")
            print(c)
            print("This is nonlocal f: ")
            print(f)
            print("This is local g: ")
            print(g)

        fun3()
    fun2()

fun1()
