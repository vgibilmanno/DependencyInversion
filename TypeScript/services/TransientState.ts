import { Lifecycle, scoped } from "tsyringe";

export class TransientState {
    value: number;

    constructor() {
        this.value = Math.floor(Math.random() * 100);
    }

    getValue(): number {
        return this.value;
    }
}