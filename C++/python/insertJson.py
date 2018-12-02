import json
import os

cwd = os.getcwd()
jsonPath = '%s/%s' % (cwd, '/json/newConfig.json')
jsonPath2 = '%s/%s' % (cwd, '/json/user.json')

jsonfile = {}
jsonfile2 = {}


try:
    with open(jsonPath) as data_file:
        jsonfile = json.load(data_file)

except IOError as e:
    print(e)
    print('IOError: unable to open newConfig.json')
    exit(1)

try:
    with open(jsonPath2) as data_file:
        jsonfile2 = json.load(data_file)

except IOError as e:
    print(e)
    print('IOError: unable to open user.json')
    exit(1)

jsonfile = jsonfile['Users']
jsonfile.append(jsonfile2)

print(jsonfile)
final = {}
final['Users'] = jsonfile

with open('json/newConfig.json', 'w') as fp:
    json.dump(final, fp, indent=4)


