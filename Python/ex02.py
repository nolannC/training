def swap(x, y):
    """
    On peux aussi utiliser une variable temporaire pour changer les valeurs (3 étapes)
    Ou swapper les valeurs  nativement en python
    ex 1 :
    temp = x
    x = y
    y = temp
    ex 2 :
    x, y = y, x
    """
    # Renvoie des valeurs changer
    return y, x


# ask x and y
x = int(input("x ?"))
y = int(input("y ?"))

# before swap
print(f"x : {x}, y : {y}")
x, y = swap(x, y)
# after swap
print(f"x : {x}, y : {y}")
