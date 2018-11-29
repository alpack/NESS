import json
import os

cwd = os.getcwd()
jsonPath = '%s/%s' % (cwd, '/json/newConfig.json')
jsonPath2 = '%s/%s' % (cwd, '/json/user.json')

properties = {}
properties2 = {}


try:
    with open(jsonPath) as data_file:
        properties = json.load(data_file)

except IOError as e:
    print(e)
    print('IOError: unable to open newConfig.json')
    exit(1)

try:
    with open(jsonPath2) as data_file:
        properties2 = json.load(data_file)

except IOError as e:
    print(e)
    print('IOError: unable to open user.json')
    exit(1)

properties = properties['Users']
properties.append(properties2)

print(properties)
final = {}
final['Users'] = properties

print(final)

with open('json/newConfig.json', 'w') as fp:
    json.dump(final, fp, indent=4)