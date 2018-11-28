import json
import os

cwd = os.getcwd()
jsonPath = '%s/%s' % (cwd, 'config.json')
json2Path = '%s/%s' % (cwd, 'config2.json')
json3Path = '%s/%s' % (cwd, 'config3.json')

properties = {}
properties2 = {}
properties3 = {}

try:
    with open(jsonPath) as data_file:
        properties = json.load(data_file)

except IOError as e:
    print(e)
    print('IOError: unable to open config.json')
    exit(1)
 
try:
    with open(json2Path) as data_file:
        properties2 = json.load(data_file)

except IOError as e:
    print(e)
    print('IOError: unable to open config2.json')
    exit(1)

try:
    with open(json3Path) as data_file:
        properties3 = json.load(data_file)

except IOError as e:
    print(e)
    print('IOError: unable to open config3.json')
    exit(1)

final = {}

final['Users'] = (properties,properties2,properties3)


with open('newConfig.json', 'w') as fp:
    json.dump(final, fp, indent=4)