/*
let alma = 5
console.log(alma)
alma = "alma"
console.log(alma)
alma = false
console.log(alma)
alma = [1,6,5,"jdkow",false,235,[3,7,6,"alma",false,true],4567]
console.log(alma)
alma = {
    szin: "piros",
    meret: 2,
    kukacok: [
        {
            nev: "Kukac Matyi",
            kor: 5
        },
        {
            nev: "Kukac Éva",
            kor: 3
        }
    ]
}
console.log(alma)

alma = function(){
    let a = 0, b = 10
    console.log(a+b)
}
alma()
console.log(alma)
*/


let allatkertek = [
    [1,6,5,4,3],
    [4,6,5,9,3],
    [0,6,0,4,7],
    [1,2,5,4,1]
]

let allatok = [0,6,3,8,1,6,0,9,0,0,5]

console.log( allatok.filter(allat => allat > 0) )
console.log( allatok.reduce((szum,a) => szum+a, 0) )
console.log(
    allatok
    .filter(allat => allat != 6)
    .reduce((szum,a) => szum+a, 0)
)