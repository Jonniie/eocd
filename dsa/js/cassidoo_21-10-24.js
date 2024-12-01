import { DOMParser } from "xmldom";

async function getRSS(url) {
  try {
    // Fetch the RSS feed content
    const res = await fetch(url);
    const data = await res.text(); // get response in text format

    const parser = new DOMParser();
    const xmlDoc = parser.parseFromString(data, "text/html");

    // const title =
    //   xmlDoc.getElementsByTagName("channel > title")?.textContent ||
    //   "No title found";
    // const link =
    //   xmlDoc.getElementsByTagName("channel > link")?.textContent ||
    //   "No link found";

    const title = xmlDoc.getElementsByTagName("title").childNodes();
    console.log(title);
  } catch (err) {
    console.log(err);
  }
}

getRSS("https://cassidoo.co/rss.xml");
