import { shallow } from 'enzyme';
import Notifications from './Notifications';

describe('<Notifications />', () => {
    it('test that Notifications renders without crashing', () => {
      const wrapper = shallow(<Notifications />);
      expect(wrapper.exists()).toEqual(true);
    });

    it('verify that Notifications renders three list items', () => {
        const wrapper = shallow(<Notifications />);
        expect(wrapper.find('li').length).toEqual(3);
      });
    
      it('verify that Notifications renders the correct text', () => {
        const wrapper = shallow(<Notifications />);
        expect(wrapper.find('p').contains('Here is the list of notifications')).toEqual(true);
      });
    });