const Notice = require("./../model/noticeModel");

exports.getAllNotices = async(req, res) =>{
	try {
    const notices = await Notice.find();

    res.status(200).json({
      status: "ok",
      result: notices.length,
      data: {
        notices
      }
    });
  } catch (err) {
    res.status(404).json({
      status: "fail",
      message: err
    });
  }
};
exports.getNotice = async (req, res) => {
  try {
    const notice = await Notice.findById(req.params.id);

    res.status(200).json({
      status: "ok",
      data: {
        notice
      }
    });
  } catch (err) {
    res.status(404).json({
      status: "fail",
      message: err
    });
  }
};
exports.createNotice = async (req, res) => {
  try {
    const newNotice = await Notice.create(req.body);

    res.status(201).json({
      status: "created",
      data: {
        newNotice
      }
    });
  } catch (err) {
    res.status(400).json({
      status: "fail",
      message: err
    });
  }
};

exports.updateNotice = async (req, res) => {
  try {
    const notice = await Notice.findByIdAndUpdate(req.params.id, req.body, {
      new: true
    });

    res.status(200).json({
      status: "ok",
      data: {
        notice
      }
    });
  } catch (err) {
    res.status(404).json({
      status: "fail",
      message: err
    });
  }
};

exports.deleteNotice = async (req, res) => {
  try {
    await Notice.findByIdAndDelete(req.params.id);

    res.status(300).json({
      status: "successfully deleted",
      data: null
    });
  } catch (err) {
    res.status(404).json({
      status: "fail",
      message: err
    });
  }
};
