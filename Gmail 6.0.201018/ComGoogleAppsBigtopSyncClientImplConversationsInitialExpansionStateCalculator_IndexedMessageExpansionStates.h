//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JavaUtilHashMap;
@protocol JavaUtilList;

@interface ComGoogleAppsBigtopSyncClientImplConversationsInitialExpansionStateCalculator_IndexedMessageExpansionStates : NSObject
{
    JavaUtilHashMap *messageExpansionStatesMap_;
    id <JavaUtilList> orderedMessageServerPermIds_;
}

- (void)dealloc;
- (id)size;
- (id)messageIds;
- (void)addWithNSString:(id)arg1 withJBTExpandableElement_ExpansionState:(id)arg2 withJavaLangInteger:(id)arg3;
- (void)addWithNSString:(id)arg1 withJBTExpandableElement_ExpansionState:(id)arg2;
- (void)removeAllWithJavaUtilSet:(id)arg1;
- (id)getMessageServerPermIdWithJavaLangInteger:(id)arg1;
- (void)setExpansionStateWithJavaLangInteger:(id)arg1 withJBTExpandableElement_ExpansionState:(id)arg2;
- (void)setExpansionStateWithNSString:(id)arg1 withJBTExpandableElement_ExpansionState:(id)arg2;
- (id)getExpansionStateWithJavaLangInteger:(id)arg1;
- (id)getExpansionStateWithNSString:(id)arg1;

@end
