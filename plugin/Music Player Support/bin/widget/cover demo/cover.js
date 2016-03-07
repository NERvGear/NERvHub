var DATA_URL = "http://nvg-data/";
var ID_ODATASOURCE = "A60D2B8A-DCD9-4753-9E3F-C9F2B686F34B";
var ID_DATA_CAD = "26DDF5CF-528B-46b4-B184-19ED771D495D";
var ID_CAD_TITLE = 3;
var ID_CAD_COVER = 7;

var UPDATE_INTERVAL = 1000; // 1s

var title = "";

function updateItem(sid, did, vid, isCover)
{
    $.ajax({
        type: "get",
        dataType: "json",
        url: DATA_URL + sid + "/" + did + "/" + vid + "/query",
        success: function (ret) {
            if (isCover) {
                if (ret.data.value != " ")
                    document.getElementById("cover").src = ret.data.value + "?time=" + new Date().getTime();
                else
                    document.getElementById("cover").src = "unknown.png";
            }
            else
                if (ret.data.value != title) {
                    title = ret.data.value;
                    document.getElementById("cover").src = "";
                    updateItem(ID_ODATASOURCE, ID_DATA_CAD, ID_CAD_COVER, true);
                }
        }
    });
}

function refreshValues()
{
    updateItem(ID_ODATASOURCE, ID_DATA_CAD, ID_CAD_TITLE, false);
}

$(function () {
    refreshValues();
    setInterval("refreshValues()", UPDATE_INTERVAL);
});
