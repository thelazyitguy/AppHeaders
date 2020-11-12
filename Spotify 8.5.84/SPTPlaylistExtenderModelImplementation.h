//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNetworkConnectivityControllerObserver-Protocol.h"
#import "SPTPlaylistExtenderModel-Protocol.h"
#import "SPTPlaylistExtenderModelEffectLoop-Protocol.h"
#import "SPTPlaylistExtenderModelEventLoop-Protocol.h"

@class NSString, NSURL;
@protocol SPTExplicitContentAccessManager, SPTNetworkConnectivityController, SPTPlayer, SPTPlaylistExtender, SPTPlaylistExtenderModel, SPTPlaylistExtenderModelDelegate, SPTPlaylistExtenderModelState, SPTPlaylistModel, SPTPlaylistPlatformPlaylistDataLoader;

@interface SPTPlaylistExtenderModelImplementation : NSObject <SPTNetworkConnectivityControllerObserver, SPTPlaylistExtenderModel, SPTPlaylistExtenderModelEffectLoop, SPTPlaylistExtenderModelEventLoop>
{
    id <SPTPlaylistExtenderModelDelegate> delegate;
    id subscriptionToken;
    id <SPTPlaylistExtender> _playlistExtender;
    id <SPTPlayer> _player;
    id <SPTExplicitContentAccessManager> _explicitContentAccessManager;
    id <SPTPlaylistPlatformPlaylistDataLoader> _playlistDataLoader;
    id <SPTPlaylistModel> _playlistModel;
    unsigned long long _preferredNumberOfTracks;
    NSURL *_playlistURI;
    id <SPTNetworkConnectivityController> _networkConnectivityController;
    id <SPTPlaylistExtenderModelState> _currentState;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTPlaylistExtenderModelState> currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) id <SPTNetworkConnectivityController> networkConnectivityController; // @synthesize networkConnectivityController=_networkConnectivityController;
@property(retain, nonatomic) NSURL *playlistURI; // @synthesize playlistURI=_playlistURI;
@property(nonatomic) unsigned long long preferredNumberOfTracks; // @synthesize preferredNumberOfTracks=_preferredNumberOfTracks;
@property(retain, nonatomic) id <SPTPlaylistModel> playlistModel; // @synthesize playlistModel=_playlistModel;
@property(retain, nonatomic) id <SPTPlaylistPlatformPlaylistDataLoader> playlistDataLoader; // @synthesize playlistDataLoader=_playlistDataLoader;
@property(retain, nonatomic) id <SPTExplicitContentAccessManager> explicitContentAccessManager; // @synthesize explicitContentAccessManager=_explicitContentAccessManager;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) id <SPTPlaylistExtender> playlistExtender; // @synthesize playlistExtender=_playlistExtender;
@property(retain, nonatomic) id subscriptionToken; // @synthesize subscriptionToken;
@property(nonatomic) __weak id <SPTPlaylistExtenderModelDelegate> delegate; // @synthesize delegate;
- (void)networkConnectivityController:(id)arg1 didChangeConnectionType:(long long)arg2 oldConnectionType:(long long)arg3;
- (void)networkConnectivityController:(id)arg1 didChangeForcedOffline:(_Bool)arg2;
@property(readonly, nonatomic) NSString *sectionFooterButtonTitle;
@property(readonly, nonatomic) NSString *sectionHeaderSubtitle;
@property(readonly, nonatomic) NSString *sectionHeaderTitle;
- (_Bool)shouldDisplayFooter;
- (void)trackSelected:(id)arg1;
- (void)refresh;
- (void)startLoading;
- (id)items;
@property(readonly, nonatomic, getter=isStarted) _Bool started;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
- (void)addTrack:(id)arg1;
- (void)pushState:(id)arg1 withEffects:(id)arg2;
- (void)pushEvent:(id)arg1;
@property(readonly, nonatomic) __weak id <SPTPlaylistExtenderModel> model;
- (id)initWithPlaylistExtender:(id)arg1 player:(id)arg2 explicitContentAccessManager:(id)arg3 playlistDataLoader:(id)arg4 playlistModel:(id)arg5 networkConnectivityController:(id)arg6 playlistURI:(id)arg7 preferredNumberOfTracks:(unsigned long long)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
