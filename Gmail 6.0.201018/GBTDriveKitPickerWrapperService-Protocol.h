//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol GBTDriveKitPickerResultProtocol, GBTDriveKitPickerWrapperServiceDelegate, GBTThemeManagerService, SSOAuthorization;

@protocol GBTDriveKitPickerWrapperService <NSObject>
- (id <GBTDriveKitPickerResultProtocol>)pickerResultForMoveMyDriveWithAuthorization:(id <SSOAuthorization>)arg1 themeManagerService:(id <GBTThemeManagerService>)arg2 delegate:(id <GBTDriveKitPickerWrapperServiceDelegate>)arg3;
@end
