//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTGuideServiceCoordinator.h>

#import "YTPhotoUploadObserverDelegate-Protocol.h"

@class GIMMe, NSString;

@interface YTAppGuideServiceCoordinator : YTGuideServiceCoordinator <YTPhotoUploadObserverDelegate>
{
}

- (void)didEndAvatarPhotoUploadWithStatus:(long long)arg1 image:(id)arg2;
- (void)decorateGuideRequest:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak GIMMe *gimme;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

