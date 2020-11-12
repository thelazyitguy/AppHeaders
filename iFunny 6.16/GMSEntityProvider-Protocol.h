//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/NSObject-Protocol.h>

@protocol GMSEntityResources, GMSEntityUIHandler;

@protocol GMSEntityProvider <NSObject>
- (void)willDestroyRenderer:(objc_metadata_hider_ptr_a1c2b231)arg1;
- (void)didCreateRenderer:(objc_metadata_hider_ptr_a1c2b231)arg1 resources:(id <GMSEntityResources>)arg2 behaviorCamera:(reffed_ptr_329922e5)arg3;

@optional
- (void)willPauseRenderer:(objc_metadata_hider_ptr_a1c2b231)arg1;
- (void)didResumeRenderer:(objc_metadata_hider_ptr_a1c2b231)arg1;
- (void)myLocationDidHide;
- (void)myLocationDidUpdateTo:(const struct Point2D *)arg1;
- (void)wasReleasedFromEntityUIHandler:(id <GMSEntityUIHandler>)arg1;
- (void)wasBoundToEntityUIHandler:(id <GMSEntityUIHandler>)arg1;
@end
