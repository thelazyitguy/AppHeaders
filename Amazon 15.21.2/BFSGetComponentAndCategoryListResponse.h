//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CoralModel.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray;

@interface BFSGetComponentAndCategoryListResponse : CoralModel <NSCoding, NSCopying>
{
    NSArray *_componentList;
    NSArray *_categoryList;
}

+ (id)listTypeForProperty:(id)arg1;
+ (id)type;
@property(retain, nonatomic) NSArray *categoryList; // @synthesize categoryList=_categoryList;
@property(retain, nonatomic) NSArray *componentList; // @synthesize componentList=_componentList;
- (void).cxx_destruct;

@end
