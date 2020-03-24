
"use strict";

let GetParam = require('./GetParam.js')
let SetParam = require('./SetParam.js')
let MongoFind = require('./MongoFind.js')
let MongoInsert = require('./MongoInsert.js')
let MongoUpdate = require('./MongoUpdate.js')

module.exports = {
  GetParam: GetParam,
  SetParam: SetParam,
  MongoFind: MongoFind,
  MongoInsert: MongoInsert,
  MongoUpdate: MongoUpdate,
};
