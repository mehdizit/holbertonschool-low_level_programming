const getFullYear =() => new Date().getFullYear();

const getFooterCopy = (isIndex)=>{
    if (isIndex) return 'Holberton School';
    return 'Holberton School main dashboard';
}
///

const getLatestNotification = ()=> `<strong>Urgent requirement</strong> - complete by EOD`;

export { getFullYear, getFooterCopy , getLatestNotification};