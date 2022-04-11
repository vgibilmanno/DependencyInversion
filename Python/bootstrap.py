from json.tool import main
from kink import di
from services.ComponentBService import ComponentBService
from services.SingletonState import SingletonState
from services.TransientState import TransientState
from services.ComponentAService import ComponentAService
from services.logger import Logger

def bootstrap_di() -> None:
    di[Logger] = lambda di: Logger()
    di[ComponentAService] = lambda di: ComponentAService()
    di[ComponentBService] = lambda di: ComponentBService()
    di[SingletonState] = lambda di: SingletonState()
    di.factories[TransientState] = lambda di: TransientState()
    

    component_a_service = get_ComponentAService()
    component_a_service.do_it()

    component_b_service = get_ComponentBService()
    component_b_service.do_it()

def get_ComponentAService() -> ComponentAService:
    return di[ComponentAService]

def get_ComponentBService() -> ComponentBService:
    return di[ComponentBService]