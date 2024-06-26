/*
 * This file was generated by the CommonAPI Generators.
 * Used org.genivi.commonapi.someip 3.2.14.v202310241606.
 * Used org.franca.core 0.13.1.201807231814.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
 * If a copy of the MPL was not distributed with this file, You can obtain one at
 * http://mozilla.org/MPL/2.0/.
 */

#ifndef V1_COMMONAPI_EXAMPLES_Helloworld_SOMEIP_DEPLOYMENT_HPP_
#define V1_COMMONAPI_EXAMPLES_Helloworld_SOMEIP_DEPLOYMENT_HPP_

#include <v1/commonapi/examples/CommonTypesSomeIPDeployment.hpp>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#define HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif
#include <CommonAPI/SomeIP/Deployment.hpp>
#if defined (HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE)
#undef COMMONAPI_INTERNAL_COMPILATION
#undef HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif

namespace v1 {
namespace commonapi {
namespace examples {
namespace Helloworld_ {

// Interface-specific deployment types

// Type-specific deployments

// Attribute-specific deployments

// Argument-specific deployment
COMMONAPI_EXPORT extern CommonAPI::SomeIP::StringDeployment sayHello_nameDeployment;

// Broadcast-specific deployments

} // namespace Helloworld_
} // namespace examples
} // namespace commonapi
} // namespace v1

#endif // V1_COMMONAPI_EXAMPLES_Helloworld_SOMEIP_DEPLOYMENT_HPP_
