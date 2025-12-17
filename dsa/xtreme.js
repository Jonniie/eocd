function main() {
  // let inputLine = input_stdin.trim();

  // Parse the comma-separated key=value pairs
  // let pairs = inputLine.split(', ');
  // let obj = {agent: 0, ip: 0, pdf: 0, session: 0, crawl: 0};

  // for (let pair of pairs) {
  //     let [key, value] = pair.split('=');
  //     obj[key] = parseInt(value);
  // }

  // let _ = input_stdin.trim();

  // let curr_log = input_stdin.trim();

  let curr_log =
    'documents.ieee.org 116.84.105.37 ABCABC [01/Oct/2025:10:00:03] "GET /document/779.pdf HTTP/1.1" 200 "Mozilla/5.0 (Linux; Android 10; ELS-NX9) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/81.0.4044.138 Mobile Safari/537.36 OPR/58.2.2878.53403" "JKXclXx22zMrHRxx"';

  curr_log = curr_log.split('"');
  let req_obj = {
    host: "",
    client_id: "",
    ip: "",
    date: "",
    request: "",
    http_status: "",
    user_agent: "",
    session_cookie: "",
  };

  for (let req of curr_log) {
    let req_arr = req.split(" ").filter((el) => el != "");
    console.log(req_arr);
    if (req_arr.length > 1) {
      for (let el of req_arr) {
        if(req_arr.length == 3) {
            if(req.startsWith("/document")) {
                req_obj.request = req.split("/")[2]
            }  
        }

        if(req_arr.length == 4) {
            if (el.startsWith("documents")) {
                req_obj.host = el;
            } else if (el.split(".").length == 4 && el.split("/").length == 1) {
                req_obj.ip = el;
            } else if (req.startsWith("[") && req.endsWith("]")) {
                req_obj.date = req.slice(1, -1);
            } else {
                req_obj.client_id = el;
            }
        }
      }
    }

    console.log(req.trim())

    if(req_arr.length == 1 && req.trim().length == 3 && +req) {
        req_obj.http_status = req.trim();
    }

    

  }

  // Host, Client IP, Id, Date, Request, HTTP Status, User Agent, Session Cookie
  // for(let req of curr_log) {
  //     if(req.startsWith("documents")) {
  //         req_obj.host = req;
  //     }

  //     if(req.split(".").length == 4 && req.split("/").length == 1) {
  //         req_obj.ip = req;
  //     }

    //   if(req.startsWith("/document")) {
    //       req_obj.request = req.split("/")[2]
    //   }

  //   if(req.startsWith("[") && req.endsWith("]")) {
  //       req_obj.date = req.slice(1, -1)
  //   }

    //   if(req.length == 3 && +req) {
    //       req_obj.http_status = req;
    //   }

  // }

  console.log(req_obj);

  // console.log(download_request);
}

main();

// default parsers for JS.
function nextInt() {
  return parseInt(nextString());
}

function nextFloat() {
  return parseFloat(nextString());
}

function nextString() {
  var next_string = "";
  clearWhitespaces();
  while (
    input_cursor < input_stdin.length &&
    !isWhitespace(input_stdin[input_cursor])
  ) {
    next_string += input_stdin[input_cursor];
    input_cursor += 1;
  }
  return next_string;
}

function nextChar() {
  clearWhitespaces();
  if (input_cursor < input_stdin.length) {
    return input_stdin[input_cursor++];
  } else {
    return "\0";
  }
}

process.stdin.resume();
process.stdin.setEncoding("ascii");

var input_stdin = "";
var input_cursor = 0;
process.stdin.on("data", function (data) {
  input_stdin += data;
});
process.stdin.on("end", function () {
  main();
});

function isWhitespace(character) {
  return " \t\n\r\v".indexOf(character) > -1;
}

function clearWhitespaces() {
  while (
    input_cursor < input_stdin.length &&
    isWhitespace(input_stdin[input_cursor])
  ) {
    // ignore the next whitespace character
    input_cursor += 1;
  }
}
