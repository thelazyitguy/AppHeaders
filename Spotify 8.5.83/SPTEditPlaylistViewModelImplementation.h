//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTEditPlaylistModelDelegate-Protocol.h"
#import "SPTEditPlaylistViewModel-Protocol.h"

@class NSMutableArray, NSString, NSURL;
@protocol SPTEditPlaylistModel, SPTEditPlaylistViewModelDelegate;

@interface SPTEditPlaylistViewModelImplementation : NSObject <SPTEditPlaylistViewModel, SPTEditPlaylistModelDelegate>
{
    _Bool _editAnnotationEnabled;
    _Bool _renameEnabled;
    _Bool _isCollaborative;
    _Bool _hasBeenSaved;
    id <SPTEditPlaylistViewModelDelegate> _delegate;
    NSString *_originalPlaylistName;
    NSString *_editedPlaylistName;
    NSString *_originalDescription;
    NSString *_editedDescription;
    id <SPTEditPlaylistModel> _playlistModel;
    NSMutableArray *_tracks;
    NSURL *_playlistImageURL;
    NSString *_playlistOwnerUsername;
    NSMutableArray *_trackReorders;
    NSMutableArray *_trackDeletions;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasBeenSaved; // @synthesize hasBeenSaved=_hasBeenSaved;
@property(retain, nonatomic) NSMutableArray *trackDeletions; // @synthesize trackDeletions=_trackDeletions;
@property(retain, nonatomic) NSMutableArray *trackReorders; // @synthesize trackReorders=_trackReorders;
@property(copy, nonatomic) NSString *playlistOwnerUsername; // @synthesize playlistOwnerUsername=_playlistOwnerUsername;
@property(nonatomic) _Bool isCollaborative; // @synthesize isCollaborative=_isCollaborative;
@property(nonatomic) _Bool renameEnabled; // @synthesize renameEnabled=_renameEnabled;
@property(retain, nonatomic) NSURL *playlistImageURL; // @synthesize playlistImageURL=_playlistImageURL;
@property(retain, nonatomic) NSMutableArray *tracks; // @synthesize tracks=_tracks;
@property(readonly, nonatomic) id <SPTEditPlaylistModel> playlistModel; // @synthesize playlistModel=_playlistModel;
@property(copy, nonatomic) NSString *editedDescription; // @synthesize editedDescription=_editedDescription;
@property(copy, nonatomic) NSString *originalDescription; // @synthesize originalDescription=_originalDescription;
@property(copy, nonatomic) NSString *editedPlaylistName; // @synthesize editedPlaylistName=_editedPlaylistName;
@property(copy, nonatomic) NSString *originalPlaylistName; // @synthesize originalPlaylistName=_originalPlaylistName;
@property(nonatomic) __weak id <SPTEditPlaylistViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)editPlaylistModel:(id)arg1 error:(id)arg2;
- (void)editPlaylistModel:(id)arg1 modelEntityDidChange:(id)arg2;
- (void)updateWithModelEntity:(id)arg1;
- (void)saveMovesWithCompletion:(CDUnknownBlockType)arg1;
- (void)saveWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool hasChanges;
- (void)moveTrackAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)removeTrackAtIndexPath:(id)arg1;
- (void)handleError:(id)arg1 withContext:(id)arg2;
- (void)viewDidLoad;
- (id)trackURLAtIndexPath:(id)arg1;
- (id)trackViewModelAtIndexPath:(id)arg1;
@property(readonly, nonatomic) _Bool editAnnotationEnabled; // @synthesize editAnnotationEnabled=_editAnnotationEnabled;
@property(readonly, nonatomic) _Bool reorderEnabled;
@property(readonly, nonatomic) unsigned long long countOfTracks;
@property(readonly, nonatomic) NSURL *playlistURL;
- (id)initWithPlaylistModel:(id)arg1 enableAnnotate:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

