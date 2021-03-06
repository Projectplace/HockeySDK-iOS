/*
 * Author: Andreas Linde <mail@andreaslinde.de>
 *
 * Copyright (c) 2012 HockeyApp, Bit Stadium GmbH.
 * Copyright (c) 2011 Andreas Linde.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use,
 * copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following
 * conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 */

#ifndef HockeySDK_h
#define HockeySDK_h

#import "BITHockeyManager.h"
#import "BITHockeyManagerDelegate.h"

#import "BITCrashManager.h"
#import "BITCrashManagerDelegate.h"

#import "BITUpdateManager.h"
#import "BITUpdateManagerDelegate.h"
#import "BITUpdateViewController.h"


// Notification message which HockeyManager is listening to, to retry requesting updated from the server
#define BITHockeyNetworkDidBecomeReachableNotification @"BITHockeyNetworkDidBecomeReachable"


// hockey api error domain
typedef enum {
  BITCrashErrorUnknown,
  BITCrashAPIAppVersionRejected,
  BITCrashAPIReceivedEmptyResponse,
  BITCrashAPIErrorWithStatusCode
} BITCrashErrorReason;
static NSString *kBITCrashErrorDomain = @"BITCrashReporterErrorDomain";


// Update App Versions

// hockey api error domain
typedef enum {
  BITUpdateErrorUnknown,
  BITUpdateAPIServerReturnedInvalidStatus,
  BITUpdateAPIServerReturnedInvalidData,
  BITUpdateAPIServerReturnedEmptyResponse,
  BITUpdateAPIClientAuthorizationMissingSecret,
  BITUpdateAPIClientCannotCreateConnection
} BITUpdateErrorReason;
static NSString *kBITUpdateErrorDomain = @"BITUpdaterErrorDomain";


#endif
