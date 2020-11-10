//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NFLXMutableCollection.h"

@interface NFUIDownloadCollection : NFLXMutableCollection
{
    _Bool _editing;
    _Bool _collapsibleSectionsExpanded;
    CDUnknownBlockType _refreshBlock;
}

+ (CDUnknownBlockType)comparatorForShowDownloadCollectionSections:(id)arg1 firstItemComparator:(CDUnknownBlockType)arg2;
+ (CDUnknownBlockType)comparatorForShowDownloadCollectionItems:(id)arg1;
+ (CDUnknownBlockType)comparatorForDownloadCollectionSections:(id)arg1 firstItemComparator:(CDUnknownBlockType)arg2;
+ (CDUnknownBlockType)comparatorForDownloadCollectionItems;
+ (unsigned long long)sortType;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType refreshBlock; // @synthesize refreshBlock=_refreshBlock;
@property(nonatomic) _Bool collapsibleSectionsExpanded; // @synthesize collapsibleSectionsExpanded=_collapsibleSectionsExpanded;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
- (id)refreshed;

@end
