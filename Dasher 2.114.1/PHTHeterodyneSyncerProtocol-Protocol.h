//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class GMSx_PHTPhenotypeSyncAfterConfiguration;

@protocol PHTHeterodyneSyncerProtocol
@property(readonly, nonatomic) GMSx_PHTPhenotypeSyncAfterConfiguration *syncAfterConfiguration;
- (_Bool)isInternalHeterodyneSyncer;
- (void)syncWithCallback:(void (^)(_Bool, NSError *, _Bool, GMSx_PHTHeterodyneSyncInfo *, GMSx_PHTPeriodicTaskInfo *))arg1;
@end
