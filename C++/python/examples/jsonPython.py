import json
import os

cwd = os.getcwd()
jsonPath = '%s/%s' % (cwd, '../../json/config.json')
jsonPath2 = '%s/%s' % (cwd, '../../json/config2.json')
jsonPath3 = '%s/%s' % (cwd, '../../json/config3.json')

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
    with open(jsonPath2) as data_file:
        properties2 = json.load(data_file)

except IOError as e:
    print(e)
    print('IOError: unable to open config.json')
    exit(1)

try:
    with open(jsonPath3) as data_file:
        properties3 = json.load(data_file)

except IOError as e:
    print(e)
    print('IOError: unable to open config.json')
    exit(1)

final = {}
final['Users'] = (properties, properties2, properties3)

print(final)

with open('../../json/newConfig.json', 'w') as fp:
    json.dump(final, fp, indent=4)