//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <doordash_collectionview_ios/DDCollectionViewDatasourceDelegate-Protocol.h>

@class DDCollectionViewBasicDatasource, NSString;

@interface DDActivityIndicatorDatasourceDelegate : NSObject <DDCollectionViewDatasourceDelegate>
{
    DDCollectionViewBasicDatasource *_datasource;
}

- (void).cxx_destruct;
@property(retain, nonatomic) DDCollectionViewBasicDatasource *datasource; // @synthesize datasource=_datasource;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)unregisterReusableViewsWithCollectionView:(id)arg1;
- (void)registerReusableViewsWithCollectionView:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
