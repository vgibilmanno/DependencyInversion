from kink import inject
from services.SingletonState import SingletonState
from services.TransientState import TransientState
from services.logger import Logger

@inject
class ComponentAService():
    def __init__(self, logger: Logger, transient_state: TransientState, singleton_state: SingletonState):
        self._logger = logger
        self._transient_state = transient_state
        self._singleton_state = singleton_state

    def do_it(self):
        self._logger.log_information(f"ComponentAService (TransientState): {self._transient_state.get_value()}")
        self._logger.log_information(f"ComponentAService (SingletonState): {self._singleton_state.get_value()}")
        