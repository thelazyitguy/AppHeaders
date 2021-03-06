//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GDKFileListing-Protocol.h"

@class GDKDataSourceSectionStyle, GDKFileQuery, GDKSort, NSIndexPath, NSOrderedSet, NSString;
@protocol GDKDragSessionManagerProtocol, GDKFile, GDKFilesViewDataSourceDelegate, GDKFilesViewViewControllerContainingDelegate, GOOContentViewObject, SSOIdentity;

@protocol GDKFilesViewDataSource <GDKFileListing>
@property(readonly, nonatomic) id <SSOIdentity> userIdentity;
@property(copy, nonatomic) NSString *title;
@property(retain, nonatomic) GDKFileQuery *fileQuery;
@property(retain, nonatomic) GDKSort *sort;
@property(readonly, copy, nonatomic) NSOrderedSet *supportedSortTypes;
@property(retain, nonatomic) id <GDKDragSessionManagerProtocol> dragSessionManager;
@property(nonatomic) __weak id <GDKFilesViewDataSourceDelegate> delegate;
@property(nonatomic) __weak id <GDKFilesViewViewControllerContainingDelegate> vcParentDelegate;
@property(readonly, nonatomic) _Bool hasPendingUpdate;
- (void)didEndDisplayingFileAtIndexPath:(NSIndexPath *)arg1;
- (void)willDisplayFileAtIndexPath:(NSIndexPath *)arg1;
- (NSIndexPath *)indexPathForItem:(id <GOOContentViewObject>)arg1;
- (GDKDataSourceSectionStyle *)styleOverridesForSection:(long long)arg1;
- (_Bool)isEmpty;
- (NSIndexPath *)indexPathForFile:(id <GDKFile>)arg1;
- (void)refreshWithCompletion:(void (^)(NSError *))arg1;
- (_Bool)hasMoreFiles;
- (void)loadMoreFiles:(void (^)(_Bool, _Bool, NSError *))arg1;
- (void)destroyModel;
- (void)createModel:(void (^)(QTMCollectionViewModel *, id <GDKQuerySuggestions>, NSError *))arg1;
- (NSString *)identifier;
@end

