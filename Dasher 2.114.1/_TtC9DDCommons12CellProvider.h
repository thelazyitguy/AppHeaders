//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DDCommons/UICollectionViewDataSource-Protocol.h>
#import <DDCommons/UITableViewDataSource-Protocol.h>

@class _TtC9DDCommons13ContentLayout;

@interface _TtC9DDCommons12CellProvider : NSObject <UICollectionViewDataSource, UITableViewDataSource>
{
    // Error parsing type: , name: layout
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, retain) _TtC9DDCommons13ContentLayout *layout; // @synthesize layout;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;

@end
