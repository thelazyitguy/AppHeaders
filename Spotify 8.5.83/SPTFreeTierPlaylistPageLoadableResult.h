//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTFreeTierPlaylistModel, SPTFreeTierPlaylistModelEntity;

@interface SPTFreeTierPlaylistPageLoadableResult : NSObject
{
    id <SPTFreeTierPlaylistModel> _playlistModel;
    id <SPTFreeTierPlaylistModelEntity> _initialEntity;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistModelEntity> initialEntity; // @synthesize initialEntity=_initialEntity;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistModel> playlistModel; // @synthesize playlistModel=_playlistModel;
- (id)initWithPlaylistModel:(id)arg1 initialEntity:(id)arg2;

@end

