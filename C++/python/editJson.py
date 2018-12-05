import json
import os

cwd = os.getcwd()
jsonPath = '%s/%s' % (cwd, '../json/newConfig.json')

jsonfile = {}
userJson = {}
try:
    with open(jsonPath) as data_file:
        jsonfile = json.load(data_file)

except IOError as e:
    print(e)
    print('IOError: unable to open newConfig.json')
    exit(1)

user = str(input("Informe o usuario ex:(User1)"))

i = 0
jsonfile = jsonfile['Users']
print(jsonfile[0])
for a in jsonfile:
    print(a)
    i += 1
