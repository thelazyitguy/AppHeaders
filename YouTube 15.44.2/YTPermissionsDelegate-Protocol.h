//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class YTPermissionsViewController;

@protocol YTPermissionsDelegate <NSObject>
- (void)permissionsUpdated:(YTPermissionsViewController *)arg1 forType:(long long)arg2 status:(long long)arg3;

@optional
- (void)willOpenSettingsForPermissions:(YTPermissionsViewController *)arg1;
@end

