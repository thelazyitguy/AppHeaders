//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface TableDefinition : NSObject
{
    NSMutableArray *_sectionDefinitions;
}

- (void).cxx_destruct;
@property(readonly) NSMutableArray *sectionDefinitions; // @synthesize sectionDefinitions=_sectionDefinitions;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)sectionDefinitionForSectionId:(long long)arg1;
- (id)indexPathForRowIndex:(unsigned long long)arg1 rowId:(long long)arg2 sectionId:(long long)arg3;
- (id)indexPathForRowId:(long long)arg1 sectionId:(long long)arg2;
- (id)indexPathForRowId:(long long)arg1;
- (unsigned long long)rowIndexByIndexPath:(id)arg1;
- (long long)rowIdByIndexPath:(id)arg1;
- (long long)sectionIdByIndexPath:(id)arg1;
- (long long)sectionIdBySection:(long long)arg1;
- (void)addSectionDefinition:(id)arg1;
- (id)init;

@end

