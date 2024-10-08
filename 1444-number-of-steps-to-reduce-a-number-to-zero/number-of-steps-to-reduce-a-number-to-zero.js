/**
 * @param {number} num
 * @return {number}
 */
var numberOfSteps = function(num) {
    
    let res=0;
    for(; num ;++res){
        if(num%2==1){
            num--;
        }else{
            num/=2;
        }
        
    }
    return res;
};