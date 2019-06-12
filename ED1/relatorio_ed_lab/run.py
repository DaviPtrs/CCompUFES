from os import system

testFiles = ["Arvore", "Lista", "AVL"]
typeFiles = ["rand", "seq"]
tamFiles = [100, 1000, 10000, 100000, 200000, 300000, 400000, 500000, 700000,
            900000, 1000000, 2000000, 3000000]
numBuscas = [10, 100, 1000]




for struct in testFiles:
    for num in numBuscas:
        for tipo in typeFiles:
            for tam in tamFiles:
                inputName = "input_" + tipo + "_" + str(tam)
                fileName = "output/" + inputName + "_" + str(num) + ".csv"
                cmd = "./code/Desempenho" + struct + " " + str(num) + " < input/" + inputName + ".txt"
                print("Criando arquivo " + fileName)
                system("touch "+ fileName)
                system("echo '" + fileName + "' >> " + fileName)
                print(cmd)
                for c in range(0,30):
                    system(cmd + " >> " + fileName)
                