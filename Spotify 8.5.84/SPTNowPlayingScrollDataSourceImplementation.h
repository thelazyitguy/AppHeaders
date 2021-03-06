//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNowPlayingScrollDataSource_Internal-Protocol.h"
#import "SPTNowPlayingScrollProviderDelegate-Protocol.h"

@class NSMutableDictionary, NSOrderedSet, NSString;
@protocol SPTNowPlayingScrollDataSourceDelegate, SPTNowPlayingTestManager;

@interface SPTNowPlayingScrollDataSourceImplementation : NSObject <SPTNowPlayingScrollProviderDelegate, SPTNowPlayingScrollDataSource_Internal>
{
    id <SPTNowPlayingScrollDataSourceDelegate> delegate;
    NSMutableDictionary *_providers;
    NSOrderedSet *_activeProviders;
    id <SPTNowPlayingTestManager> _testManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTNowPlayingTestManager> testManager; // @synthesize testManager=_testManager;
@property(copy, nonatomic) NSOrderedSet *activeProviders; // @synthesize activeProviders=_activeProviders;
@property(readonly, nonatomic) NSMutableDictionary *providers; // @synthesize providers=_providers;
@property(nonatomic) __weak id <SPTNowPlayingScrollDataSourceDelegate> delegate; // @synthesize delegate;
- (void)providerPreferredContentSizeDidChange:(id)arg1;
- (id)providerAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfProviders;
- (_Bool)updateProvidersForTrack:(id)arg1;
- (void)unregisterProvider:(id)arg1;
- (void)registerProvider:(id)arg1;
- (unsigned long long)maximumNumberOfProviders;
- (id)filteredProvidersForTrack:(id)arg1;
- (id)initWithTestManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

