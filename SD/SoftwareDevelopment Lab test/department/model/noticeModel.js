const mongoose = require("mongoose");

const noticeSchema = new mongoose.Schema({
	department:{
		type: String,
   		required: [true, "Please enter a department name"]
	},
	notice:{
		type: String,
		required: [true, "Please enter a notice"]
	},
	date:{
		type: String,
		required:[true, "Please enter a date"]
	},

})
const Notice = mongoose.model("Notice", noticeSchema);
module.exports = Notice;