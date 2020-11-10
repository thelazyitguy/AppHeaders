//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class GIMMe, NSArray, NSMutableDictionary;

@interface YTShortsProjectStateArchiveList : NSObject <NSSecureCoding>
{
    NSMutableDictionary *_projectStatesMap;
    NSArray *_orderedProjectIDs;
    GIMMe *_gimme;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void)invalidateOrderedProjectIDs;
- (id)lastModifiedDateForProjectDict:(id)arg1;
- (id)filePathURLForProjectDict:(id)arg1;
- (id)projectArchiveDictWithURL:(id)arg1;
- (void)fetchAssetCountForProjectState:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchEmptyProjectStateProjectIDs:(CDUnknownBlockType)arg1;
- (id)projectArchiveURLForProjectID:(id)arg1;
- (_Bool)removeProjectStateWithProjectID:(id)arg1;
- (_Bool)touchProjectState:(id)arg1;
- (_Bool)addProjectState:(id)arg1;
@property(readonly, nonatomic) NSArray *orderedProjectIDs;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

