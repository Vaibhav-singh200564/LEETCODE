var cancellable = function(fn, args, t) {
    
    // Call immediately (time = 0)
    fn(...args);

    // Start interval
    const intervalId = setInterval(() => {
        fn(...args);
    }, t);

    // Return cancel function
    return function cancelFn() {
        clearInterval(intervalId);
    };
};