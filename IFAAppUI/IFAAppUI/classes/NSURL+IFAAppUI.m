//
// Created by Marcelo Schroeder on 30/04/2014.
// Copyright (c) 2014 InfoAccent Pty Ltd. All rights reserved.
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

#import "IFAAppUI.h"


@implementation NSURL (IFAAppUI)

#pragma mark - Public

- (BOOL)ifa_isAppleUrlScheme {
    return [self.scheme isEqualToString:@"mailto"]
                || [self.scheme isEqualToString:@"tel"]
                || [self.scheme isEqualToString:@"facetime"]
                || [self.scheme isEqualToString:@"sms"];
}

-(void)ifa_open{
    [self ifa_openWithAlertPresenterViewController:nil];
}

-(BOOL)ifa_openWithAlertPresenterViewController:(UIViewController *)a_alertPresenterViewController{
    BOOL success = [[UIApplication sharedApplication] canOpenURL:self];
    if (success) {
        void (^actionBlock)(void) = ^{
            [[UIApplication sharedApplication] openURL:self
                                               options:@{}
                                     completionHandler:nil];
        };
        if (a_alertPresenterViewController) {
            NSString *title = [NSString stringWithFormat:NSLocalizedStringFromTable(@"You will now leave the %@ app", @"IFALocalizable", @"You will now leave the <APP_NAME> app"), [IFAUtils appName]];
            [a_alertPresenterViewController ifa_presentAlertControllerWithTitle:title
                                                                        message:nil
                                                                          style:UIAlertControllerStyleAlert
                                                              actionButtonTitle:NSLocalizedStringFromTable(@"OK", @"IFALocalizable", nil)
                                                                    actionBlock:actionBlock];
        }else{
            actionBlock();
        }
    }
    return success;
}

@end
