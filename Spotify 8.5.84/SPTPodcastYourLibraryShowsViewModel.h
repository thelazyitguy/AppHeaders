//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSURL;
@protocol SPTCollectionPlatformDataLoader, SPTCollectionPlatformDataLoaderRequestToken, SPTPodcastUIStringFormatter, SPTPodcastYourLibraryShowsViewModelDelegate;

@interface SPTPodcastYourLibraryShowsViewModel : NSObject
{
    id <SPTPodcastYourLibraryShowsViewModelDelegate> _delegate;
    NSURL *_URL;
    id <SPTCollectionPlatformDataLoader> _dataLoader;
    id <SPTCollectionPlatformDataLoaderRequestToken> _collectionRequestToken;
    NSArray *_showsCollection;
    id <SPTPodcastUIStringFormatter> _stringFormatter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTPodcastUIStringFormatter> stringFormatter; // @synthesize stringFormatter=_stringFormatter;
@property(copy, nonatomic) NSArray *showsCollection; // @synthesize showsCollection=_showsCollection;
@property(retain, nonatomic) id <SPTCollectionPlatformDataLoaderRequestToken> collectionRequestToken; // @synthesize collectionRequestToken=_collectionRequestToken;
@property(retain, nonatomic) id <SPTCollectionPlatformDataLoader> dataLoader; // @synthesize dataLoader=_dataLoader;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) __weak id <SPTPodcastYourLibraryShowsViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (id)parseResponseItems:(id)arg1;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (unsigned long long)numberOfRows;
- (_Bool)showSeparatorForSection:(long long)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (void)unsubscribe;
- (void)loadAndSubscribe;
- (id)initWithURL:(id)arg1 dataLoader:(id)arg2 stringFormatter:(id)arg3;

@end
