//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTEntityStoreObserver-Protocol.h"

@class NSString;
@protocol YTEngagementPanelScrollToItemControllerDelegate, YTEntityStore;

@interface YTEngagementPanelScrollToItemController : NSObject <YTEntityStoreObserver>
{
    _Bool _isObservingEntityStoreSynchronously;
    _Bool _isObservingActiveSyncModelIndex;
    id <YTEngagementPanelScrollToItemControllerDelegate> _delegate;
    id <YTEntityStore> _entityStore;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <YTEntityStore> entityStore; // @synthesize entityStore=_entityStore;
@property(nonatomic) _Bool isObservingActiveSyncModelIndex; // @synthesize isObservingActiveSyncModelIndex=_isObservingActiveSyncModelIndex;
@property(nonatomic) _Bool isObservingEntityStoreSynchronously; // @synthesize isObservingEntityStoreSynchronously=_isObservingEntityStoreSynchronously;
@property(nonatomic) __weak id <YTEngagementPanelScrollToItemControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)syncModelEntityKey;
- (void)didUpdateKey:(id)arg1 inEntityStore:(id)arg2 withUpdateType:(unsigned long long)arg3 previousEntity:(id)arg4 entity:(id)arg5;
- (void)stopObservingSyncModel;
- (void)startObservingSyncModel;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

