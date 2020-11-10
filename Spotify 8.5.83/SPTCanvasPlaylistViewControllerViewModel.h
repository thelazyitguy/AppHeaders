//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPlayerObserver-Protocol.h"

@class NSString, NSURL, SPTCanvasPlaylistModel, SPTCanvasPlaylistPageManager, SPTCanvasPlaylistResolver;
@protocol GLUEImageLoader, SPTCanvasMetadataResolverFactory, SPTCanvasPlaylistViewControllerViewModelDelegate, SPTCanvasViewControllerFactory, SPTPlayer, SPTPlayerFeature;

@interface SPTCanvasPlaylistViewControllerViewModel : NSObject <SPTPlayerObserver>
{
    NSString *_playlistName;
    long long _numberOfSections;
    id <SPTCanvasPlaylistViewControllerViewModelDelegate> _delegate;
    id <SPTCanvasMetadataResolverFactory> _metaDataResolverFactory;
    id <SPTCanvasViewControllerFactory> _canvasViewControllerFactory;
    id <SPTPlayer> _player;
    id <GLUEImageLoader> _imageLoader;
    id <SPTPlayerFeature> _playerFeature;
    SPTCanvasPlaylistResolver *_playlistResolver;
    SPTCanvasPlaylistModel *_canvasPlaylistModel;
    NSURL *_currentTrackURI;
    SPTCanvasPlaylistPageManager *_pageManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTCanvasPlaylistPageManager *pageManager; // @synthesize pageManager=_pageManager;
@property(copy, nonatomic) NSURL *currentTrackURI; // @synthesize currentTrackURI=_currentTrackURI;
@property(retain, nonatomic) SPTCanvasPlaylistModel *canvasPlaylistModel; // @synthesize canvasPlaylistModel=_canvasPlaylistModel;
@property(readonly, nonatomic) SPTCanvasPlaylistResolver *playlistResolver; // @synthesize playlistResolver=_playlistResolver;
@property(readonly, nonatomic) __weak id <SPTPlayerFeature> playerFeature; // @synthesize playerFeature=_playerFeature;
@property(readonly, nonatomic) id <GLUEImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) id <SPTCanvasViewControllerFactory> canvasViewControllerFactory; // @synthesize canvasViewControllerFactory=_canvasViewControllerFactory;
@property(readonly, nonatomic) id <SPTCanvasMetadataResolverFactory> metaDataResolverFactory; // @synthesize metaDataResolverFactory=_metaDataResolverFactory;
@property(nonatomic) __weak id <SPTCanvasPlaylistViewControllerViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long numberOfSections; // @synthesize numberOfSections=_numberOfSections;
@property(copy, nonatomic) NSString *playlistName; // @synthesize playlistName=_playlistName;
- (void)player:(id)arg1 stateDidChange:(id)arg2;
@property(readonly, nonatomic) long long numberOfItems;
- (_Bool)shouldSelectIndexPath:(id)arg1;
- (_Bool)hasCanvasAtIndexPath:(id)arg1;
- (id)artistNameForItemAtIndexPath:(id)arg1;
- (id)albumTitleForItemAtIndexPath:(id)arg1;
- (id)trackTitleForItemAtIndexPath:(id)arg1;
- (id)viewControllerForItemAtIndexPath:(id)arg1;
- (id)canvasViewControllerForTrack:(id)arg1 withCanvasModel:(id)arg2;
- (void)peformUpdatesUsingNumberOfTracksBefore:(unsigned long long)arg1 numberOfTracksAfter:(unsigned long long)arg2;
- (void)resolveMetadataForTrackAtIndex:(unsigned long long)arg1 reloadData:(_Bool)arg2;
- (void)resolveMetadataForTracks:(id)arg1;
- (void)resolvePlaylist;
- (void)removeContent;
- (void)addContent;
- (void)playTrackAtIndexPath:(id)arg1;
- (void)pauseTrack;
- (id)initWithMetaDataResolverFactory:(id)arg1 canvasViewControllerFactory:(id)arg2 playlistResolver:(id)arg3 player:(id)arg4 playerFeature:(id)arg5 imageLoader:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

