# generated from rosidl_generator_py/resource/_idl.py.em
# with input from messages_fr3:srv/SetStiffness.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetStiffness_Request(type):
    """Metaclass of message 'SetStiffness_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('messages_fr3')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'messages_fr3.srv.SetStiffness_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_stiffness__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_stiffness__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_stiffness__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_stiffness__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_stiffness__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetStiffness_Request(metaclass=Metaclass_SetStiffness_Request):
    """Message class 'SetStiffness_Request'."""

    __slots__ = [
        '_a',
        '_b',
        '_c',
        '_d',
        '_e',
        '_f',
        '_drillactivation',
    ]

    _fields_and_field_types = {
        'a': 'double',
        'b': 'double',
        'c': 'double',
        'd': 'double',
        'e': 'double',
        'f': 'double',
        'drillactivation': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.a = kwargs.get('a', float())
        self.b = kwargs.get('b', float())
        self.c = kwargs.get('c', float())
        self.d = kwargs.get('d', float())
        self.e = kwargs.get('e', float())
        self.f = kwargs.get('f', float())
        self.drillactivation = kwargs.get('drillactivation', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.a != other.a:
            return False
        if self.b != other.b:
            return False
        if self.c != other.c:
            return False
        if self.d != other.d:
            return False
        if self.e != other.e:
            return False
        if self.f != other.f:
            return False
        if self.drillactivation != other.drillactivation:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def a(self):
        """Message field 'a'."""
        return self._a

    @a.setter
    def a(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'a' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'a' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._a = value

    @builtins.property
    def b(self):
        """Message field 'b'."""
        return self._b

    @b.setter
    def b(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'b' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'b' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._b = value

    @builtins.property
    def c(self):
        """Message field 'c'."""
        return self._c

    @c.setter
    def c(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'c' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'c' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._c = value

    @builtins.property
    def d(self):
        """Message field 'd'."""
        return self._d

    @d.setter
    def d(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'd' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'd' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._d = value

    @builtins.property
    def e(self):
        """Message field 'e'."""
        return self._e

    @e.setter
    def e(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'e' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'e' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._e = value

    @builtins.property
    def f(self):
        """Message field 'f'."""
        return self._f

    @f.setter
    def f(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'f' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'f' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._f = value

    @builtins.property
    def drillactivation(self):
        """Message field 'drillactivation'."""
        return self._drillactivation

    @drillactivation.setter
    def drillactivation(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'drillactivation' field must be of type 'bool'"
        self._drillactivation = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetStiffness_Response(type):
    """Metaclass of message 'SetStiffness_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('messages_fr3')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'messages_fr3.srv.SetStiffness_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_stiffness__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_stiffness__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_stiffness__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_stiffness__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_stiffness__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetStiffness_Response(metaclass=Metaclass_SetStiffness_Response):
    """Message class 'SetStiffness_Response'."""

    __slots__ = [
        '_success',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.success != other.success:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value


class Metaclass_SetStiffness(type):
    """Metaclass of service 'SetStiffness'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('messages_fr3')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'messages_fr3.srv.SetStiffness')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_stiffness

            from messages_fr3.srv import _set_stiffness
            if _set_stiffness.Metaclass_SetStiffness_Request._TYPE_SUPPORT is None:
                _set_stiffness.Metaclass_SetStiffness_Request.__import_type_support__()
            if _set_stiffness.Metaclass_SetStiffness_Response._TYPE_SUPPORT is None:
                _set_stiffness.Metaclass_SetStiffness_Response.__import_type_support__()


class SetStiffness(metaclass=Metaclass_SetStiffness):
    from messages_fr3.srv._set_stiffness import SetStiffness_Request as Request
    from messages_fr3.srv._set_stiffness import SetStiffness_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
