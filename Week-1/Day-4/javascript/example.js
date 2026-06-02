function createMultiplier(x){
    return function(y){
        return x*y;
    }
};
let double = createMultiplier(2);
console.log(double(5));