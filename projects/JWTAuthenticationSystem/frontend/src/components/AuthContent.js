import * as React from 'react';
import { request } from '../axios_helper';

export default class AuthContent extends React.Component {
    constructor(props) {
        super(props);
        this.state = {
            data : []
        };
    };

    componentDidMount() {
        request(
            "GET",
            "/messages",
            {}
        ).then((response) => {
            this.setState({data : response.data})
        });
    };

    render () {
        return (
            <div className='row justify-content-md-center'>
                {this.state.data && this.state.data.map((line) => <p>{line}</p>
                )}
            </div>
        );
    };
}