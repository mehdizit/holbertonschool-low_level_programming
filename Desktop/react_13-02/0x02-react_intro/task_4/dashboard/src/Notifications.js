import React from "react";
import closeIcon from "./close-icon.png";
import "./Notifications.css";
import { getLatestNotification } from './utils';


const Notifications = () => {
  return (
    <div className="Notifications">
      <button style={{
        background: "transparent",
        border: "none",
        position: "absolute",
        right: 20,
      }}
        aria-label="Close"
        onClick={() => console.log("Close button has been clicked")}>
        <img src={closeIcon} alt="close-icon" width="8px" />
      </button>
      <p>Here is the list of notifications</p>
      <ul>
        <li data-priority="default">New course available</li>
        <li data-priority="urgent">New resume available</li>
        <li
          data-priority="urgent"
          dangerouslySetInnerHTML={{ __html: getLatestNotification() }}
        ></li>
      </ul>
    </div>
  );
};

export default Notifications;