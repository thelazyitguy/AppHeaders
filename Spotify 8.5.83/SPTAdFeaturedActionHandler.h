//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDataLoaderDelegate-Protocol.h"

@class NSString, SPTDataLoader;
@protocol SPTAdsBaseCosmosBridge, SPTCollectionPlatform, SPTFollowModelFactory, SPTLinkDispatcher, SPTPlayer, SPTPlaylistModel, SPTResolver;

@interface SPTAdFeaturedActionHandler : NSObject <SPTDataLoaderDelegate>
{
    _Bool _emailSent;
    id <SPTCollectionPlatform> _collectionPlatform;
    SPTDataLoader *_dataLoader;
    id <SPTResolver> _adResolver;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTAdsBaseCosmosBridge> _cosmosBridge;
    id <SPTPlayer> _player;
    id <SPTPlaylistModel> _playlistModel;
    id <SPTFollowModelFactory> _followFactory;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SPTFollowModelFactory> followFactory; // @synthesize followFactory=_followFactory;
@property(retain, nonatomic) id <SPTPlaylistModel> playlistModel; // @synthesize playlistModel=_playlistModel;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) id <SPTAdsBaseCosmosBridge> cosmosBridge; // @synthesize cosmosBridge=_cosmosBridge;
@property(nonatomic) __weak id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(nonatomic) __weak id <SPTResolver> adResolver; // @synthesize adResolver=_adResolver;
@property(retain, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(nonatomic) __weak id <SPTCollectionPlatform> collectionPlatform; // @synthesize collectionPlatform=_collectionPlatform;
@property(nonatomic) _Bool emailSent; // @synthesize emailSent=_emailSent;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (_Bool)emailWithFeaturedActionURI:(id)arg1 adId:(id)arg2;
- (_Bool)playPlaylistURL:(id)arg1 adId:(id)arg2;
- (_Bool)followArtistURL:(id)arg1;
- (_Bool)followPlaylistURL:(id)arg1;
- (_Bool)saveURL:(id)arg1;
- (_Bool)performFeaturedAction:(id)arg1 withAdURI:(id)arg2 adId:(id)arg3 creativeId:(id)arg4;
- (id)initWithCollectionPlatform:(id)arg1 dataloader:(id)arg2 player:(id)arg3 playlistModel:(id)arg4 followFactory:(id)arg5 adResolver:(id)arg6 linkDispatcher:(id)arg7 cosmosBridge:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
