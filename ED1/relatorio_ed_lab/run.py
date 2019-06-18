from os import system
import csv

testFiles = ["AVL", "Arvore"]
typeFiles = ["rand", "seq"]
tamFiles = [100, 1000, 10000, 100000, 200000, 300000, 400000, 500000, 700000,
            900000, 1000000, 2000000, 3000000]
numBuscas = [10, 100, 1000]

system("mkdir output")
system("rm output/*")
for struct in testFiles:
    for num in numBuscas:
        for tipo in typeFiles:
            for tam in tamFiles:
                inputName = "input_{}_{}".format(tipo, tam)
                fileName = "output/{}_{}_{}.csv".format(struct, inputName, num)
                columns = "tempoInsert, qtdBuscas, tempoBusca"
                cmd = "./code/Desempenho{} {} < input/{}.txt".format(struct, num, inputName)
                print("Criando arquivo " + fileName)
                system("touch "+ fileName)
                system("echo '{}' >>  {}".format(fileName, fileName))
                system("echo '{}' >>  {}".format(columns, fileName))
                print(cmd)
                for c in range(0,30):
                    system(cmd + " >> " + fileName)

output = "output.csv"
system("rm " + output)
system("touch " + output)
system("python3.6 medias.py > " + output)
                