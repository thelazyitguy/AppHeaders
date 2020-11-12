//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChromeInternal/DSCCardListModelObserver-Protocol.h>
#import <ChromeInternal/DSCContentDataProvider-Protocol.h>

@class DSCCardListModel, DSCContentLayout, DSCDataSourceModification, DSCError, NSDiffableDataSourceSnapshot, NSMutableArray, NSString;
@protocol DSCDataConsumer, DSCElementsOutputsConsumer;

@interface DSCContentViewDataSource : NSObject <DSCCardListModelObserver, DSCContentDataProvider>
{
    _Bool _dataSourceNeedsReload;
    _Bool _shouldShowSpinner;
    DSCContentLayout *_contentLayout;
    DSCCardListModel *_dataModel;
    id <DSCElementsOutputsConsumer> _elementsOutputsConsumer;
    id <DSCDataConsumer> _contentView;
    DSCError *_lastError;
    DSCError *_pendingError;
    NSMutableArray *_dataSourceModificationQueue;
    DSCDataSourceModification *_errorModification;
    DSCDataSourceModification *_spinnerModification;
    NSDiffableDataSourceSnapshot *_currentSnapshot;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDiffableDataSourceSnapshot *currentSnapshot; // @synthesize currentSnapshot=_currentSnapshot;
@property(retain, nonatomic) DSCDataSourceModification *spinnerModification; // @synthesize spinnerModification=_spinnerModification;
@property(retain, nonatomic) DSCDataSourceModification *errorModification; // @synthesize errorModification=_errorModification;
@property(retain, nonatomic) NSMutableArray *dataSourceModificationQueue; // @synthesize dataSourceModificationQueue=_dataSourceModificationQueue;
@property(nonatomic) _Bool shouldShowSpinner; // @synthesize shouldShowSpinner=_shouldShowSpinner;
@property(retain, nonatomic) DSCError *pendingError; // @synthesize pendingError=_pendingError;
@property(retain, nonatomic) DSCError *lastError; // @synthesize lastError=_lastError;
@property(nonatomic) _Bool dataSourceNeedsReload; // @synthesize dataSourceNeedsReload=_dataSourceNeedsReload;
@property(nonatomic) __weak id <DSCDataConsumer> contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <DSCElementsOutputsConsumer> elementsOutputsConsumer; // @synthesize elementsOutputsConsumer=_elementsOutputsConsumer;
@property(retain, nonatomic) DSCCardListModel *dataModel; // @synthesize dataModel=_dataModel;
@property(retain, nonatomic) DSCContentLayout *contentLayout; // @synthesize contentLayout=_contentLayout;
@property(readonly, copy) NSString *description;
- (_Bool)indexPathIsValidContentPath:(id)arg1;
- (_Bool)isUserVisibleError:(id)arg1;
- (void)cardListModel:(id)arg1 didReportError:(id)arg2;
- (void)cardListModel:(id)arg1 didFailToFetchDataWithError:(id)arg2;
- (void)cardListModel:(id)arg1 didFailToWriteDataCacheWithError:(id)arg2;
- (void)cardListModel:(id)arg1 didFinishLoadWithError:(id)arg2;
- (void)flushDataSourceModificationQueue;
- (void)cardListModelDidEndUpdates:(id)arg1;
- (void)cardListModel:(id)arg1 didInsertItems:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)cardListModel:(id)arg1 didRemoveItems:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;
- (void)cardListModel:(id)arg1 didUpdateItemsFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3 updateType:(long long)arg4;
- (void)cardListModelDidReloadItems:(id)arg1 withDisplayStrategy:(unsigned long long)arg2;
- (void)cardListModelDidBeginUpdates:(id)arg1;
- (void)removeSpinnerCell;
- (void)insertSpinnerCell;
- (id)spinnerIndexPath;
- (void)reloadErrorCell;
- (void)deleteErrorCell;
- (void)insertErrorCell:(id)arg1;
- (id)errorIndexPath;
- (id)updateModification:(id)arg1 withModification:(id)arg2;
- (void)loadMore;
- (_Bool)canRenderNodeAtIndexPath:(id)arg1;
- (long long)numberOfSectionsInContentView:(id)arg1;
- (long long)contentView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)addCardModelToCell:(id)arg1 atIndexPath:(id)arg2;
- (id)renderingDataForItemAtIndexPath:(id)arg1;
- (id)allIdentifiers;
- (long long)numberOfContentItems;
- (id)contentView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)prefetchItemsInRange:(struct _NSRange)arg1;
- (id)initWithContentView:(id)arg1 contentLayout:(id)arg2 dataModel:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
