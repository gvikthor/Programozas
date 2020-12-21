def valami_fuggveny(valami1, valami2):
        return (valami1*2)+(3*valami2)

print(valami_fuggveny('almafa','kortefa'))

emberek = [
    {
        'nev': 'Áron',
        'kor': 21,
        'fiu': True,
        'allatok': [
            {
                'nev': 'Morgó',
                'faj': 'kutya',
                'kor': 5
            },
            {
                'nev': 'Mázli',
                'faj': 'kutya',
                'kor': 8
            }
        ]
    },
    {
        'nev': 'Dalma',
        'kor': 20,
        'fiu': False,
        'allatok': [
            {
                'nev': 'Bogyó',
                'faj': 'kutya',
                'kor': 7
            }
        ]
    },
    {
        'nev': 'Nándor',
        'kor': 20,
        'fiu': True,
        'allatok': [
            {
                'nev': 'Nándi kutyája',
                'faj': 'kutya',
                'kor': 6
            }
        ]
    },
    {
        'nev': 'Tomi',
        'kor': 23,
        'fiu': True,
        'allatok': [
            {
                'nev': 'Amy',
                'faj': 'macska',
                'kor': 10
            }
        ]
    },
    {
        'nev': 'István',
        'kor': 23,
        'fiu': True,
        'allatok': [
        ]
    },
    {
        'nev': 'Marci',
        'kor': 50,
        'fiu': True,
        'allatok': [
            {
                'nev': 'A',
                'faj': 'hörcsög',
                'kor': 2
            },
            {
                'nev': 'B',
                'faj': 'hörcsög',
                'kor': 1
            },
            {
                'nev': 'C',
                'faj': 'hörcsög',
                'kor': 3
            }
        ]
    }
]

#print(type(emberek[0]))

volt = False
maxallat = {}
maxember = ''

for ember in emberek:
    for allat in ember['allatok']:
        if not volt or maxallat['kor'] < allat['kor']:
            maxallat = allat
            maxember = ember['nev']
            volt = True


print(maxember, maxallat)