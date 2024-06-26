/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.2.14.v202310241605.
* Used org.franca.core 0.13.1.201807231814.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V1_COMMONAPI_EXAMPLES_Helloworld_STUB_DEFAULT_HPP_
#define V1_COMMONAPI_EXAMPLES_Helloworld_STUB_DEFAULT_HPP_


#include <CommonAPI/Export.hpp>

#include <v1/commonapi/examples/HelloworldStub.hpp>
#include <cassert>
#include <sstream>

# if defined(_MSC_VER)
#  if _MSC_VER >= 1300
/*
 * Diamond inheritance is used for the CommonAPI::Proxy base class.
 * The Microsoft compiler put warning (C4250) using a desired c++ feature: "Delegating to a sister class"
 * A powerful technique that arises from using virtual inheritance is to delegate a method from a class in another class
 * by using a common abstract base class. This is also called cross delegation.
 */
#    pragma warning( disable : 4250 )
#  endif
# endif

namespace v1 {
namespace commonapi {
namespace examples {

/**
 * Provides a default implementation for HelloworldStubRemoteEvent and
 * HelloworldStub. Method callbacks have an empty implementation,
 * remote set calls on attributes will always change the value of the attribute
 * to the one received.
 *
 * Override this stub if you only want to provide a subset of the functionality
 * that would be defined for this service, and/or if you do not need any non-default
 * behaviour.
 */
class COMMONAPI_EXPORT_CLASS_EXPLICIT HelloworldStubDefault
    : public virtual HelloworldStub {
public:
    COMMONAPI_EXPORT HelloworldStubDefault()
        : remoteEventHandler_(this),
          interfaceVersion_(Helloworld::getInterfaceVersion()) {
    }

    COMMONAPI_EXPORT const CommonAPI::Version& getInterfaceVersion(std::shared_ptr<CommonAPI::ClientId> _client) {
        (void)_client;
        return interfaceVersion_;
    }

    COMMONAPI_EXPORT HelloworldStubRemoteEvent* initStubAdapter(const std::shared_ptr< HelloworldStubAdapter> &_adapter) {
        CommonAPI::Stub<HelloworldStubAdapter, HelloworldStubRemoteEvent>::stubAdapter_ = _adapter;
        return &remoteEventHandler_;
    }

    COMMONAPI_EXPORT virtual const int32_t &getXAttribute() {
        return xAttributeValue_;
    }
    COMMONAPI_EXPORT virtual const int32_t &getXAttribute(const std::shared_ptr<CommonAPI::ClientId> _client) {
        (void)_client;
        return getXAttribute();
    }
    COMMONAPI_EXPORT virtual void setXAttribute(int32_t _value) {
        const bool valueChanged = trySetXAttribute(std::move(_value));
        if (valueChanged) {
            fireXAttributeChanged(xAttributeValue_);
        }
    }
    COMMONAPI_EXPORT virtual void setXAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, int32_t _value) {
        (void)_client;
        setXAttribute(_value);
    }
    COMMONAPI_EXPORT virtual const ::v1::commonapi::examples::CommonTypes::a1Struct &getA1Attribute() {
        return a1AttributeValue_;
    }
    COMMONAPI_EXPORT virtual const ::v1::commonapi::examples::CommonTypes::a1Struct &getA1Attribute(const std::shared_ptr<CommonAPI::ClientId> _client) {
        (void)_client;
        return getA1Attribute();
    }
    COMMONAPI_EXPORT virtual void setA1Attribute(::v1::commonapi::examples::CommonTypes::a1Struct _value) {
        const bool valueChanged = trySetA1Attribute(std::move(_value));
        if (valueChanged) {
            fireA1AttributeChanged(a1AttributeValue_);
        }
    }
    COMMONAPI_EXPORT virtual void setA1Attribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::commonapi::examples::CommonTypes::a1Struct _value) {
        (void)_client;
        setA1Attribute(_value);
    }
    COMMONAPI_EXPORT virtual void sayHello(const std::shared_ptr<CommonAPI::ClientId> _client, std::string _name, sayHelloReply_t _reply) {
        (void)_client;
        (void)_name;
        std::string message = "";
        _reply(message);
    }


protected:
    COMMONAPI_EXPORT virtual bool trySetXAttribute(int32_t _value) {
        if (!validateXAttributeRequestedValue(_value))
            return false;

        bool valueChanged;
        std::shared_ptr<HelloworldStubAdapter> stubAdapter = CommonAPI::Stub<HelloworldStubAdapter, HelloworldStubRemoteEvent>::stubAdapter_.lock();
        if(stubAdapter) {
            stubAdapter->lockXAttribute(true);
            valueChanged = (xAttributeValue_ != _value);
            xAttributeValue_ = std::move(_value);
            stubAdapter->lockXAttribute(false);
        } else {
            valueChanged = (xAttributeValue_ != _value);
            xAttributeValue_ = std::move(_value);
        }

       return valueChanged;
    }
    COMMONAPI_EXPORT virtual bool validateXAttributeRequestedValue(const int32_t &_value) {
        (void)_value;
        return true;
    }
    COMMONAPI_EXPORT virtual void onRemoteXAttributeChanged() {
        // No operation in default
    }
    COMMONAPI_EXPORT virtual bool trySetA1Attribute(::v1::commonapi::examples::CommonTypes::a1Struct _value) {
        if (!validateA1AttributeRequestedValue(_value))
            return false;

        bool valueChanged;
        std::shared_ptr<HelloworldStubAdapter> stubAdapter = CommonAPI::Stub<HelloworldStubAdapter, HelloworldStubRemoteEvent>::stubAdapter_.lock();
        if(stubAdapter) {
            stubAdapter->lockA1Attribute(true);
            valueChanged = (a1AttributeValue_ != _value);
            a1AttributeValue_ = std::move(_value);
            stubAdapter->lockA1Attribute(false);
        } else {
            valueChanged = (a1AttributeValue_ != _value);
            a1AttributeValue_ = std::move(_value);
        }

       return valueChanged;
    }
    COMMONAPI_EXPORT virtual bool validateA1AttributeRequestedValue(const ::v1::commonapi::examples::CommonTypes::a1Struct &_value) {
        (void)_value;
        return true;
    }
    COMMONAPI_EXPORT virtual void onRemoteA1AttributeChanged() {
        // No operation in default
    }
    class COMMONAPI_EXPORT_CLASS_EXPLICIT RemoteEventHandler: public virtual HelloworldStubRemoteEvent {
    public:
        COMMONAPI_EXPORT RemoteEventHandler(HelloworldStubDefault *_defaultStub)
            : 
              defaultStub_(_defaultStub) {
        }

