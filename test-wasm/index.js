// import * as wasm from "test-wasm";

// wasm.main();

fetch("main.wasm")
  .then((response) => response.arrayBuffer())
  .then((bytes) => WebAssembly.instantiate(bytes, {
    env: {
      __memory_base: 0,
      __table_base: 0,
      memory: new WebAssembly.Memory({initial: 1})
    }
  }))
  .then((results) => {
    // Do something with the results!
    console.log(results.instance.exports.fun());
  });