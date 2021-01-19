// error handling.
//Testcase 1 - errorHandler function should return 0 for x = 0
//Testcase 2 - errorHandler function should return 3 for x = 3
//Testcase 3 - errorHandler function should return error for x = 5
//

function errorHandler(x) {
    var result;
    try{
        result=getX(x);
    }
    catch(err){
        return err;
    }   
    return result;

}

function getX(x) {
    if(x == 5) {
        return new Error("Error Occured");
    }
    return x;
}

module.exports = errorHandler;