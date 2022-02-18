import { getFullYear, getFooterCopy, getLatestNotification } from './utils';

describe('utils_tests', ()=>{
  describe('getFullYear', ()=>{
    it('return current year', ()=>{
      const year = getFullYear();
      expect(year).toEqual(new Date().getFullYear());
    });
  });

  describe('getFooterCopy', ()=>{
    const trueMsg = 'Holberton School';
    const falseMsg = 'Holberton School main dashboard';

    it('return true message getFooterCopy', ()=>{
      const msg = getFooterCopy(true);
      expect(msg).toEqual(trueMsg);
    })
    it('return false message getFooterCopy', () => {
      const msg = getFooterCopy(false);
      expect(msg).toEqual(falseMsg);
    });
  });

  describe('getLatestNotification', () => {
    it('shold return correct string element', () => {
      const element = '<strong>Urgent requirement</strong> - complete by EOD';
      expect(getLatestNotification()).toEqual(element);
    });
  });
})