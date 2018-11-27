import json
import os

cwd = os.getcwd()
jsonPath = '%s/%s' % (cwd, 'config.json')

properties = {}

try:
    with open(jsonPath) as data_file:
        properties = json.load(data_file)

except IOError as e:
    print(e)
    print('IOError: unable to open config.json')
    exit(1)
 
properties['Habilidades']['arduino'] = 8
properties['Habilidades']['python'] = 3
properties['Classe'] = 'Kleber'
properties['Descricao'] = 'Oi eu sou um dev'
properties['Email'] = 'phjfg@cesar.school'

print(properties)

with open('newConfig.json', 'w') as fp:
    json.dump(properties, fp, indent=4)