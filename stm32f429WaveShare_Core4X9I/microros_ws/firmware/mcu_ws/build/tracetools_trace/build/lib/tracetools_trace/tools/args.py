# Copyright 2019 Robert Bosch GmbH
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

"""Module containing parsing functions for tracing commands."""

import argparse

from . import names
from . import path


class DefaultArgValueCompleter:
    """Callable returning an arg's default value."""

    def __init__(self, arg):
        default = arg.default
        self.list = default if isinstance(default, list) else [default]

    def __call__(self, **kwargs):
        return self.list


def parse_args() -> argparse.Namespace:
    """Parse args for tracing."""
    parser = argparse.ArgumentParser(description='Setup and launch an LTTng tracing session.')
    add_arguments(parser)
    return parser.parse_args()


def add_arguments(parser: argparse.ArgumentParser) -> None:
    parser.add_argument(
        '-s', '--session-name', dest='session_name',
        default=path.append_timestamp('session'),
        help='the name of the tracing session (default: session-YYYYMMDDHHMMSS)')
    parser.add_argument(
        '-p', '--path', dest='path',
        default=path.DEFAULT_BASE_PATH,
        help='path of the base directory for trace data (default: %(default)s)')
    events_ust_arg = parser.add_argument(  # type: ignore
        '-u', '--ust', nargs='*', dest='events_ust', metavar='EVENT',
        default=names.DEFAULT_EVENTS_UST,
        help='the userspace events to enable (default: see tracetools_trace.tools.names) '
             '[to disable all UST events, '
             'provide this flag without any event name]')
    events_ust_arg.completer = DefaultArgValueCompleter(events_ust_arg)  # type: ignore
    events_kernel_arg = parser.add_argument(  # type: ignore
        '-k', '--kernel', nargs='*', dest='events_kernel', metavar='EVENT',
        default=names.DEFAULT_EVENTS_KERNEL,
        help='the kernel events to enable (default: see tracetools_trace.tools.names) '
             '[to disable all kernel events, '
             'provide this flag without any event name]')
    events_kernel_arg.completer = DefaultArgValueCompleter(events_kernel_arg)  # type: ignore
    context_arg = parser.add_argument(  # type: ignore
        '-c', '--context', nargs='*', dest='context_names', metavar='CONTEXT',
        default=names.DEFAULT_CONTEXT,
        help='the context names to enable (default: see tracetools_trace.tools.names) '
             '[to disable all context names, '
             'provide this flag without any name]')
    context_arg.completer = DefaultArgValueCompleter(context_arg)  # type: ignore
    parser.add_argument(
        '-l', '--list', dest='list', action='store_true',
        help='display lists of enabled events and context names (default: %(default)s)')
