//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/NSCopying-Protocol.h>

@class NSMutableArray, NSMutableDictionary;

@interface ASMutableElementMap : NSObject <NSCopying>
{
    NSMutableDictionary *_supplementaryElements;
    NSMutableArray *_sections;
    NSMutableArray *_sectionsOfItems;
}

+ (id)deepMutableCopyOfElementsDictionary:(id)arg1;
- (void).cxx_destruct;
- (void)removeContentAddedInChangeSet:(id)arg1;
- (void)migrateSupplementaryElementsWithSectionMapping:(id)arg1;
- (void)insertElement:(id)arg1 atIndexPath:(id)arg2;
- (void)insertEmptySectionsOfItemsAtIndexes:(id)arg1;
- (void)removeSectionsOfItems:(id)arg1;
- (void)removeAllElements;
- (void)removeSupplementaryElementsAtIndexPaths:(id)arg1 kind:(id)arg2;
- (void)removeSectionsAtIndexes:(id)arg1;
- (void)removeItemsAtIndexPaths:(id)arg1;
- (void)insertSection:(id)arg1 atIndex:(long long)arg2;
- (void)removeAllSections;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithSections:(id)arg1 items:(id)arg2 supplementaryElements:(id)arg3;

@end

