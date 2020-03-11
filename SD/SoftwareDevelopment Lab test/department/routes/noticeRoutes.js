const express = require('express');
const noticeController = require('./../controllers/noticeController');

const router = express.Router()

router
	.route("/")
	.get(noticeController.getAllNotices)
	.post(noticeController.createNotice);

router
	.route("/:id")
	.get(noticeController.getNotice)
	.patch(noticeController.updateNotice)
	.delete(noticeController.deleteNotice)
module.exports = router;