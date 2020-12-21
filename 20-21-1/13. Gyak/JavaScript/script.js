const gomb = document.querySelector('#kiszamol')
const kimenet = document.querySelector('div')

const mentes = document.querySelector('#mentes')
const inputNev = document.querySelector('#nev')
const inputKor = document.querySelector('#ujkor')

let emberek = [
    {
        nev: 'Áron',
        kor: 21,
        fiu: true,
        allatok: [
            {
                nev: 'Morgó',
                faj: 'kutya',
                kor: 5
            },
            {
                nev: 'Mázli',
                faj: 'kutya',
                kor: 8
            }
        ]
    },
    {
        nev: 'Dalma',
        kor: 20,
        fiu: false,
        allatok: [
            {
                nev: 'Bogyó',
                faj: 'kutya',
                kor: 7
            }
        ]
    },
    {
        nev: 'Nándor',
        kor: 20,
        fiu: true,
        allatok: [
            {
                nev: 'Nándi kutyája',
                faj: 'kutya',
                kor: 6
            }
        ]
    },
    {
        nev: 'Tomi',
        kor: 23,
        fiu: true,
        allatok: [
            {
                nev: 'Amy',
                faj: 'macska',
                kor: 10
            }
        ]
    },
    {
        nev: 'István',
        kor: 23,
        fiu: true,
        allatok: [
        ]
    },
    {
        nev: 'Marci',
        kor: 50,
        fiu: true,
        allatok: [
            {
                nev: 'A',
                faj: 'hörcsög',
                kor: 2
            },
            {
                nev: 'B',
                faj: 'hörcsög',
                kor: 1
            },
            {
                nev: 'C',
                faj: 'hörcsög',
                kor: 3
            }
        ]
    }
]

gomb.addEventListener('click', kiszamol)

function kiszamol(){
    let volt = false
    let maxallat = {}
    let maxember = ''
    for(let ember of emberek){
        for(let allat of ember.allatok)
        if(!volt || allat.kor > maxallat.kor){
            maxallat = allat
            maxember = ember.nev
            volt = true
        }
    }

    kimenet.innerHTML = `A legidősebb állata neki van: ${maxember}. Az állat egy ${maxallat.faj}, a neve ${maxallat.nev}, és ${maxallat.kor} éves.`
}


mentes.addEventListener('click', ()=>{
    let nev = inputNev.value
    let talalt = false
    /*for(let i = 0; i < emberek.length && !talalt; i++){
        for(let allat of emberek[i].allatok){
            talalt = (allat.nev == nev)
            if(talalt){
                allat.kor = parseInt(inputKor.value)
            }
        }
    }*/
})