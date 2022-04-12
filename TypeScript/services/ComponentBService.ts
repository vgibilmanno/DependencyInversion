import { injectable } from "tsyringe";
import { Logger } from "./Logger";
import { SingletonState } from "./SingletonState";
import { TransientState } from "./TransientState";

@injectable()
export class ComponentBService {
    constructor(private logger: Logger, private singletonState: SingletonState, private transientState: TransientState) {}

    public DoIt() {
        this.logger.LogInformation(`ComponentBService (SingletonState) ${this.singletonState.getValue()}`)
        this.logger.LogInformation(`ComponentBService (TransientState) ${this.transientState.getValue()}`)
    }
}