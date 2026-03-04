/**
 * @return {Generator<number>}
 */
var fibGenerator = function*() {
    
    let prev = 0;
    let curr = 1;
    
    while (true) {
        yield prev;
        let next = prev + curr;
        prev = curr;
        curr = next;
    }
};