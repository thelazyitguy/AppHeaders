//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class NSNumber;

@interface AIRExplorePaginationMetadata : AIRModel
{
    NSNumber *_hasNextPage;
    NSNumber *_sectionOffset;
    NSNumber *_itemsOffset;
}

+ (id)customKeyPathMapping;
+ (id)idAttributeName;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSNumber *itemsOffset; // @synthesize itemsOffset=_itemsOffset;
@property(readonly, copy, nonatomic) NSNumber *sectionOffset; // @synthesize sectionOffset=_sectionOffset;
@property(readonly, copy, nonatomic) NSNumber *hasNextPage; // @synthesize hasNextPage=_hasNextPage;

@end
