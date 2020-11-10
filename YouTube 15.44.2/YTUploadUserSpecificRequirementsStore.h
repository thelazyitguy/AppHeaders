//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTUploadProgressObserver-Protocol.h>
#import <Module_Framework/YTUserChangedObserver-Protocol.h>

@class GIMMe, NSMutableSet, NSString;
@protocol YTUploadUserSpecificRequirementsObserver;

@interface YTUploadUserSpecificRequirementsStore : NSObject <YTUserChangedObserver, YTUploadProgressObserver>
{
    NSMutableSet *_confirmedUploads;
    NSMutableSet *_uploadsWithMetadata;
    GIMMe *_gimme;
    id <YTUploadUserSpecificRequirementsObserver> _observer;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <YTUploadUserSpecificRequirementsObserver> observer; // @synthesize observer=_observer;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void)notifyRequirementsChanged;
- (void)mergeWithStoreConfirmedUploads:(id)arg1 uploadsWithMetadata:(id)arg2;
- (void)loadCurrentState;
- (long long)currentRequirementsForFrontendID:(id)arg1;
- (void)removeDataForUpload:(id)arg1;
- (void)userDidEnterMetadataForUpload:(id)arg1;
- (void)userDidConfirmUpload:(id)arg1;
- (void)uploadStatusDidChangeWithFrontendUploadID:(id)arg1 state:(long long)arg2;
- (void)userDidChange;
- (long long)checkRequirements:(long long)arg1 frontendID:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

