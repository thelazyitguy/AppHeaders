//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleCommonCollectAbstractIterator.h"

@protocol JavaUtilComparator, JavaUtilList;

@interface ComGoogleCommonCollectCollections2_OrderedPermutationIterator : ComGoogleCommonCollectAbstractIterator
{
    id <JavaUtilList> nextPermutation_;
    id <JavaUtilComparator> comparator_;
}

- (void)dealloc;
- (int)findNextLWithInt:(int)arg1;
- (int)findNextJ;
- (void)calculateNextPermutation;
- (id)computeNext;

@end
