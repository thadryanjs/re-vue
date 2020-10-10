/* a pipeline to work on the data with compile-time checks */
let pipelineResults = {

  /* parameters of some dataprocessing pipeline */
  let param1 = 1;
  let param2 = 99;
  /* let param1 = "1"; <--- type error and compile time!!! :) */

  /* define the steps of the pipeline */
  let stepOne = (a:int, b:int): int => a + b;
  let stepTwo = (a:int): int => a + 2;
  let stepThree = (a:int): int => a + 3;

  /* pipe them together to get the result */
  stepOne(param1, param2)
    -> stepTwo
    -> stepThree
}



/* hacky I think, bit will satistfy vue if you need a function
instead of a value to be returned

let loadData = (None) => pipelineResults

this version produces a "param" that is never used and makes Vue mad

let loadData = () => {
  pipelineResults
} */