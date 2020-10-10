<template>
  <div class="hello">
    <h1> Pipeline Results </h1>  
    <h1>{{ results }}</h1>
  </div>
</template>

<script>
import { pipelineResults } from "../rescript/DataComponent/ProcessData.bs.js";

export default {
  name: 'DataComponent',
  data() {
    return {
      /* change parameters in ProcessData.re for compile time checks */

      // return the results value from compile-time checked code
      results: pipelineResults
      // hacky version if we need a function to appease Vue
      // functionResults: loadData()
    }
  }
} 
</script>

<!-- Add "scoped" attribute to limit CSS to this component only -->
<style scoped>
h3 {
  margin: 40px 0 0;
}
ul {
  list-style-type: none;
  padding: 0;
}
li {
  display: inline-block;
  margin: 0 10px;
}
a {
  color: #42b983;
}
</style>
