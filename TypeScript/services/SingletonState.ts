import { Lifecycle, scoped } from "tsyringe";

@scoped(Lifecycle.ContainerScoped)
export class SingletonState {
    value: number;

    constructor() {
        this.value = Math.floor(Math.random() * 100);
    }

    getValue(): number {
        return this.value;
    }
}