<template>
  <div class="hello">
    <h1>{{ myIntegerResult }}</h1>
  </div>
</template>

<script>
import { typedIntSum } from "../reason/TypedFunction.bs.js";

export default {
  name: 'ReasonComponent',
  data() {
    return {
      // why doesn't this give me an error or warning?
      myIntegerResult: typedIntSum(1,"99"),
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
