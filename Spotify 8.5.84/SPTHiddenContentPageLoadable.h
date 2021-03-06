//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTHiddenContentModelDelegate-Protocol.h"
#import "SPTPageLoadable-Protocol.h"

@class NSString;
@protocol SPTHiddenContentModel, SPTPageLoadStateHandler;

@interface SPTHiddenContentPageLoadable : NSObject <SPTHiddenContentModelDelegate, SPTPageLoadable>
{
    _Bool _hiddenArtistsLoaded;
    _Bool _hiddenTracksLoaded;
    CDUnknownBlockType _modelFactory;
    id <SPTHiddenContentModel> _currentModel;
    id <SPTPageLoadStateHandler> _handler;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isHiddenTracksLoaded) _Bool hiddenTracksLoaded; // @synthesize hiddenTracksLoaded=_hiddenTracksLoaded;
@property(nonatomic, getter=isHiddenArtistsLoaded) _Bool hiddenArtistsLoaded; // @synthesize hiddenArtistsLoaded=_hiddenArtistsLoaded;
@property(retain, nonatomic) id <SPTPageLoadStateHandler> handler; // @synthesize handler=_handler;
@property(retain, nonatomic) id <SPTHiddenContentModel> currentModel; // @synthesize currentModel=_currentModel;
@property(copy, nonatomic) CDUnknownBlockType modelFactory; // @synthesize modelFactory=_modelFactory;
- (void)hiddenContentModel:(id)arg1 didLoadTracks:(id)arg2;
- (void)hiddenContentModel:(id)arg1 didLoadArtists:(id)arg2;
- (void)hiddenContentModel:(id)arg1 didFailToLoadTracksWithError:(id)arg2;
- (void)hiddenContentModel:(id)arg1 didFailToLoadArtistsWithError:(id)arg2;
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

