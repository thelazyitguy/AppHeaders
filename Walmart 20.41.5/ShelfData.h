//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WMTaxonomyNode;

@interface ShelfData : NSObject
{
    _Bool _isRollback;
    WMTaxonomyNode *_taxonomyNode;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isRollback; // @synthesize isRollback=_isRollback;
@property(retain, nonatomic) WMTaxonomyNode *taxonomyNode; // @synthesize taxonomyNode=_taxonomyNode;
- (id)initWithTaxonomyNode:(id)arg1 isRollback:(_Bool)arg2;

@end

