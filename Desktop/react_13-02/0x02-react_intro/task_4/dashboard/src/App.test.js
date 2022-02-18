import { shallow } from 'enzyme';
import App from './App';

describe('<App />', () => {
    it('test that App renders without crashing', () => {
      const wrapper = shallow(<App />);
      expect(wrapper.exists()).toEqual(true);
    });

    it('verify that App renders a div with the class App-header', () => {
        const wrapper = shallow(<App />);
        expect(wrapper.find('.App-header').length).toEqual(1);
      });
    
      it('verify that App renders a div with the class App-body', () => {
        const wrapper = shallow(<App />);
        expect(wrapper.find('.App-body').length).toEqual(1);
      });
      
      it('verify that App renders a div with the class App-footer', () => {
        const wrapper = shallow(<App />);
        expect(wrapper.find('.App-footer').length).toEqual(1);
      });
    });