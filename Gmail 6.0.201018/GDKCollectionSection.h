//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListDiffable-Protocol.h"

@class GDKCollectionSectionStyler, NSArray;

@interface GDKCollectionSection : NSObject <IGListDiffable>
{
    long long _section;
    GDKCollectionSectionStyler *_styler;
    NSArray *_cellModels;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *cellModels; // @synthesize cellModels=_cellModels;
@property(readonly, nonatomic) GDKCollectionSectionStyler *styler; // @synthesize styler=_styler;
@property(readonly, nonatomic) long long section; // @synthesize section=_section;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (long long)compare:(id)arg1;
- (id)initWithSection:(long long)arg1 styler:(id)arg2 cellModels:(id)arg3;

@end
