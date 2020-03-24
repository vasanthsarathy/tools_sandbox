
"use strict";

let MongoInsertMsg = require('./MongoInsertMsg.js')
let MongoUpdateMsg = require('./MongoUpdateMsg.js')
let MongoDeleteMsg = require('./MongoDeleteMsg.js')
let MongoQueryMsg = require('./MongoQueryMsg.js')
let MongoQuerywithProjectionMsg = require('./MongoQuerywithProjectionMsg.js')

module.exports = {
  MongoInsertMsg: MongoInsertMsg,
  MongoUpdateMsg: MongoUpdateMsg,
  MongoDeleteMsg: MongoDeleteMsg,
  MongoQueryMsg: MongoQueryMsg,
  MongoQuerywithProjectionMsg: MongoQuerywithProjectionMsg,
};
