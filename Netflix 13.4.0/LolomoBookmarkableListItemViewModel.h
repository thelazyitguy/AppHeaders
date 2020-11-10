//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LolomoListItemViewModel.h"

@class LolomoEntity;

@interface LolomoBookmarkableListItemViewModel : LolomoListItemViewModel
{
    CDUnknownBlockType _onUpdatedBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType onUpdatedBlock; // @synthesize onUpdatedBlock=_onUpdatedBlock;
- (void)playbackFinished:(id)arg1;
- (void)unregisterBookmarkUpdatedHandler;
- (void)registerBookmarkUpdatedHandler:(CDUnknownBlockType)arg1;
- (void)addPlaybackObserver;
- (id)initWithEntity:(id)arg1 list:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) LolomoEntity *entity; // @dynamic entity;

@end
