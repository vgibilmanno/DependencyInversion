import { injectable } from "tsyringe";
import { Logger } from "./Logger";
import { SingletonState } from "./SingletonState";
import { TransientState } from "./TransientState";

@injectable()
export class ComponentAService {
    constructor(private logger: Logger, private singletonState: SingletonState, private transientState: TransientState) {}

    public DoIt() {
        this.logger.LogInformation(`ComponentAService (SingletonState) ${this.singletonState.getValue()}`)
        this.logger.LogInformation(`ComponentAService (TransientState) ${this.transientState.getValue()}`)
    }
}