//
//  IFAAppUI.h
//  IFAAppUI
//
//  Created by Marcelo Schroeder on 23/08/14.
//  Copyright (c) 2014 InfoAccent Pty Limited. All rights reserved.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import <CoreData/CoreData.h>
#import <CoreText/CoreText.h>
#import <CoreLocation/CoreLocation.h>
#import <QuartzCore/QuartzCore.h>
#import <MapKit/MapKit.h>
#import <MessageUI/MessageUI.h>
#import <GLKit/GLKit.h>
#import <AdSupport/AdSupport.h>
#import <Accelerate/Accelerate.h>

//! Project version number for IFAAppUI.
FOUNDATION_EXPORT double IFAAppUIVersionNumber;

//! Project version string for IFAAppUI.
FOUNDATION_EXPORT const unsigned char IFAAppUIVersionString[];

/*************/
/* 3rd party */
/*************/
// IFA_ECSlidingViewController
#import "IFA_ECSlidingViewController.h"
#import "UIImage+IFA_ECImageWithUIView.h"
// IBActionSheet
#import "IFA_IBActionSheet.h"

@import IFACoreUI;

#import "IFAAboutFormViewController.h"
#import "IFAAboutInfoModel.h"
#import "IFAAboutViewController.h"
#import "IFAAbstractPagingContainerViewController.h"
#import "IFAAbstractWebBrowserActivity.h"
#import "IFAApplicationDelegate.h"
#import "IFADynamicPagingContainerViewController.h"
#import "IFADynamicPagingContainerViewControllerDataSource.h"
#import "IFAEmailManager.h"
#import "IFAExternalWebBrowserActivity.h"
//#import "IFAMasterDetailViewController.h"
#import "IFAPhoneServiceManager.h"
#import "IFAPreferencesFormViewController.h"
#import "IFASlidingViewController.h"
//#import "IFASplitViewController.h"
#import "IFAStaticPagingContainerViewController.h"
#import "IFAThirdPartyCodeCreditsViewController.h"
#import "NSURL+IFAAppUI.h"
#import "UIViewController+IFAAppUI.h"
#import "IFAUIUtils+IFAAppUI.h"
#import "IFAAppDefaultAppearanceTheme.h"
#import "IFAAppMapViewController.h"
