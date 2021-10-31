#!/usr/bin/env python3
import re
from typing import List
import logging

def filter_datum(fields: List[str], redaction: str, message: str, separator: str) -> str:

    """ function that return log message obfustucated """
    lst = message.split(separator)

    for f in fields:
        for i in range(len(lst)):
            if lst[i].startswith(f):
                subst = f + '=' + redaction #password = xxx
                lst[i] = re.sub(lst[i], '', lst[i])
                lst[i] = subst
            
    return separator.join(lst)



class RedactingFormatter(logging.Formatter):
    """ Redacting Formatter class
        """

    REDACTION = "***"
    FORMAT = "[HOLBERTON] %(name)s %(levelname)s %(asctime)-15s: %(message)s"
    SEPARATOR = ";"

    def __init__(self, fields: List[str]):
        self.fields = fields
        super(RedactingFormatter, self).__init__(self.FORMAT)

    def format(self, record: logging.LogRecord) -> str:
        return filter_datum(self.fields, self.REDACTION, super().format(record), self.SEPARATOR)
        