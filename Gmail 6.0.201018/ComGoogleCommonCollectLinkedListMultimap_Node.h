//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleCommonCollectAbstractMapEntry.h"

@interface ComGoogleCommonCollectLinkedListMultimap_Node : ComGoogleCommonCollectAbstractMapEntry
{
    id key_;
    id value_;
    ComGoogleCommonCollectLinkedListMultimap_Node *next_;
    ComGoogleCommonCollectLinkedListMultimap_Node *previous_;
    ComGoogleCommonCollectLinkedListMultimap_Node *nextSibling_;
    ComGoogleCommonCollectLinkedListMultimap_Node *previousSibling_;
}

- (void)dealloc;
- (id)setValueWithId:(id)arg1;
- (id)getValue;
- (id)getKey;

@end
