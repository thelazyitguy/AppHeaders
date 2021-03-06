//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCollectionArtistModelDelegate-Protocol.h"
#import "SPTPageLoadable-Protocol.h"

@class NSString;
@protocol SPTCollectionArtistModel, SPTPageLoadStateHandler;

@interface SPTCollectionArtistPageLoadable : NSObject <SPTCollectionArtistModelDelegate, SPTPageLoadable>
{
    CDUnknownBlockType _modelFactory;
    id <SPTCollectionArtistModel> _currentModel;
    id <SPTPageLoadStateHandler> _handler;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTPageLoadStateHandler> handler; // @synthesize handler=_handler;
@property(retain, nonatomic) id <SPTCollectionArtistModel> currentModel; // @synthesize currentModel=_currentModel;
@property(copy, nonatomic) CDUnknownBlockType modelFactory; // @synthesize modelFactory=_modelFactory;
- (void)artistModelOfflineStateChanged:(id)arg1;
- (void)artistModelDidUpdateSessionOfflineStatus:(id)arg1;
- (void)artistModelDidUpdatePlayingRow:(id)arg1;
- (void)artistModelFailedToLoad:(id)arg1 withError:(id)arg2;
- (void)artistModelDidUpdate:(id)arg1;
- (void)artistModelDidLoadMetadata:(id)arg1;
- (void)evaluateLoadStateWithModel:(id)arg1;
- (void)loadWithResultHandler:(id)arg1;
- (void)cancel;
- (id)initWithModelFactory:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

