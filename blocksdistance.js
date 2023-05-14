//code to choose the block with closest distance from gym school and store 


const blocks = [
    {"gym":false , "school":true ,  "store":false},
    {"gym":true , "school":false ,  "store":false},
    {"gym":true , "school":true ,  "store":false},
    {"gym":false , "school":true ,  "store":false},
    {"gym":false , "school":true ,  "store":true}
]

function getBuilding(blocks,building){
    let m_disBuilding=Infinity,j =0;
    for(let i = 0; i<blocks.length ; i++){
        if(blocks[i][building] == true){
            m_disBuilding = 0;
        }else if(blocks[i][building] == false && i > 0 ){
            if(blocks[i-j][building] == true || blocks[i+j][building] == true){
                m_disBuilding=j;
            }else{
                j++;
            }
        }
        
    }
    return m_disBuilding;
}

function solved(blocks){
    let min_dis = Infinity;
    let blockNO =0;
    for(let i = 0; i<blocks.length ; i++){
        const m_disGym = getBuilding(blocks,"gym");
        const m_disSchool = getBuilding(blocks,"school");
        const m_disStore = getBuilding(blocks,"store");

        const m_totalDis = m_disGym + m_disSchool + m_disStore;

        if(m_totalDis<min_dis){
            min_dis = m_totalDis;
            blockNO = i;
        }
    
    }
    return blockNO;
}


const answer = solved(blocks);
console.log(answer);




