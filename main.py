



if __name__ == "__main__":
    string="Hola a70 y a72 serán sustituidas, aa45 y aa38 no."
    x=string.split()
    s=""
    for i in x:
        if len(i)==3:
            if (i[0].isalpha() and i[1].isnumeric() and i[2].isnumeric()):
                i="***"

        s=s+i+" "

    print(string)
    print(s)