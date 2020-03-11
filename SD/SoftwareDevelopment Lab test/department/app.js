const express = require("express");
const noticeRouter = require("./routes/noticeRoutes");

const app = express();
app.use(express.json());
app.use("/department/notice", noticeRouter);

module.exports = app;