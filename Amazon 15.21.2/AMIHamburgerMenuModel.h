//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSHashTable, NSMutableArray, NSMutableDictionary;

@interface AMIHamburgerMenuModel : NSObject
{
    _Bool _isDataUpdated;
    _Bool _isSorted;
    NSHashTable *_modelObservers;
    NSArray *_menuItems;
    NSMutableArray *_internalMenuItems;
    NSMutableDictionary *_menuItemLookupTable;
}

@property(nonatomic) _Bool isSorted; // @synthesize isSorted=_isSorted;
@property(nonatomic) _Bool isDataUpdated; // @synthesize isDataUpdated=_isDataUpdated;
@property(retain, nonatomic) NSMutableDictionary *menuItemLookupTable; // @synthesize menuItemLookupTable=_menuItemLookupTable;
@property(retain, nonatomic) NSMutableArray *internalMenuItems; // @synthesize internalMenuItems=_internalMenuItems;
@property(retain, nonatomic) NSArray *menuItems; // @synthesize menuItems=_menuItems;
@property(retain, nonatomic) NSHashTable *modelObservers; // @synthesize modelObservers=_modelObservers;
- (void).cxx_destruct;
- (id)quicksort:(id)arg1 WithComparator:(CDUnknownBlockType)arg2;
- (void)quicksortInPlace:(id)arg1 From:(long long)arg2 To:(long long)arg3 WithComparator:(CDUnknownBlockType)arg4;
- (void)sort;
- (void)notifyMenuItemRemovedToObservers:(id)arg1;
- (void)notifyMenuItemUpdatedToObservers:(id)arg1;
- (void)notifyMenuItemAddedToObservers:(id)arg1;
- (void)removeMenuItemObserver:(id)arg1;
- (void)addMenuItemObserver:(id)arg1;
- (void)removeMenuItem:(id)arg1;
- (void)replaceMenuItem:(id)arg1 withNewItem:(id)arg2;
- (void)menuItemUpdated:(id)arg1;
- (id)addMenuItem:(id)arg1;
- (void)dealloc;
- (id)init;

@end
