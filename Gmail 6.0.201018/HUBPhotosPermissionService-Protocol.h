//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GPCPromise, PHSChannel;
@protocol HUBPermissionsPrompt;

@protocol HUBPhotosPermissionService <NSObject>
- (void)subscribeToPhotosPermissionChange:(PHSChannel *)arg1;
- (GPCPromise *)requestPhotosPermissionWithPrompt:(id <HUBPermissionsPrompt>)arg1;
- (long long)photosPermissionStatus;
@end
