//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CoralModel.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, NSDictionary;

@interface ComAmazonPcompModel_MatchResult : CoralModel <NSCoding, NSCopying>
{
    NSArray *_itemIds;
    NSArray *_items;
    NSArray *_hints;
    NSArray *_productInfoList;
    NSDictionary *_resultInfoMap;
}

+ (id)mapTypeForProperty:(id)arg1;
+ (id)listTypeForProperty:(id)arg1;
+ (id)type;
@property(retain, nonatomic) NSDictionary *resultInfoMap; // @synthesize resultInfoMap=_resultInfoMap;
@property(retain, nonatomic) NSArray *productInfoList; // @synthesize productInfoList=_productInfoList;
@property(retain, nonatomic) NSArray *hints; // @synthesize hints=_hints;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSArray *itemIds; // @synthesize itemIds=_itemIds;
- (void).cxx_destruct;

@end

