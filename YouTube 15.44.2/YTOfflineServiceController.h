//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTBrowseServiceObserver-Protocol.h>
#import <Module_Framework/YTUserChangedObserver-Protocol.h>

@class NSMutableArray, NSString;

@interface YTOfflineServiceController : NSObject <YTUserChangedObserver, YTBrowseServiceObserver>
{
    NSMutableArray *_services;
    _Bool _saveOfflineResponsesNeeded;
    _Bool _isPendingRequests;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isPendingRequests; // @synthesize isPendingRequests=_isPendingRequests;
@property(nonatomic) _Bool saveOfflineResponsesNeeded; // @synthesize saveOfflineResponsesNeeded=_saveOfflineResponsesNeeded;
- (void)finishSavingOfflineResponsesWithSuccess:(_Bool)arg1;
- (void)saveOfflineResponsesFromIndex:(unsigned long long)arg1;
- (void)didReceiveAnyBrowseResponseFromNetwork;
- (void)userDidChange;
- (void)saveOfflineResponsesIfNeeded;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

