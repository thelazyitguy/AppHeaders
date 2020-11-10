//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTYourLibraryMusicLikedSongsModel-Protocol.h"

@class NSString;
@protocol SPTClientSettings, SPTCollectionPlatformDataLoader, SPTCollectionPlatformDataLoaderRequestToken, SPTLocalSettings, SPTYourLibraryLikedSongsModelDelegate, SPTYourLibraryMusicTestManager;

@interface SPTYourLibraryMusicLikedSongsModelImplementation : NSObject <SPTYourLibraryMusicLikedSongsModel>
{
    _Bool _favoriteSongsLoaded;
    _Bool _firstLoadInitiated;
    id <SPTYourLibraryLikedSongsModelDelegate> delegate;
    id <SPTLocalSettings> _localSettings;
    id <SPTCollectionPlatformDataLoader> _collectionPlatformDataLoader;
    id <SPTClientSettings> _clientSettings;
    id <SPTYourLibraryMusicTestManager> _testManager;
    id <SPTCollectionPlatformDataLoaderRequestToken> _tracksSubscription;
    long long _trackCountAtPreviousReply;
    unsigned long long _availableOfflineStatusAtPreviousReply;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isFirstLoadInitiated) _Bool firstLoadInitiated; // @synthesize firstLoadInitiated=_firstLoadInitiated;
@property(nonatomic, getter=isFavoriteSongsLoaded) _Bool favoriteSongsLoaded; // @synthesize favoriteSongsLoaded=_favoriteSongsLoaded;
@property(nonatomic) unsigned long long availableOfflineStatusAtPreviousReply; // @synthesize availableOfflineStatusAtPreviousReply=_availableOfflineStatusAtPreviousReply;
@property(nonatomic) long long trackCountAtPreviousReply; // @synthesize trackCountAtPreviousReply=_trackCountAtPreviousReply;
@property(retain, nonatomic) id <SPTCollectionPlatformDataLoaderRequestToken> tracksSubscription; // @synthesize tracksSubscription=_tracksSubscription;
@property(retain, nonatomic) id <SPTYourLibraryMusicTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) id <SPTClientSettings> clientSettings; // @synthesize clientSettings=_clientSettings;
@property(retain, nonatomic) id <SPTCollectionPlatformDataLoader> collectionPlatformDataLoader; // @synthesize collectionPlatformDataLoader=_collectionPlatformDataLoader;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(nonatomic) __weak id <SPTYourLibraryLikedSongsModelDelegate> delegate; // @synthesize delegate;
- (void)loadStoredSongCount;
- (void)updateStoredSongCount:(unsigned long long)arg1 offlineStatus:(unsigned long long)arg2;
- (void)handleFailedRequest:(id)arg1;
- (void)updateWithSongCount:(unsigned long long)arg1 offlineStatus:(unsigned long long)arg2;
- (void)handleSuccessfulRequest:(id)arg1;
- (void)loadFavoriteSongsModel;
- (void)updateModel;
- (void)loadModel;
- (id)initWithLocalSettings:(id)arg1 collectionPlatformDataLoader:(id)arg2 clientSettings:(id)arg3 testManager:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

