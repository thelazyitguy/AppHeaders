//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPageLoadable-Protocol.h"

@class NSURL, SPTFreeTierPlaylistPageLoadableRequest, SPTPageCreationContext;
@protocol SPTAlgotorialSharingService, SPTNetworkConnectivityController, SPTPlaylistPlatformPlaylistDataLoader;

@interface SPTFreeTierPlaylistPageLoadable : NSObject <SPTPageLoadable>
{
    NSURL *_playlistURL;
    CDUnknownBlockType _playlistModelFactory;
    id <SPTNetworkConnectivityController> _connectivityController;
    SPTFreeTierPlaylistPageLoadableRequest *_currentRequest;
    id <SPTPlaylistPlatformPlaylistDataLoader> _playlistDataLoader;
    SPTPageCreationContext *_pageContext;
    id <SPTAlgotorialSharingService> _algotorialSharingService;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SPTAlgotorialSharingService> algotorialSharingService; // @synthesize algotorialSharingService=_algotorialSharingService;
@property(retain, nonatomic) SPTPageCreationContext *pageContext; // @synthesize pageContext=_pageContext;
@property(retain, nonatomic) id <SPTPlaylistPlatformPlaylistDataLoader> playlistDataLoader; // @synthesize playlistDataLoader=_playlistDataLoader;
@property(retain, nonatomic) SPTFreeTierPlaylistPageLoadableRequest *currentRequest; // @synthesize currentRequest=_currentRequest;
@property(retain, nonatomic) id <SPTNetworkConnectivityController> connectivityController; // @synthesize connectivityController=_connectivityController;
@property(copy, nonatomic) CDUnknownBlockType playlistModelFactory; // @synthesize playlistModelFactory=_playlistModelFactory;
@property(retain, nonatomic) NSURL *playlistURL; // @synthesize playlistURL=_playlistURL;
- (void)loadWithResultHandler:(id)arg1;
- (void)cancel;
- (id)initWithPlaylistURL:(id)arg1 pageContext:(id)arg2 connectivityController:(id)arg3 playlistDataLoader:(id)arg4 algotorialSharingService:(id)arg5 modelFactory:(CDUnknownBlockType)arg6;

@end

