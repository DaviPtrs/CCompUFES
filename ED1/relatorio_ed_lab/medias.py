from os import system
import csv

testFiles = ["AVL", "Arvore"]
typeFiles = ["rand", "seq"]
tamFiles = [100, 1000, 10000, 100000, 200000, 300000, 400000, 500000, 700000,
            900000, 1000000, 2000000, 3000000]
numBuscas = [10, 100, 1000]

for struct in testFiles:
    print("{}, médiaTempIns, qtdBusca, médiaTempBusca".format(struct))
    for num in numBuscas:
        for tipo in typeFiles:
            for tam in tamFiles:
                if (struct == "Arvore") and (tipo == "seq") and (tam > 100000):
                    continue
                inputName = "input_{}_{}".format(tipo, tam)
                fileName = "output/{}_{}_{}.csv".format(struct, inputName, num)
                with open(fileName) as csvfile:
                    file = csv.reader(csvfile, delimiter=',')
                    line = 0
                    avgTempIns = 0
                    avgTempBusca = 0
                    for row in file:
                        if line < 2:
                            line += 1
                        else:
                            avgTempIns += (float(row[0]) / 30)
                            avgTempBusca += (float(row[2]) / 30)
                rowName = "{} ({})".format(tam, tipo)
                print("{},{:.6f},{:.6f},{:.6f}".format(rowName, avgTempIns, num, avgTempBusca))



                        
