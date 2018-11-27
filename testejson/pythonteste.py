import json

nomedoplayer = input(str('nome do player: '))

a = {
    'id': nomedoplayer,
    'Habilidades': {
        'arduino': 5,
    }
}


with open('newfile.json', 'a') as file:
    file.write(json.dumps(a, indent=4))

file.close()
