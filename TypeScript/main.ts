import 'reflect-metadata';

import {container} from "tsyringe";
import { ComponentAService } from './services/ComponentAService';
import { ComponentBService } from './services/ComponentBService';

const componentAService = container.resolve(ComponentAService);
componentAService.DoIt();

const componentBService = container.resolve(ComponentBService);
componentBService.DoIt();