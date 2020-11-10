//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDataLoaderDelegate-Protocol.h"

@class NSString, SPTDataLoader;
@protocol HUBIconImageResolver;

@interface SPTDrivingModeHomeFeedDataLoader : NSObject <SPTDataLoaderDelegate>
{
    SPTDataLoader *_dataLoader;
    id <HUBIconImageResolver> _iconImageResolver;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <HUBIconImageResolver> iconImageResolver; // @synthesize iconImageResolver=_iconImageResolver;
@property(readonly, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
- (id)shelfItemsForHubModels:(id)arg1;
- (id)shelvesForHubModels:(id)arg1;
- (id)extractComponentModelsFromJSONData:(id)arg1 error:(id *)arg2;
- (id)contentURL;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)cancelLoading;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
- (void)loadHomeFeedItemsWithSuccessCallback:(CDUnknownBlockType)arg1 errorCallback:(CDUnknownBlockType)arg2;
- (id)initWithDataLoader:(id)arg1 iconImageResolver:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

