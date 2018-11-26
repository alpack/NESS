import json

nomedoplayer = input(str('nome do player: '))

# with open('newfile.json', 'a') as file:
#     kleber = json.load(file)
#     kleber['Player'] = nomedoplayer
#     file.seek(0)
#     json.dump(kleber, file, indent = 4)
#     file.truncate()
#     file.close()

with open('newfile.json') as file:
    data = file.read()
arquivo = json.loads(data)
arquivo["Player"] = nomedoplayer
with open('newfile.json', 'a') as file:
    json.dump(arquivo, file, indent = 4, sort_keys = True)