        COMMONAPI_EXPORT virtual void onRemoteXAttributeChanged() {
            assert(defaultStub_ !=NULL);
            defaultStub_->onRemoteXAttributeChanged();
        }

        COMMONAPI_EXPORT virtual bool onRemoteSetXAttribute(int32_t _value) {
            assert(defaultStub_ !=NULL);
            return defaultStub_->trySetXAttribute(std::move(_value));
        }

        COMMONAPI_EXPORT virtual bool onRemoteSetXAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, int32_t _value) {
            (void)_client;
            return onRemoteSetXAttribute(_value);
        }
        COMMONAPI_EXPORT virtual void onRemoteA1AttributeChanged() {
            assert(defaultStub_ !=NULL);
            defaultStub_->onRemoteA1AttributeChanged();
        }

        COMMONAPI_EXPORT virtual bool onRemoteSetA1Attribute(::v1::commonapi::examples::CommonTypes::a1Struct _value) {
            assert(defaultStub_ !=NULL);
            return defaultStub_->trySetA1Attribute(std::move(_value));
        }

        COMMONAPI_EXPORT virtual bool onRemoteSetA1Attribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::commonapi::examples::CommonTypes::a1Struct _value) {
            (void)_client;
            return onRemoteSetA1Attribute(_value);
        }

    private:
        HelloworldStubDefault *defaultStub_;
    };
protected:
    HelloworldStubDefault::RemoteEventHandler remoteEventHandler_;

private:

    int32_t xAttributeValue_ {};
    ::v1::commonapi::examples::CommonTypes::a1Struct a1AttributeValue_ {};

    CommonAPI::Version interfaceVersion_;
};

} // namespace examples
} // namespace commonapi
} // namespace v1


// Compatibility
namespace v1_0 = v1;

#endif // V1_COMMONAPI_EXAMPLES_Helloworld_STUB_DEFAULT
